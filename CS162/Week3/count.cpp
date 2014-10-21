#include <iostream>
#include <fstream>

// This method counts the number of words and characters in a
// given file.
void count_words_chars(const char* filename, int& numOfChars, int& numOfWords);

int main(int argc, char **argv){

	// number of counted words in the file
	int numWord;

	// number of counted characters in the file
	int numChars;

	// name of the input file name
	char filename[50];

	// check if filename is passed as command line argument
	if(argc > 1){
		count_words_chars(argv[1],numChars,numWord);
	}
	// else prompt use to enter the input file name
	else{
		std::cout << "Enter input filename: ";
		std::cin >> filename;
		count_words_chars(filename,numChars,numWord);
	}

	// display the count
	std::cout << "Number of characters: " << numChars << std::endl;
	std::cout << "Number of words: " << numWord << std::endl;

	return 0;
}

void count_words_chars(const char* filename, int& numOfChars, int& numOfWords){
	// open the file for reading
	std::ifstream fin(filename);

	// initialize the number of characters
	numOfChars = 0;

	// initialize the number of words
	numOfWords = 0;

	// next character read from file
	char c;

	// store the current word
	std::string word;

	// delimiters used to parse words
	std::string delimeters(" \t\n\r!\",.?."); 

	// print error message if file could not been opened.
	if(!fin.is_open()){
		std::cout << "error: could not open file " << filename << " for reading!" << std::endl;
		//exit(0);
	}

	// read the file character by character and update the counts
	while(!fin.eof()) {
		c = fin.get();
		numOfChars++;

		// check if character is a delimeter or not
		if(delimeters.find_first_of(c,0) == std::string::npos){			
			word += c;
		} else{
			if(word[word.length()-1] == '\n'){
				word = word.substr(0,word.length()-2);
			}
			if(word.length() > 0){
				numOfWords++;
				word.clear();
			}
		}
	} // end while

	// close the file
	fin.close();
}
