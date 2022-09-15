idf_component_register(SRCS "main.cpp"
                    INCLUDE_DIRS ".")

include_directories(lib/tinymaix)
include_directories(.)

# Import tinymaix targets
add_subdirectory(lib/tinymaix)
add_subdirectory(tinymaix_tests)

# Link tinymaix to main component
target_link_libraries(${COMPONENT_LIB} PUBLIC tinymaix tinymaix_tests)
