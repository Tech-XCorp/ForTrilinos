## Copyright 2017-2018, UT-Battelle, LLC
##
## SPDX-License-Identifier: BSD-3-Clause
## License-Filename: LICENSE
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

IF (ForTrilinos_ENABLE_DeveloperMode)
  IF (ForTrilinos_EXPORT_SWIG)
    # Generate wrapper and proxy files since MPI is enabled
    SET(CMAKE_SWIG_OUTDIR "${CMAKE_CURRENT_SOURCE_DIR}/swig")
  ENDIF()

  MAKE_SWIG_FORTRAN(MODULE forerror
    SOURCE forerror.i
    EXTRASRC ${EXTRA_SOURCE}
    )
ELSE()
  # Use pre-generated files
  SET(GEN_SOURCE
    swig/forerror.F90
    swig/forerrorFORTRAN_wrap.cxx)

  TRIBITS_ADD_LIBRARY(
    forerror
    SOURCES ${GEN_SOURCE})
ENDIF()

TRIBITS_ADD_LIBRARY(
  forutils
  NOINSTALLHEADERS FortranTestUtilities.h
  SOURCES fortest.F90
  DEPLIBS forerror
)

INSTALL(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ForTrilinos.h DESTINATION include)
