#ifndef FORTRILINOS_EIGEN_HANDLE_HPP
#define FORTRILINOS_EIGEN_HANDLE_HPP

#include "ForTrilinosSimpleInterface_config.hpp"

#ifdef HAVE_MPI
#include <mpi.h>
#else
typedef int MPI_Comm;
#endif

#include <Teuchos_Comm.hpp>
#include <Teuchos_ParameterList.hpp>
#include <Teuchos_RCP.hpp>

#include <Tpetra_CrsMatrix.hpp>
#include <Tpetra_MultiVector.hpp>

#include <AnasaziSolverManager.hpp>

#include "fortran_operator.hpp"


namespace ForTrilinos {

  class EigenHandle {
  private:
    typedef double                                  SC;
    typedef int                                     LO;
    typedef int                                     GO;
    typedef Kokkos::Compat::KokkosSerialWrapperNode NO;
    typedef size_t                                  global_size_t;
    typedef Teuchos::ParameterList                  ParameterList;

  public:
    typedef void (*OperatorCallback)(int n, const double* x, double* y);
    typedef Tpetra::Map<LO,GO,NO>                   Map;
    typedef Tpetra::Operator<SC,LO,GO,NO>           Operator;
    typedef Tpetra::CrsMatrix<SC,LO,GO,NO>          Matrix;
    typedef Tpetra::Vector<SC,LO,GO,NO>             Vector;
    typedef Tpetra::MultiVector<SC,LO,GO,NO>        MultiVector;
    typedef Anasazi::SolverManager<SC,MultiVector,Operator> SolverManager;

  public:

    // Constructors
    EigenHandle() : status_(NOT_INITIALIZED) { }

    EigenHandle(const EigenHandle&) = delete;
    void operator=(const EigenHandle&) = delete;

    // Initialize
    void init();
    void init(MPI_Comm comm);

    // Setup matrices by construction
    void setup_matrix(int numRows, const int* rowInds, const int* rowPtrs, int numNnz, const int* colInds, const double* values);
    void setup_matrix_rhs(int numRows, const int* rowInds, const int* rowPtrs, int numNnz, const int* colInds, const double* values);

    // Setup matrices by user provided data
    void setup_matrix(Teuchos::RCP<Matrix> A);
    void setup_matrix_rhs(Teuchos::RCP<Matrix> M);

    // Setup operators
    void setup_operator(int numRows, const int* rowInds, OperatorCallback callback);
    void setup_operator_rhs(int numRows, const int* rowInds, OperatorCallback callback);

    // Setup solver based on the parameter list
    void setup_solver(const Teuchos::RCP<Teuchos::ParameterList>& paramList);

    // Solve linear system given rhs
    void solve(int numEigs, double* eigenValues, int size, double* eigenVectors) const;

    // Free all data
    void finalize();

  private:
    // Setup matrix
    Teuchos::RCP<Operator> setup_matrix_gen(int numRows, const int* rowInds, const int* rowPtrs, int numNnz, const int* colInds, const double* values);

    // Setup operator
    Teuchos::RCP<Operator> setup_operator_gen(int numRows, const int* rowInds, OperatorCallback callback);

  private:

    Teuchos::RCP<Teuchos::Comm<int>> comm_;
    Teuchos::RCP<Operator>           A_, M_;
    Teuchos::RCP<SolverManager>      solver_;
    Teuchos::RCP<ParameterList>      paramList_;

    enum Status {
      NOT_INITIALIZED,
      INITIALIZED,
      MATRIX_SETUP,
      SOLVER_SETUP,
    } status_;
  };

}
#endif // FORTRILINOS_EIGEN_HANDLE_HPP
