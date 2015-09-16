cmake_minimum_required(VERSION 2.8.8)

add_executable(
	JsonIoTest
		json_test.cpp
)

target_link_libraries(JsonIoTest ${JANSSON_LIBRARY} MemFuse)

add_test("JsonIoTest" JsonIoTest)
