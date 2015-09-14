CXX=g++
CXXLAGS= -O3 -Wall
 

CLINK=-lm
#Makro CLINK zawiera opcje linkera.
SOURCES=\
	main.cpp \
	wyszukiwanie.cpp 
	

HEADERS=\
	wyszukiwanie.hpp 

program: main.o wyszukiwanie.o
	$(CXX) -o program main.o wyszukiwanie.o $(CLINK)

main.o: wyszukiwanie.cpp wyszukiwanie.hpp
	$(CXX) -c $(CXXLAGS) `pkg-config --cflags --libs taglib` main.cpp 
wyszukiwanie.o: wyszukiwanie.hpp
	$(CXX) -c $(CXXLAGS) wyszukiwanie.cpp


