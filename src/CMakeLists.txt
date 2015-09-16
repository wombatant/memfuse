cmake_minimum_required(VERSION 2.8.8)

add_library(
	MemFuse
		json_read.cpp
		json_write.cpp
)

target_link_libraries(MemFuse)

install(
	FILES
		json_read.hpp
		json_write.hpp
	DESTINATION
		include/MemFuse
)
