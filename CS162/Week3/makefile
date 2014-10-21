CXX= g++
CXXFLAGS = -std=c++0x
#CXXFLAGS += -Wall
#CXXFLAGS += -pedantic-errors
LDFLAGS = -lboost_date_time

OBJS = count merge_numbers
SRCS =  count.cpp merge_numbers.cpp
HEADERS =

count : count.cpp
	${CXX} ${CXXFLAGS} count.cpp -o count

merge_numbers : merge_numbers.cpp
	${CXX} ${CXXFLAGS} merge_numbers.cpp -o merge_numbers

clean : 
	rm count merge_numbers
