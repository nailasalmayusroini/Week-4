# Target to compile the C++ program
Multiplication_Table: Multiplication_Table.o
	g++ Multiplication_Table.o -o Multiplication_Table

# Target to compile the object file
Multiplication_Table.o: Multiplication_Table.cpp
	g++ -c Multiplication_Table.cpp -o Multiplication_Table.o 

# Target tp run the program 
run: Multiplication_Table
	./Multiplication_Table

# Target to clean up compiled files
clean:
	rm -f Multiplication_Table.o Multiplication_Table