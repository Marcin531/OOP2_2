set(GOOGLETEST ../../googletest)

include_directories(${GOOGLETEST}/googletest/include)
link_directories(${GOOGLETEST}/build/lib)

set(TEST_HEADERS include/TestIncludes.h)
set(TEST_SOURCES src/DummyTest.cpp src/TextWrapperTest.cpp)

add_executable(02_tdd_test ${TEST_HEADERS} ${TEST_SOURCES}) #plik wykonywalny zalezy od powyzszych zmiennych
target_include_directories(02_tdd_test PUBLIC include) #katalog z includami
target_link_libraries(02_tdd_test 02_tdd_lib gtest gtest_main pthread) #wszystkie biblioteki
