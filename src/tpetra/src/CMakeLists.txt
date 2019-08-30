## Copyright 2017-2018, UT-Battelle, LLC
##
## SPDX-License-Identifier: BSD-3-Clause
## License-Filename: LICENSE
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

IF (ForTrilinos_ENABLE_DeveloperMode)
  CONFIGURE_FILE(${CMAKE_CURRENT_SOURCE_DIR}/fortpetra.i.in
    ${CMAKE_CURRENT_SOURCE_DIR}/${Kokkos_NODE_TYPE}/fortpetra.i @ONLY)

  IF (ForTrilinos_EXPORT_SWIG)
    # Generate wrapper and proxy files since MPI is enabled
    SET(CMAKE_SWIG_OUTDIR "${CMAKE_CURRENT_SOURCE_DIR}/swig/${Kokkos_NODE_TYPE}")
  ENDIF()

  LIST(APPEND CMAKE_SWIG_FLAGS -I${CMAKE_CURRENT_SOURCE_DIR}/../../utils/src/)
  MAKE_SWIG_FORTRAN(MODULE fortpetra
    SOURCE ${Kokkos_NODE_TYPE}/fortpetra.i
    DEPLIBS ${Trilinos_LIBRARIES}
    EXTRASRC ${EXTRA_SOURCE}
    )
ELSE()
  # Use pre-generated files
  SET(GEN_SOURCE
    swig/${Kokkos_NODE_TYPE}/fortpetra.F90
    swig/${Kokkos_NODE_TYPE}/fortpetraFORTRAN_wrap.cxx)

  TRIBITS_ADD_LIBRARY(
    fortpetra
    SOURCES ${GEN_SOURCE} ${EXTRA_SOURCE})
ENDIF()

INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/fortpetra.mod DESTINATION include)
