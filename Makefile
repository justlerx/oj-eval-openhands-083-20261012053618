CXX = g++
CXXFLAGS = -std=c++11 -O2

all:
	$(CXX) $(CXXFLAGS) -o code main.cpp

clean:
	rm -f code

.PHONY: all clean