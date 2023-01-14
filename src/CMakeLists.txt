cmake_minimum_required (VERSION 3.0)
project (NCurses_Test)

set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_EXE_LINKER_FLAGS "-static")
#set(CURSES_NEED_NCURSES true)
find_package(Curses REQUIRED)

add_executable (test
	main.cpp
	screen.c
)
target_link_libraries(test ${CURSES_LIBRARIES})
