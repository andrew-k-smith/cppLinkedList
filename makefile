default: main.o Datum.o myLList.o
	g++ -g main.o Datum.o myLList.o

Datum.o: Datum.h Datum.cpp
	g++ -c -g Datum.cpp

myLList.o: myLList.h myLList.cpp
	g++ -c -g myLList.cpp
	
main.o: main.cpp Datum.h
	g++ -c -g main.cpp

clean: 
	rm -f a.out *.o

backup:
	tar cvf backup.tar *cpp *h makefile