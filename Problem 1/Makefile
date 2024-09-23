# Target to compile the C++ program
Sum_of_Natural_Numbers: Sum_of_Natural_Numbers.o
	g++ Sum_of_Natural_Numbers.o -o Sum_of_Natural_Numbers

# Target to compile the object file
Sum_of_Natural_Numbers.o: Sum_of_Natural_Numbers.cpp
	g++ -c Sum_of_Natural_Numbers.cpp -o Sum_of_Natural_Numbers.object

# Target to run the program
run: Sum_of_Natural_Numbers
	./Sum_of_Natural_Numbers

# Target to clean up compiled files
clean: 
	rm -f Sum_of_Natural_Numbers.o Sum_of_Natural_Numbers
