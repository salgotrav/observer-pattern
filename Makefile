all: output

output: weatherData.o
	g++ weatherData.o -o output

weatherData.o:	weatherData.cpp
		g++ -c weatherData.cpp
