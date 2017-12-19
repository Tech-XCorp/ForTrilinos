! This file was automatically generated by SWIG (http://www.swig.org).
! Version 4.0.0
!
! Do not make changes to this file unless you know what you are doing--modify
! the SWIG interface file instead.

! Copyright 2017, UT-Battelle, LLC
!
! SPDX-License-Identifier: BSD-3-Clause
! License-Filename: LICENSE

module forerror
 use, intrinsic :: ISO_C_BINDING
 implicit none
 private

 ! PUBLIC METHODS AND TYPES

 public :: fortrilinos_ierr


type, bind(C) :: SwigfArrayWrapper
  type(C_PTR), public :: data
  integer(C_SIZE_T), public :: size
end type

 public :: fortrilinos_get_serr

 ! PARAMETERS
 integer(C_INT), parameter, public :: SWIG_FORTRAN_ERROR_STRLEN = 1024_C_INT

 integer(C_INT), bind(C) :: fortrilinos_ierr = 0


 ! WRAPPER DECLARATIONS
 interface
function swigc_fortrilinos_get_serr() &
bind(C, name="swigc_fortrilinos_get_serr") &
result(fresult)
use, intrinsic :: ISO_C_BINDING
import :: SwigfArrayWrapper
type(SwigfArrayWrapper) :: fresult
end function

 end interface


contains
 ! FORTRAN PROXY CODE
function fortrilinos_get_serr() &
result(swigf_result)
use, intrinsic :: ISO_C_BINDING
character(kind=C_CHAR, len=:), allocatable :: swigf_result

integer(kind=C_SIZE_T) :: fresult_i
character(kind=C_CHAR), dimension(:), pointer :: fresult_chars
type(SwigfArrayWrapper) :: fresult 

fresult = swigc_fortrilinos_get_serr()

call c_f_pointer(fresult%data, fresult_chars, [fresult%size])
allocate(character(kind=C_CHAR, len=fresult%size) :: swigf_result)
do fresult_i=1,fresult%size
swigf_result(fresult_i:fresult_i) = fresult_chars(fresult_i)
enddo
end function


end module