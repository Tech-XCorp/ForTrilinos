! This file was automatically generated by SWIG (http://www.swig.org).
! Version 4.0.0
!
! Do not make changes to this file unless you know what you are doing--modify
! the SWIG interface file instead.
module fortrilinos
 use, intrinsic :: ISO_C_BINDING
 use forteuchos
 implicit none

 ! PUBLIC METHODS AND TYPES
 public :: SolverHandle
 public :: EigenHandle
 ! TYPES
 type :: SolverHandle
  ! These should be treated as PROTECTED data
  type(C_PTR), public :: ptr = C_NULL_PTR
  logical, public :: own = .false.
 contains
  procedure :: create => swigf_new_SolverHandle
  procedure, private :: init__SWIG_0 => swigf_SolverHandle_init__SWIG_0
  procedure, private :: init__SWIG_1 => swigf_SolverHandle_init__SWIG_1
  procedure :: setup_matrix => swigf_SolverHandle_setup_matrix
  procedure :: setup_operator => swigf_SolverHandle_setup_operator
  procedure :: setup_solver => swigf_SolverHandle_setup_solver
  procedure :: solve => swigf_SolverHandle_solve
  procedure :: finalize => swigf_SolverHandle_finalize
  procedure :: release => swigf_delete_SolverHandle
  generic :: init => init__SWIG_0, init__SWIG_1
 end type
 type :: EigenHandle
  ! These should be treated as PROTECTED data
  type(C_PTR), public :: ptr = C_NULL_PTR
  logical, public :: own = .false.
 contains
  procedure :: create => swigf_new_EigenHandle
  procedure, private :: init__SWIG_0 => swigf_EigenHandle_init__SWIG_0
  procedure, private :: init__SWIG_1 => swigf_EigenHandle_init__SWIG_1
  procedure :: setup_matrix => swigf_EigenHandle_setup_matrix
  procedure :: setup_matrix_rhs => swigf_EigenHandle_setup_matrix_rhs
  procedure :: setup_operator => swigf_EigenHandle_setup_operator
  procedure :: setup_operator_rhs => swigf_EigenHandle_setup_operator_rhs
  procedure :: setup_solver => swigf_EigenHandle_setup_solver
  procedure :: solve => swigf_EigenHandle_solve
  procedure :: finalize => swigf_EigenHandle_finalize
  procedure :: release => swigf_delete_EigenHandle
  generic :: init => init__SWIG_0, init__SWIG_1
 end type

 ! WRAPPER DECLARATIONS
 private
 interface
  function swigc_new_SolverHandle() &
     bind(C, name="swigc_new_SolverHandle") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR) :: fresult
  end function
  subroutine swigc_SolverHandle_init__SWIG_0(farg1) &
     bind(C, name="swigc_SolverHandle_init__SWIG_0")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
  end subroutine
  subroutine swigc_SolverHandle_init__SWIG_1(farg1, farg2) &
     bind(C, name="swigc_SolverHandle_init__SWIG_1")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
  end subroutine
  subroutine swigc_SolverHandle_setup_matrix(farg1, farg2, farg3, farg4, farg5, farg6, farg7) &
     bind(C, name="swigc_SolverHandle_setup_matrix")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
   integer(C_INT), dimension(*), intent(in) :: farg3
   integer(C_INT), dimension(*), intent(in) :: farg4
   integer(C_INT), intent(in) :: farg5
   integer(C_INT), dimension(*), intent(in) :: farg6
   real(C_DOUBLE), dimension(*), intent(in) :: farg7
  end subroutine
  subroutine swigc_SolverHandle_setup_operator(farg1, farg2, farg3, farg4) &
     bind(C, name="swigc_SolverHandle_setup_operator")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
   integer(C_INT), dimension(*), intent(in) :: farg3
   type(C_FUNPTR), intent(in), value :: farg4
  end subroutine
  subroutine swigc_SolverHandle_setup_solver(farg1, farg2) &
     bind(C, name="swigc_SolverHandle_setup_solver")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   type(C_PTR), value :: farg2
  end subroutine
  subroutine swigc_SolverHandle_solve(farg1, farg2, farg3, farg4) &
     bind(C, name="swigc_SolverHandle_solve")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
   real(C_DOUBLE), dimension(*), intent(in) :: farg3
   real(C_DOUBLE), dimension(*), intent(inout) :: farg4
  end subroutine
  subroutine swigc_SolverHandle_finalize(farg1) &
     bind(C, name="swigc_SolverHandle_finalize")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
  end subroutine
  subroutine swigc_delete_SolverHandle(farg1) &
     bind(C, name="swigc_delete_SolverHandle")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
  end subroutine
  function swigc_new_EigenHandle() &
     bind(C, name="swigc_new_EigenHandle") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR) :: fresult
  end function
  subroutine swigc_EigenHandle_init__SWIG_0(farg1) &
     bind(C, name="swigc_EigenHandle_init__SWIG_0")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
  end subroutine
  subroutine swigc_EigenHandle_init__SWIG_1(farg1, farg2) &
     bind(C, name="swigc_EigenHandle_init__SWIG_1")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
  end subroutine
  subroutine swigc_EigenHandle_setup_matrix(farg1, farg2, farg3, farg4, farg5, farg6, farg7) &
     bind(C, name="swigc_EigenHandle_setup_matrix")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
   integer(C_INT), dimension(*), intent(in) :: farg3
   integer(C_INT), dimension(*), intent(in) :: farg4
   integer(C_INT), intent(in) :: farg5
   integer(C_INT), dimension(*), intent(in) :: farg6
   real(C_DOUBLE), dimension(*), intent(in) :: farg7
  end subroutine
  subroutine swigc_EigenHandle_setup_matrix_rhs(farg1, farg2, farg3, farg4, farg5, farg6, farg7) &
     bind(C, name="swigc_EigenHandle_setup_matrix_rhs")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
   integer(C_INT), dimension(*), intent(in) :: farg3
   integer(C_INT), dimension(*), intent(in) :: farg4
   integer(C_INT), intent(in) :: farg5
   integer(C_INT), dimension(*), intent(in) :: farg6
   real(C_DOUBLE), dimension(*), intent(in) :: farg7
  end subroutine
  subroutine swigc_EigenHandle_setup_operator(farg1, farg2, farg3, farg4) &
     bind(C, name="swigc_EigenHandle_setup_operator")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
   integer(C_INT), dimension(*), intent(in) :: farg3
   type(C_FUNPTR), intent(in), value :: farg4
  end subroutine
  subroutine swigc_EigenHandle_setup_operator_rhs(farg1, farg2, farg3, farg4) &
     bind(C, name="swigc_EigenHandle_setup_operator_rhs")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
   integer(C_INT), dimension(*), intent(in) :: farg3
   type(C_FUNPTR), intent(in), value :: farg4
  end subroutine
  subroutine swigc_EigenHandle_setup_solver(farg1, farg2) &
     bind(C, name="swigc_EigenHandle_setup_solver")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   type(C_PTR), value :: farg2
  end subroutine
  subroutine swigc_EigenHandle_solve(farg1, farg2, farg3, farg4, farg5) &
     bind(C, name="swigc_EigenHandle_solve")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   integer(C_INT), intent(in) :: farg2
   real(C_DOUBLE), dimension(*), intent(inout) :: farg3
   integer(C_INT), intent(in) :: farg4
   real(C_DOUBLE), dimension(*), intent(inout) :: farg5
  end subroutine
  subroutine swigc_EigenHandle_finalize(farg1) &
     bind(C, name="swigc_EigenHandle_finalize")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
  end subroutine
  subroutine swigc_delete_EigenHandle(farg1) &
     bind(C, name="swigc_delete_EigenHandle")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
  end subroutine
 end interface

