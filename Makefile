all:
	g++ -std=c++11 -O2 -o code main.cpp

clean:
	rm -f code

.PHONY: all clean