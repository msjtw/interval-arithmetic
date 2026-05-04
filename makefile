CC = g++
CFLAGS = -g -std=c++23

test: test.o interval.o newthon_rapson.o
	$(CC) $(CFLAGS) -o test $^

interval.o: interval.cpp

newthon_rapson.o: newthon_rapson.cpp

test.o: test.cpp

clean:
	rm *.o test
