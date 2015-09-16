cmake_minimum_required(VERSION 2.8.8)

project(Memfuse)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/Modules)
include(address_sanitizer)

find_package(Jansson REQUIRED)
include_directories(${JANSSON_INCLUDE_DIR})
set(LIBS ${LIBS} ${JANSSON_LIBRARY})

add_definitions(
	#-std=c++11
	-Wall
	-Wsign-compare
	#-Werror
	#--analyze
	#-Os # GCC size optimization flag
)

enable_testing()

include_directories("src")

add_subdirectory(src)
add_subdirectory(test)

add_test("JsonIoTest" test/JsonIoTest)
