
#ifndef TACOPIE_EXPORT_H
#define TACOPIE_EXPORT_H

#ifdef TACOPIE_STATIC_DEFINE
#  define TACOPIE_EXPORT
#  define TACOPIE_NO_EXPORT
#else
#  ifndef TACOPIE_EXPORT
#    ifdef tacopie_EXPORTS
        /* We are building this library */
#      define TACOPIE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define TACOPIE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef TACOPIE_NO_EXPORT
#    define TACOPIE_NO_EXPORT 
#  endif
#endif

#ifndef TACOPIE_DEPRECATED
#  define TACOPIE_DEPRECATED __declspec(deprecated)
#endif

#ifndef TACOPIE_DEPRECATED_EXPORT
#  define TACOPIE_DEPRECATED_EXPORT TACOPIE_EXPORT TACOPIE_DEPRECATED
#endif

#ifndef TACOPIE_DEPRECATED_NO_EXPORT
#  define TACOPIE_DEPRECATED_NO_EXPORT TACOPIE_NO_EXPORT TACOPIE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef TACOPIE_NO_DEPRECATED
#    define TACOPIE_NO_DEPRECATED
#  endif
#endif

#endif /* TACOPIE_EXPORT_H */
