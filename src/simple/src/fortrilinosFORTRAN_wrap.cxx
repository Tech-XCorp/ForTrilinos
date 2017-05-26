/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif

/*  Errors in SWIG */
#define  SWIG_UnknownError    	   -1
#define  SWIG_IOError        	   -2
#define  SWIG_RuntimeError   	   -3
#define  SWIG_IndexError     	   -4
#define  SWIG_TypeError      	   -5
#define  SWIG_DivisionByZero 	   -6
#define  SWIG_OverflowError  	   -7
#define  SWIG_SyntaxError    	   -8
#define  SWIG_ValueError     	   -9
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12
#define  SWIG_NullReferenceError   -13




/* Contract support */
#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) { \
swig::fortran_store_exception(SWIG_ValueError, msg); return nullreturn; }


#include <stdexcept>


namespace swig
{
// Functions are defined in an imported module
void fortran_check_unhandled_exception();
void fortran_store_exception(int code, const char *msg);
} // end namespace swig


#include <algorithm>


#include <string>


#include <sstream>


namespace swig
{
void string_size_check(size_t src, size_t dst)
{
    if (dst < src)
    {
        std::ostringstream os;
        os << "String size too small: " << dst << " < " << src;
        throw std::range_error(os.str());
    }
}

void string_copyout(const std::string& str, char* s, size_t count)
{
    string_size_check(str.size(), count);

    s = std::copy(str.begin(), str.end(), s);
    std::fill_n(s, count - str.size(), ' ');
}
}



namespace swig
{
void array_size_check(size_t src, size_t dst)
{
    if (dst < src)
    {
        std::ostringstream os;
        os << "Array size mismatch: " << src << " != " << dst;
        throw std::range_error(os.str());
    }
}
}



#include "solver_handle.hpp"


#include "eigen_handle.hpp"

#ifdef __cplusplus
extern "C" {
#endif
SWIGEXPORT void* swigc_new_SolverHandle() {
  void* fresult = 0 ;
  ForTrilinos::SolverHandle *result = 0 ;
  
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      result = (ForTrilinos::SolverHandle *)new ForTrilinos::SolverHandle();
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return 0; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return 0; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return 0; 
      } while(0);
    }
  }
  fresult = result;
  return fresult;
}


