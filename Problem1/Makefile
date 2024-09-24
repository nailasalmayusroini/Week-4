# Target to compile the object file
sum_numbers: sum_numbers.o
	g++ sum_numbers.o -o sum_numbers.exe

# Target to compile the C++ program
sum_numbers.o: sum_numbers.cpp
	g++ -c sum_numbers.cpp -o sum_numbers.o

# Target to run the program (interactively)
run: sum_numbers
	./sum_numbers.exe

# Target to compile the object Test file
sum_numbersTest: sum_numbersTest.o
	g++ sum_numbersTest.o -o sum_numbersTest.exe

# Target to compile the C++ Test program
sum_numbersTest.o: sum_numbersTest.cpp
	g++ -c sum_numbersTest.cpp -o sum_numbersTest.o

# Target to run the Test program
test: sum_numbersTest
	./sum_numbersTest.exe

# Target to clean up compiled files
clean:
	rm -f sum_numbers.o sum_numbersTest.o sum_numbers.exe sum_numbersTest.exe
