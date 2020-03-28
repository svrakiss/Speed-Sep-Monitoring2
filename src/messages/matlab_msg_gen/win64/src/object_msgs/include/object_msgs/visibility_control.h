#ifndef OBJECT_MSGS__VISIBILITY_CONTROL_H_
#define OBJECT_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define OBJECT_MSGS_EXPORT __attribute__ ((dllexport))
    #define OBJECT_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define OBJECT_MSGS_EXPORT __declspec(dllexport)
    #define OBJECT_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef OBJECT_MSGS_BUILDING_LIBRARY
    #define OBJECT_MSGS_PUBLIC OBJECT_MSGS_EXPORT
  #else
    #define OBJECT_MSGS_PUBLIC OBJECT_MSGS_IMPORT
  #endif
  #define OBJECT_MSGS_PUBLIC_TYPE OBJECT_MSGS_PUBLIC
  #define OBJECT_MSGS_LOCAL
#else
  #define OBJECT_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define OBJECT_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define OBJECT_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define OBJECT_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define OBJECT_MSGS_PUBLIC
    #define OBJECT_MSGS_LOCAL
  #endif
  #define OBJECT_MSGS_PUBLIC_TYPE
#endif
#endif  // OBJECT_MSGS__VISIBILITY_CONTROL_H_
// Generated 21-Mar-2020 05:10:54
 