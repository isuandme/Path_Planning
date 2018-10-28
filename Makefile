all:
	g++ path.cpp main.cpp -o main
build:
	g++ -c main.cpp path.cpp

clean:
	rm *.o main
