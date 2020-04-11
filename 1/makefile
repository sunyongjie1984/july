all: main

main: LeftShiftOne.o LeftRotateString.o main.cpp
	g++ -g -Wall -o main main.cpp LeftShiftOne.o LeftRotateString.o

# althought LeftRotteString.cpp used function LeftShiftOne,
# but we are not linking now, so no need to add LeftShiftOne.o
#LeftRotateString.o: LeftRotateString.cpp LeftShiftOne.o
LeftRotateString.o: LeftRotateString.cpp
	g++ -g -Wall -c LeftRotateString.cpp

LeftShiftOne.o: LeftShiftOne.cpp
	g++ -g -Wall -c LeftShiftOne.cpp

ab := main *.o *dSYM*
clean:
	rm -rf $(ab)
