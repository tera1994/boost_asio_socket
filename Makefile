CC = g++
CFLAGS = -std=c++17 -g -Wall -I./src/header -lboost_system -lpthread

test: ./src/cpp/main.cpp
	g++  $(CFLAGS) -o ./build/$@ $^

run : 
	./build/test

clean :
	rm -rf ./build/test

.PHONY : run clean
