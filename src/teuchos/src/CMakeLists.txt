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

  MAKE_SWIG_FORTRAN(MODULE forteuchos
    SOURCE forteuchos.i
    )
ELSE()
  # Use pre-generated files
  SET(GEN_SOURCE
    swig/forteuchos.F90
    swig/forteuchosFORTRAN_wrap.cxx)

  TRIBITS_ADD_LIBRARY(
    forteuchos
    SOURCES ${GEN_SOURCE})
ENDIF()

INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/forteuchos.mod DESTINATION include)
