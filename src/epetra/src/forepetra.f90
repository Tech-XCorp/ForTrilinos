! This file was automatically generated by SWIG (http://www.swig.org).
! Version 3.0.12
!
! Do not make changes to this file unless you know what you are doing--modify
! the SWIG interface file instead.
module forepetra
 use, intrinsic :: ISO_C_BINDING
 implicit none

 ! PUBLIC METHODS AND TYPES
 public :: Epetra_Object
 ! TYPES
 type :: Epetra_Object
  type(C_PTR), public :: ptr = C_NULL_PTR
  logical, private :: own = .false.
 contains
  procedure, private :: create__SWIG_0 => swigf_new_Epetra_Object__SWIG_0
  procedure, private :: create__SWIG_1 => swigf_new_Epetra_Object__SWIG_1
  procedure, private :: create__SWIG_2 => swigf_new_Epetra_Object__SWIG_2
  procedure, private :: create__SWIG_3 => swigf_new_Epetra_Object__SWIG_3
  procedure, private :: create__SWIG_4 => swigf_new_Epetra_Object__SWIG_4
  procedure, private :: create__SWIG_5 => swigf_new_Epetra_Object__SWIG_5
  procedure :: release => swigf_delete_Epetra_Object
  procedure :: SetLabel => swigf_Epetra_Object_SetLabel
  generic :: create => create__SWIG_0, create__SWIG_1, create__SWIG_2, create__SWIG_3, create__SWIG_4, create__SWIG_5
 end type

 ! WRAPPER DECLARATIONS
 private
 interface
  function swigc_new_Epetra_Object__SWIG_0(farg1, farg2) &
     bind(C, name="swigc_new_Epetra_Object__SWIG_0") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR) :: fresult
   integer(C_INT), intent(in) :: farg1
   logical(C_BOOL), intent(in) :: farg2
  end function
  function swigc_new_Epetra_Object__SWIG_1(farg1) &
     bind(C, name="swigc_new_Epetra_Object__SWIG_1") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR) :: fresult
   integer(C_INT), intent(in) :: farg1
  end function
  function swigc_new_Epetra_Object__SWIG_2() &
     bind(C, name="swigc_new_Epetra_Object__SWIG_2") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR) :: fresult
  end function
  function swigc_new_Epetra_Object__SWIG_3(farg1, farg2) &
     bind(C, name="swigc_new_Epetra_Object__SWIG_3") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR) :: fresult
   character(C_CHAR) :: farg1
   integer(C_INT), intent(in) :: farg2
  end function
  function swigc_new_Epetra_Object__SWIG_4(farg1) &
     bind(C, name="swigc_new_Epetra_Object__SWIG_4") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR) :: fresult
   character(C_CHAR) :: farg1
  end function
  function swigc_new_Epetra_Object__SWIG_5(farg1) &
     bind(C, name="swigc_new_Epetra_Object__SWIG_5") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR) :: fresult
   type(C_PTR), value :: farg1
  end function
  subroutine swigc_delete_Epetra_Object(farg1) &
     bind(C, name="swigc_delete_Epetra_Object")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
  end subroutine
  subroutine swigc_Epetra_Object_SetLabel(farg1, farg2) &
     bind(C, name="swigc_Epetra_Object_SetLabel")
   use, intrinsic :: ISO_C_BINDING
   type(C_PTR), value :: farg1
   character(C_CHAR) :: farg2
  end subroutine
  subroutine swigc_Epetra_Object_SetTracebackMode(farg1) &
     bind(C, name="swigc_Epetra_Object_SetTracebackMode")
   use, intrinsic :: ISO_C_BINDING
   integer(C_INT), intent(in) :: farg1
  end subroutine
  function swigc_Epetra_Object_GetTracebackMode() &
     bind(C, name="swigc_Epetra_Object_GetTracebackMode") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   integer(C_INT) :: fresult
  end function
  subroutine swigc_set_Epetra_Object_TracebackMode(farg1) &
     bind(C, name="swigc_set_Epetra_Object_TracebackMode")
   use, intrinsic :: ISO_C_BINDING
   integer(C_INT), intent(in) :: farg1
  end subroutine
  function swigc_get_Epetra_Object_TracebackMode() &
     bind(C, name="swigc_get_Epetra_Object_TracebackMode") &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   integer(C_INT) :: fresult
  end function
 end interface

