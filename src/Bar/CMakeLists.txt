add_library(Bar SHARED bar.cpp)

add_dependencies(Bar Foo)

target_link_libraries(Bar Foo)
