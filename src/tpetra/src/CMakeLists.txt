INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

IF (ForTrilinos_ENABLE_DeveloperMode)
    # Generate wrapper and proxy files
    SET(CMAKE_SWIG_OUTDIR "${CMAKE_CURRENT_SOURCE_DIR}")

    MAKE_SWIG(MODULE fortpetra
        SOURCE fortpetra.i
        DEPLIBS ${Trilinos_LIBRARIES}
        EXTRASRC ${EXTRA_SOURCE}
    )
ELSE()
    # Use pre-generated files
    SET(GEN_SOURCE
      fortpetra.f90
      fortpetraFORTRAN_wrap.cxx)

    TRIBITS_ADD_LIBRARY(
      fortpetra
      SOURCES ${GEN_SOURCE} ${EXTRA_SOURCE})
ENDIF()

INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/fortpetra.mod DESTINATION include)