contains
  ! FORTRAN PROXY CODE
  subroutine swigf_new_Epetra_Object__SWIG_0(self, TracebackModeIn, set_label)
   use, intrinsic :: ISO_C_BINDING
   class(Epetra_Object) :: self
   integer(C_INT), intent(in) :: TracebackModeIn
   logical(C_BOOL), intent(in) :: set_label
   if (c_associated(self%ptr)) call self%release()
   self%ptr = swigc_new_Epetra_Object__SWIG_0(TracebackModeIn, set_label)
   self%own = .true.
  end subroutine
  subroutine swigf_new_Epetra_Object__SWIG_1(self, TracebackModeIn)
   use, intrinsic :: ISO_C_BINDING
   class(Epetra_Object) :: self
   integer(C_INT), intent(in) :: TracebackModeIn
   if (c_associated(self%ptr)) call self%release()
   self%ptr = swigc_new_Epetra_Object__SWIG_1(TracebackModeIn)
   self%own = .true.
  end subroutine
  subroutine swigf_new_Epetra_Object__SWIG_2(self)
   use, intrinsic :: ISO_C_BINDING
   class(Epetra_Object) :: self
   if (c_associated(self%ptr)) call self%release()
   self%ptr = swigc_new_Epetra_Object__SWIG_2()
   self%own = .true.
  end subroutine
  subroutine swigf_new_Epetra_Object__SWIG_3(self, Label, TracebackModeIn)
   use, intrinsic :: ISO_C_BINDING
   class(Epetra_Object) :: self
   character(len=*) :: Label
   integer(C_INT), intent(in) :: TracebackModeIn
   if (c_associated(self%ptr)) call self%release()
   self%ptr = swigc_new_Epetra_Object__SWIG_3(Label, TracebackModeIn)
   self%own = .true.
  end subroutine
  subroutine swigf_new_Epetra_Object__SWIG_4(self, Label)
   use, intrinsic :: ISO_C_BINDING
   class(Epetra_Object) :: self
   character(len=*) :: Label
   if (c_associated(self%ptr)) call self%release()
   self%ptr = swigc_new_Epetra_Object__SWIG_4(Label)
   self%own = .true.
  end subroutine
  subroutine swigf_new_Epetra_Object__SWIG_5(self, Object)
   use, intrinsic :: ISO_C_BINDING
   class(Epetra_Object) :: self
   class(Epetra_Object) :: Object
   if (c_associated(self%ptr)) call self%release()
   self%ptr = swigc_new_Epetra_Object__SWIG_5(Object%ptr)
   self%own = .true.
  end subroutine
  subroutine swigf_delete_Epetra_Object(self)
   use, intrinsic :: ISO_C_BINDING
   class(Epetra_Object) :: self
   if (self%own) then
    call swigc_delete_Epetra_Object(self%ptr)
    self%own = .false.
   end if
   self%ptr = C_NULL_PTR
  end subroutine
  subroutine swigf_Epetra_Object_SetLabel(self, Label)
   use, intrinsic :: ISO_C_BINDING
   class(Epetra_Object) :: self
   character(len=*) :: Label
   call swigc_Epetra_Object_SetLabel(self%ptr, Label)
  end subroutine
  subroutine swigf_Epetra_Object_SetTracebackMode(TracebackModeValue)
   use, intrinsic :: ISO_C_BINDING
   integer(C_INT), intent(in) :: TracebackModeValue
   call swigc_Epetra_Object_SetTracebackMode(TracebackModeValue)
  end subroutine
  function swigf_Epetra_Object_GetTracebackMode() &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   integer(C_INT) :: fresult
   fresult = swigc_Epetra_Object_GetTracebackMode()
  end function
  subroutine swigf_set_Epetra_Object_TracebackMode(Epetra_Object::TracebackMode)
   use, intrinsic :: ISO_C_BINDING
   integer(C_INT), intent(in) :: Epetra_Object::TracebackMode
   call swigc_set_Epetra_Object_TracebackMode(Epetra_Object::TracebackMode)
  end subroutine
  function swigf_get_Epetra_Object_TracebackMode() &
     result(fresult)
   use, intrinsic :: ISO_C_BINDING
   integer(C_INT) :: fresult
   fresult = swigc_get_Epetra_Object_TracebackMode()
  end function
end module forepetra
