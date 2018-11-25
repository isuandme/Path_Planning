all:
	g++ wayqueue.cpp path.cpp main.cpp -o main


clean:
	rm *.o main
