# Target to compile the object file
multiplication_table: multiplication_table.o
	g++ multiplication_table.o -o multiplication_table.exe

# Target to compile the C++ program
multiplication_table.o: multiplication_table.cpp
	g++ -c multiplication_table.cpp -o multiplication_table.o

# Target to run the program (interactively)
run: multiplication_table
	./multiplication_table.exe

# Target to compile the object Test file
multiplication_tableTest: multiplication_tableTest.o
	g++ multiplication_tableTest.o -o multiplication_tableTest.exe

# Target to compile the C++ Test program
multiplication_tableTest.o: multiplication_tableTest.cpp
	g++ -c multiplication_tableTest.cpp -o multiplication_tableTest.o

# Target to run the Test program
test: multiplication_tableTest
	./multiplication_tableTest.exe

# Target to clean up compiled files
clean:
	rm -f multiplication_table.o multiplication_tableTest.o multiplication_table.exe multiplication_tableTest.exe
