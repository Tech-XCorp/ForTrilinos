/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
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


#include "Epetra_DLLExportMacro.h"
#include "Epetra_Object.h"

#ifdef __cplusplus
extern "C" {
#endif
SWIGEXPORT void* swigc_new_Epetra_Object__SWIG_0(int* farg1, bool* farg2) {
  void* fresult = 0 ;
  int arg1 ;
  bool arg2 ;
  Epetra_Object *result = 0 ;
  
  arg1 = *farg1;
  arg2 = *farg2;
  result = (Epetra_Object *)new Epetra_Object(arg1,arg2);
  fresult = result; 
  return fresult;
}


SWIGEXPORT void* swigc_new_Epetra_Object__SWIG_1(int* farg1) {
  void* fresult = 0 ;
  int arg1 ;
  Epetra_Object *result = 0 ;
  
  arg1 = *farg1;
  result = (Epetra_Object *)new Epetra_Object(arg1);
  fresult = result; 
  return fresult;
}


SWIGEXPORT void* swigc_new_Epetra_Object__SWIG_2() {
  void* fresult = 0 ;
  Epetra_Object *result = 0 ;
  
  result = (Epetra_Object *)new Epetra_Object();
  fresult = result; 
  return fresult;
}


SWIGEXPORT void* swigc_new_Epetra_Object__SWIG_3( char*  farg1, int* farg2) {
  void* fresult = 0 ;
  char *arg1 = (char *) (char *)0 ;
  int arg2 ;
  Epetra_Object *result = 0 ;
  
  arg1 = (char *)farg1; 
  arg2 = *farg2;
  result = (Epetra_Object *)new Epetra_Object((char const *)arg1,arg2);
  fresult = result; 
  return fresult;
}


SWIGEXPORT void* swigc_new_Epetra_Object__SWIG_4( char*  farg1) {
  void* fresult = 0 ;
  char *arg1 = (char *) (char *)0 ;
  Epetra_Object *result = 0 ;
  
  arg1 = (char *)farg1; 
  result = (Epetra_Object *)new Epetra_Object((char const *)arg1);
  fresult = result; 
  return fresult;
}


SWIGEXPORT void* swigc_new_Epetra_Object__SWIG_5(void* farg1) {
  void* fresult = 0 ;
  Epetra_Object *arg1 = 0 ;
  Epetra_Object *result = 0 ;
  
  arg1 = (Epetra_Object *)(farg1); 
  result = (Epetra_Object *)new Epetra_Object((Epetra_Object const &)*arg1);
  fresult = result; 
  return fresult;
}


SWIGEXPORT void swigc_delete_Epetra_Object(void* farg1) {
  Epetra_Object *arg1 = (Epetra_Object *) 0 ;
  
  arg1 = (Epetra_Object *)(farg1); 
  delete arg1;
}


SWIGEXPORT void swigc_Epetra_Object_SetLabel(void* farg1,  char*  farg2) {
  Epetra_Object *arg1 = (Epetra_Object *) 0 ;
  char *arg2 = (char *) (char *)0 ;
  
  arg1 = (Epetra_Object *)(farg1); 
  arg2 = (char *)farg2; 
  (arg1)->SetLabel((char const *)arg2);
}


SWIGEXPORT void swigc_Epetra_Object_SetTracebackMode(int* farg1) {
  int arg1 ;
  
  arg1 = *farg1;
  Epetra_Object::SetTracebackMode(arg1);
}


SWIGEXPORT int swigc_Epetra_Object_GetTracebackMode() {
  int fresult = 0 ;
  int result;
  
  result = (int)Epetra_Object::GetTracebackMode();
  fresult = result;
  return fresult;
}


SWIGEXPORT void swigc_set_Epetra_Object_TracebackMode(int* farg1) {
  int arg1 ;
  
  arg1 = *farg1;
  Epetra_Object::TracebackMode = arg1;
}


SWIGEXPORT int swigc_get_Epetra_Object_TracebackMode() {
  int fresult = 0 ;
  int result;
  
  result = (int)Epetra_Object::TracebackMode;
  fresult = result;
  return fresult;
}


#ifdef __cplusplus
}
#endif

