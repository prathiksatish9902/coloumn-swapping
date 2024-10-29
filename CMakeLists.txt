cmake_minimum_required(VERSION 3.16)

project(coloumn_swapping LANGUAGES C)

add_executable(coloumn_swapping main.c)

include(GNUInstallDirs)
install(TARGETS coloumn_swapping
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
