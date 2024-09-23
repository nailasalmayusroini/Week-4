# Target to compile the object file
Sum_of_Natural_Numbers: Sum_of_Natural_Numbers.o
	g++ Sum_of_Natural_Numbers.o -o Sum_of_Natural_Numbers.exe

# Target to compile the C++ program
Sum_of_Natural_Numbers.o: Sum_of_Natural_Numbers.cpp
	g++ -c Sum_of_Natural_Numbers.cpp -o Sum_of_Natural_Numbers.o

# Target to run the program (interactively)
run: Sum_of_Natural_Numbers
	./Sum_of_Natural_Numbers.exe

# Target to compile the object Test file
Sum_of_Natural_NumbersTest: Sum_of_Natural_NumbersTest.o
	g++ Sum_of_Natural_NumbersTest.o -o Sum_of_Natural_NumbersTest.exe

# Target to compile the C++ Test program
Sum_of_Natural_NumbersTest.o: Sum_of_Natural_NumbersTest.cpp
	g++ -c Sum_of_Natural_NumbersTest.cpp -o Sum_of_Natural_NumbersTest.o

# Target to run the Test program
test: Sum_of_Natural_NumbersTest
	./Sum_of_Natural_NumbersTest.exe

# Target to clean up compiled files
clean:
	rm -f Sum_of_Natural_Numbers.o Sum_of_Natural_NumbersTest.o Sum_of_Natural_Numbers.exe Sum_of_Natural_NumbersTest.exe
