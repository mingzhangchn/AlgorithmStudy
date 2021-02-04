
cmake_minimum_required (VERSION 2.8)

project(test)



aux_source_directory(. DIR_SRCS)


include_directories("./SelectSort")
#link_directories("../testCmake2")


#add_compile_options(-fPIC)
add_definitions(-std=c++11)

add_executable(test ${DIR_SRCS} )
#target_link_libraries(test libtest2.a)