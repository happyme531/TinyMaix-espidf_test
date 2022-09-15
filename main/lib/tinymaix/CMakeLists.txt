#TinyMaix library

aux_source_directory(. SRCS_TINYMAIX)

include_directories(.)

#Well, bad code quality, but it works
add_compile_options(-Wno-error=format= -Wno-error=pointer-sign)

add_library(tinymaix STATIC ${SRCS_TINYMAIX})