contains
  ! FORTRAN PROXY CODE
  subroutine swigf_new_SolverHandle(self)
   use, intrinsic :: ISO_C_BINDING
   class(SolverHandle) :: self
   if (c_associated(self%ptr)) call self%release()
   self%ptr = swigc_new_SolverHandle()
   self%own = .true.
  end subroutine
  subroutine swigf_SolverHandle_init__SWIG_0(self)
   use, intrinsic :: ISO_C_BINDING
   class(SolverHandle) :: self
   call swigc_SolverHandle_init__SWIG_0(self%ptr)
  end subroutine
  subroutine swigf_SolverHandle_init__SWIG_1(self, comm)
   use, intrinsic :: ISO_C_BINDING
   class(SolverHandle) :: self
   integer(C_INT), intent(in) :: comm
   call swigc_SolverHandle_init__SWIG_1(self%ptr, comm)
  end subroutine
  subroutine swigf_SolverHandle_setup_matrix(self, numRows, rowInds, rowPtrs, numNnz, colInds, values)
   use, intrinsic :: ISO_C_BINDING
   class(SolverHandle) :: self
   integer(C_INT), intent(in) :: numRows
   integer(C_INT), dimension(:), intent(in) :: rowInds
   integer(C_INT), dimension(:), intent(in) :: rowPtrs
   integer(C_INT), intent(in) :: numNnz
   integer(C_INT), dimension(:), intent(in) :: colInds
   real(C_DOUBLE), dimension(:), intent(in) :: values
   call swigc_SolverHandle_setup_matrix(self%ptr, numRows, rowInds, rowPtrs, numNnz, colInds, values)
  end subroutine
  subroutine swigf_SolverHandle_setup_operator(self, numRows, rowInds, callback)
   use, intrinsic :: ISO_C_BINDING
   class(SolverHandle) :: self
   integer(C_INT), intent(in) :: numRows
   integer(C_INT), dimension(:), intent(in) :: rowInds
   type(C_FUNPTR), intent(in), value :: callback
   call swigc_SolverHandle_setup_operator(self%ptr, numRows, rowInds, callback)
  end subroutine
  subroutine swigf_SolverHandle_setup_solver(self, paramList)
   use, intrinsic :: ISO_C_BINDING
   class(SolverHandle) :: self
   type(ParameterList) :: paramList
   call swigc_SolverHandle_setup_solver(self%ptr, paramList%ptr)
  end subroutine
  subroutine swigf_SolverHandle_solve(self, size, rhs, lhs)
   use, intrinsic :: ISO_C_BINDING
   class(SolverHandle) :: self
   integer(C_INT), intent(in) :: size
   real(C_DOUBLE), dimension(:), intent(in) :: rhs
   real(C_DOUBLE), dimension(:), intent(inout) :: lhs
   call swigc_SolverHandle_solve(self%ptr, size, rhs, lhs)
  end subroutine
  subroutine swigf_SolverHandle_finalize(self)
   use, intrinsic :: ISO_C_BINDING
   class(SolverHandle) :: self
   call swigc_SolverHandle_finalize(self%ptr)
  end subroutine
  subroutine swigf_delete_SolverHandle(self)
   use, intrinsic :: ISO_C_BINDING
   class(SolverHandle) :: self
   if (self%own) then
    call swigc_delete_SolverHandle(self%ptr)
    self%own = .false.
   end if
   self%ptr = C_NULL_PTR
  end subroutine
  subroutine swigf_new_EigenHandle(self)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   if (c_associated(self%ptr)) call self%release()
   self%ptr = swigc_new_EigenHandle()
   self%own = .true.
  end subroutine
  subroutine swigf_EigenHandle_init__SWIG_0(self)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   call swigc_EigenHandle_init__SWIG_0(self%ptr)
  end subroutine
  subroutine swigf_EigenHandle_init__SWIG_1(self, comm)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   integer(C_INT), intent(in) :: comm
   call swigc_EigenHandle_init__SWIG_1(self%ptr, comm)
  end subroutine
  subroutine swigf_EigenHandle_setup_matrix(self, numRows, rowInds, rowPtrs, numNnz, colInds, values)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   integer(C_INT), intent(in) :: numRows
   integer(C_INT), dimension(:), intent(in) :: rowInds
   integer(C_INT), dimension(:), intent(in) :: rowPtrs
   integer(C_INT), intent(in) :: numNnz
   integer(C_INT), dimension(:), intent(in) :: colInds
   real(C_DOUBLE), dimension(:), intent(in) :: values
   call swigc_EigenHandle_setup_matrix(self%ptr, numRows, rowInds, rowPtrs, numNnz, colInds, values)
  end subroutine
  subroutine swigf_EigenHandle_setup_matrix_rhs(self, numRows, rowInds, rowPtrs, numNnz, colInds, values)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   integer(C_INT), intent(in) :: numRows
   integer(C_INT), dimension(:), intent(in) :: rowInds
   integer(C_INT), dimension(:), intent(in) :: rowPtrs
   integer(C_INT), intent(in) :: numNnz
   integer(C_INT), dimension(:), intent(in) :: colInds
   real(C_DOUBLE), dimension(:), intent(in) :: values
   call swigc_EigenHandle_setup_matrix_rhs(self%ptr, numRows, rowInds, rowPtrs, numNnz, colInds, values)
  end subroutine
  subroutine swigf_EigenHandle_setup_operator(self, numRows, rowInds, callback)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   integer(C_INT), intent(in) :: numRows
   integer(C_INT), dimension(:), intent(in) :: rowInds
   type(C_FUNPTR), intent(in), value :: callback
   call swigc_EigenHandle_setup_operator(self%ptr, numRows, rowInds, callback)
  end subroutine
  subroutine swigf_EigenHandle_setup_operator_rhs(self, numRows, rowInds, callback)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   integer(C_INT), intent(in) :: numRows
   integer(C_INT), dimension(:), intent(in) :: rowInds
   type(C_FUNPTR), intent(in), value :: callback
   call swigc_EigenHandle_setup_operator_rhs(self%ptr, numRows, rowInds, callback)
  end subroutine
  subroutine swigf_EigenHandle_setup_solver(self, paramList)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   type(ParameterList) :: paramList
   call swigc_EigenHandle_setup_solver(self%ptr, paramList%ptr)
  end subroutine
  subroutine swigf_EigenHandle_solve(self, numEigs, eigenValues, size, eigenVectors)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   integer(C_INT), intent(in) :: numEigs
   real(C_DOUBLE), dimension(:), intent(inout) :: eigenValues
   integer(C_INT), intent(in) :: size
   real(C_DOUBLE), dimension(:), intent(inout) :: eigenVectors
   call swigc_EigenHandle_solve(self%ptr, numEigs, eigenValues, size, eigenVectors)
  end subroutine
  subroutine swigf_EigenHandle_finalize(self)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   call swigc_EigenHandle_finalize(self%ptr)
  end subroutine
  subroutine swigf_delete_EigenHandle(self)
   use, intrinsic :: ISO_C_BINDING
   class(EigenHandle) :: self
   if (self%own) then
    call swigc_delete_EigenHandle(self%ptr)
    self%own = .false.
   end if
   self%ptr = C_NULL_PTR
  end subroutine
end module fortrilinos
