#include <iostream>
#include <fstream>
#include <cstdlib> // for exit(0)

// This method reads the numbers from two input file streams and writes them to output
// stream in a sorted order
void merge(std::ifstream& fin1, std::ifstream& fin2, std::ofstream& fout);



int main(int argc, char **argv){
	// input stream of first file
	std::ifstream fin1;

	// input stream of second file
	std::ifstream fin2;

	// output stream for writing merged numbers
	std::ofstream fout;

	// check proper usage of the program
	if(argc < 4){
		std::cout << std::endl << "Usage: ./a.out INPUT-FILE-1 INPUT-FILE-2 OUTPUT-FILE" << std::endl;
		std::cout << "where the arguments are as below:" << std::endl;
		std::cout << "INPUT-FILE-1    The first input file" << std::endl;
		std::cout << "INPUT-FILE-2    The second input file" << std::endl;
		std::cout << "OUTPUT-FILE    The output file" << std::endl;
		exit(0);
	}


	// open the first input file, exit if there is error
	fin1.open(argv[1]);
	if(!fin1.is_open()){
		std::cout << "ERROR: could not open input file " << argv[1] << " for reading!" << std::endl;
		exit(0);
	}

	// open the second input file, exit if there is error
	fin2.open(argv[2]);
	if(!fin2.is_open()){
		std::cout << "ERROR: could not open input file " << argv[2] << " for reading!" << std::endl;
		exit(0);
	}

	// open the output file, exit if there is error
	fout.open(argv[3]);
	if(!fout.is_open()){
		std::cout << "ERROR: could not open output file " << argv[3] << " for writing!" << std::endl;
		exit(0);
	}

	// read input numbers and merge them and write them to output file
	merge(fin1,fin2,fout);

	// close all the files
	fin1.close();
	fin2.close();
	fout.close();


	return 0;
}

void merge(std::ifstream& fin1, std::ifstream& fin2, std::ofstream& fout){
	// number read from the first input stream
	int num1;
	// number read from second input stream
	int num2;
	// number to be written to output after comparing num1 and num2
	int num=0;

	// array to store sorted numbers being merged from 2 input files
	int a[100];

	// total number of merged numbers
	int size=0;

	fin1 >> num1;
	fin2 >> num2;
	if(num1 <= num2){
		a[size] = num1;
		if(!fin1.eof()){
			fin1 >> num1;
		}
	} else{
		a[size] = num2;
		if(!fin2.eof()){
			fin2 >> num2;
		}
	}
	size++;
	// read the numbers from input files and merge them into the array
	while(!fin1.eof() && !fin2.eof()){
		if(num1 <= num2){
			a[size] = num1;
			fin1 >> num1;
		} else{
			a[size]= num2;
			fin2 >> num2;
		}
		size++;
	}

	// read the remaining numbers from first input stream if any
	if(fin1.eof()){
		a[size++] = num2;
	} else{
		a[size++] = num1;
	}
	while(fin1 >> num1){		
		a[size++] = num1;
	}
	// read the remaining numbers from second input stream if any
	while(fin2 >> num2){
		a[size++] = num2;	
	}
	// write the merged numbers to output file
	for(int i=0; i < size; i++){
		fout << a[i] << " ";
	}
}
