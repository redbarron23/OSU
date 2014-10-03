CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
CXXFLAGS += -c
CXXFLAGS += -O3
LDFLAGS = -lboost_date_time

OBJS = Rectangle.cpp

SRCS = pr7-12.cpp

HEADERS = Rectangle.h

#target: dependencies
# rule to build
#

pr7-12: ${OBJS} ${HEADERS}
		${CXX} ${LDFLAGS} ${OBJS} -o pr7-12 

${OBJS}: ${SRCS}
		${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
