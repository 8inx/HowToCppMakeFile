
run: build clean
	./output


build: main.o People.o
	g++ main.o People.o -o output


main.o: main.cpp
	g++ -c main.cpp


People.o: ./Source/People.cpp ./Headers/People.h
	g++ -c ./Source/People.cpp


clean:
	rm -rf *o build