SWIGEXPORT void swigc_SolverHandle_init__SWIG_0(void* farg1) {
  ForTrilinos::SolverHandle *arg1 = (ForTrilinos::SolverHandle *) 0 ;
  
  arg1 = (ForTrilinos::SolverHandle *)(farg1);
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->init();
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_SolverHandle_init__SWIG_1(void* farg1, const int* farg2) {
  ForTrilinos::SolverHandle *arg1 = (ForTrilinos::SolverHandle *) 0 ;
  MPI_Comm arg2 ;
  
  arg1 = (ForTrilinos::SolverHandle *)(farg1);
  
#ifdef HAVE_MPI
  arg2 = (MPI_Comm)(MPI_Comm_f2c(*(MPI_Fint *)(farg2)));
#else
  arg2 = *farg2;
#endif
  
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->init(arg2);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_SolverHandle_setup_matrix(void* farg1, const int* farg2, int * farg3, int * farg4, const int* farg5, int * farg6, double * farg7) {
  ForTrilinos::SolverHandle *arg1 = (ForTrilinos::SolverHandle *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  int *arg4 = (int *) 0 ;
  int arg5 ;
  int *arg6 = (int *) 0 ;
  double *arg7 = (double *) 0 ;
  
  arg1 = (ForTrilinos::SolverHandle *)(farg1);
  arg2 = *farg2;
  arg3 = farg3;
  arg4 = farg4;
  arg5 = *farg5;
  arg6 = farg6;
  arg7 = farg7;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->setup_matrix(arg2,(int const *)arg3,(int const *)arg4,arg5,(int const *)arg6,(double const *)arg7);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_SolverHandle_setup_operator(void* farg1, const int* farg2, int * farg3, ForTrilinos::SolverHandle::OperatorCallback farg4) {
  ForTrilinos::SolverHandle *arg1 = (ForTrilinos::SolverHandle *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  ForTrilinos::SolverHandle::OperatorCallback arg4 = (ForTrilinos::SolverHandle::OperatorCallback) 0 ;
  
  arg1 = (ForTrilinos::SolverHandle *)(farg1);
  arg2 = *farg2;
  arg3 = farg3;
  arg4 = farg4;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->setup_operator(arg2,(int const *)arg3,arg4);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_SolverHandle_setup_solver(void* farg1, void * farg2) {
  ForTrilinos::SolverHandle *arg1 = (ForTrilinos::SolverHandle *) 0 ;
  Teuchos::RCP< Teuchos::ParameterList > *arg2 = 0 ;
  Teuchos::RCP< Teuchos::ParameterList > tempnull2 ;
  
  arg1 = (ForTrilinos::SolverHandle *)(farg1);
  arg2 = farg2 ? (Teuchos::RCP< Teuchos::ParameterList > *)farg2 : &tempnull2;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->setup_solver((Teuchos::RCP< Teuchos::ParameterList > const &)*arg2);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_SolverHandle_solve(const void* farg1, const int* farg2, double * farg3, double * farg4) {
  ForTrilinos::SolverHandle *arg1 = (ForTrilinos::SolverHandle *) 0 ;
  int arg2 ;
  double *arg3 = (double *) 0 ;
  double *arg4 = (double *) 0 ;
  
  arg1 = (ForTrilinos::SolverHandle *)(farg1);
  arg2 = *farg2;
  arg3 = farg3;
  arg4 = farg4;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      ((ForTrilinos::SolverHandle const *)arg1)->solve(arg2,(double const *)arg3,arg4);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_SolverHandle_finalize(void* farg1) {
  ForTrilinos::SolverHandle *arg1 = (ForTrilinos::SolverHandle *) 0 ;
  
  arg1 = (ForTrilinos::SolverHandle *)(farg1);
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->finalize();
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_delete_SolverHandle(void* farg1) {
  ForTrilinos::SolverHandle *arg1 = (ForTrilinos::SolverHandle *) 0 ;
  
  arg1 = (ForTrilinos::SolverHandle *)(farg1);
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      delete arg1;
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void* swigc_new_EigenHandle() {
  void* fresult = 0 ;
  ForTrilinos::EigenHandle *result = 0 ;
  
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      result = (ForTrilinos::EigenHandle *)new ForTrilinos::EigenHandle();
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return 0; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return 0; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return 0; 
      } while(0);
    }
  }
  fresult = result;
  return fresult;
}


SWIGEXPORT void swigc_EigenHandle_init__SWIG_0(void* farg1) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->init();
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_EigenHandle_init__SWIG_1(void* farg1, const int* farg2) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  MPI_Comm arg2 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  
#ifdef HAVE_MPI
  arg2 = (MPI_Comm)(MPI_Comm_f2c(*(MPI_Fint *)(farg2)));
#else
  arg2 = *farg2;
#endif
  
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->init(arg2);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_EigenHandle_setup_matrix(void* farg1, const int* farg2, int * farg3, int * farg4, const int* farg5, int * farg6, double * farg7) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  int *arg4 = (int *) 0 ;
  int arg5 ;
  int *arg6 = (int *) 0 ;
  double *arg7 = (double *) 0 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  arg2 = *farg2;
  arg3 = farg3;
  arg4 = farg4;
  arg5 = *farg5;
  arg6 = farg6;
  arg7 = farg7;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->setup_matrix(arg2,(int const *)arg3,(int const *)arg4,arg5,(int const *)arg6,(double const *)arg7);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_EigenHandle_setup_matrix_rhs(void* farg1, const int* farg2, int * farg3, int * farg4, const int* farg5, int * farg6, double * farg7) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  int *arg4 = (int *) 0 ;
  int arg5 ;
  int *arg6 = (int *) 0 ;
  double *arg7 = (double *) 0 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  arg2 = *farg2;
  arg3 = farg3;
  arg4 = farg4;
  arg5 = *farg5;
  arg6 = farg6;
  arg7 = farg7;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->setup_matrix_rhs(arg2,(int const *)arg3,(int const *)arg4,arg5,(int const *)arg6,(double const *)arg7);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_EigenHandle_setup_operator(void* farg1, const int* farg2, int * farg3, ForTrilinos::EigenHandle::OperatorCallback farg4) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  ForTrilinos::EigenHandle::OperatorCallback arg4 = (ForTrilinos::EigenHandle::OperatorCallback) 0 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  arg2 = *farg2;
  arg3 = farg3;
  arg4 = farg4;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->setup_operator(arg2,(int const *)arg3,arg4);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_EigenHandle_setup_operator_rhs(void* farg1, const int* farg2, int * farg3, ForTrilinos::EigenHandle::OperatorCallback farg4) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  ForTrilinos::EigenHandle::OperatorCallback arg4 = (ForTrilinos::EigenHandle::OperatorCallback) 0 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  arg2 = *farg2;
  arg3 = farg3;
  arg4 = farg4;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->setup_operator_rhs(arg2,(int const *)arg3,arg4);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_EigenHandle_setup_solver(void* farg1, void * farg2) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  Teuchos::RCP< Teuchos::ParameterList > *arg2 = 0 ;
  Teuchos::RCP< Teuchos::ParameterList > tempnull2 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  arg2 = farg2 ? (Teuchos::RCP< Teuchos::ParameterList > *)farg2 : &tempnull2;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->setup_solver((Teuchos::RCP< Teuchos::ParameterList > const &)*arg2);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_EigenHandle_solve(const void* farg1, const int* farg2, double * farg3, const int* farg4, double * farg5) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  int arg2 ;
  double *arg3 = (double *) 0 ;
  int arg4 ;
  double *arg5 = (double *) 0 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  arg2 = *farg2;
  arg3 = farg3;
  arg4 = *farg4;
  arg5 = farg5;
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      ((ForTrilinos::EigenHandle const *)arg1)->solve(arg2,arg3,arg4,arg5);
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_EigenHandle_finalize(void* farg1) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      (arg1)->finalize();
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


SWIGEXPORT void swigc_delete_EigenHandle(void* farg1) {
  ForTrilinos::EigenHandle *arg1 = (ForTrilinos::EigenHandle *) 0 ;
  
  arg1 = (ForTrilinos::EigenHandle *)(farg1);
  {
    // Make sure no unhandled exceptions exist before performing a new action
    swig::fortran_check_unhandled_exception();
    try
    {
      // Attempt the wrapped function call
      delete arg1;
    }
    catch (const std::range_error& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_IndexError, e.what()); return ; 
      } while(0);
    }
    catch (const std::exception& e)
    {
      // Store a C++ exception
      do {
        swig::fortran_store_exception(SWIG_RuntimeError, e.what()); return ; 
      } while(0);
    }
    catch (...)
    {
      do {
        swig::fortran_store_exception(SWIG_UnknownError, "An unknown exception occurred"); return ; 
      } while(0);
    }
  }
}


#ifdef __cplusplus
}
#endif

