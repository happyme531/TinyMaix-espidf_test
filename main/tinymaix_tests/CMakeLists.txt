#TinyMaix testers 

aux_source_directory(. SRCS_TINYMAIX_TESTS)
include_directories(.)

#Well, bad code quality
add_compile_options(-Wno-error=missing-braces)

add_library(tinymaix_tests STATIC ${SRCS_TINYMAIX_TESTS})
target_link_libraries(tinymaix_tests PUBLIC tinymaix)
