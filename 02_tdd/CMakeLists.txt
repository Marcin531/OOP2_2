cmake_minimum_required(VERSION 3.10)
project(02_tdd)

set(HEADERS include/Dummy.h) #lista nagłówków - pliki .h nalezy tutaj dodawac
set(SOURCES src/Dummy.cpp) #pliki źródłowe do biblioteki

#definicja biblioteki
add_library(02_tdd_lib ${HEADERS} ${SOURCES}) # oznacza, że biblioteka zależy od tych dwóch zmiennych 0 naglowkow i zrodel
target_include_directories(02_tdd_lib PUBLIC include) #oznacza, że ta biblioteka ma w swoim interfejscie ma rowniez dodawać podany katalog - tutaj main
#definicja pliku wykonywalnego
add_executable(02_tdd src/main.cpp) #kompilacja maina
target_link_libraries(02_tdd 02_tdd_lib) #dodanie referencji do biblioteki

add_subdirectory(test) #dodanie podkatalogu z testami
