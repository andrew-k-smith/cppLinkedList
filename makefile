default: main.o Datum.o myLList.o
	g++ -g build/main.o build/Datum.o build/myLList.o

Datum.o: src/Datum.cpp include/Datum.h
	g++ -c -g src/Datum.cpp -o build/Datum.o

myLList.o: src/myLList.cpp include/myLList.h 
	g++ -c -g src/myLList.cpp -o build/myLList.o
	
main.o: src/main.cpp include/Datum.h
	g++ -c -g src/main.cpp -o build/main.o

clean: 
	rm -f a.out build/*.o

backup:
	tar -cvf backup.tar src/*cpp include/*h makefile