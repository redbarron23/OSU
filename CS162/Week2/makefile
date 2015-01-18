CXX= g++
CXXFLAGS = -std=c++0x
LDFLAGS = -lboost_date_time

OBJS = grid.o game_of_life.o main
SRCS = grid.cpp game_of_life.cpp main.cpp
HEADERS = grid.h game_of_life.h

#target: dependencies
		 #rule to build

#lecture1: lecture1.cpp functions.hpp functions.cpp
#		${CXX} ${CXXFLAGS} lecture1.cpp functions.cpp -o lecture1

game_of_life: ${SRCS} ${HEADERS}
		${CXX} ${CXXFLAGS} ${SRCS} -o game_of_life

clean:
		rm -f *.o main
