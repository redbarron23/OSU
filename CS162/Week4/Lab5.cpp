//http://www.cplusplus.com/reference/algorithm/transform/
// transform introduced by tutor
#include <iostream>     // std::cout
#include <algorithm>    // std::transform
#include <vector>       // std::vector
#include <functional>   // std::plus

// Base class for encryption
class Encryptor{
public:
    Encryptor(){}
    // generic encryption that simply returns the input
    virtual std::string encrypt(const std::string& input);
};

std::string Encryptor::encrypt(const std::string& input){
    return input;
}


// Subclass for substitution encryption
class Substitution: public Encryptor{
public:
    Substitution(const std::string key, int shift){
        std::string theKey = key;
        std::transform(theKey.begin(), theKey.end(), theKey.begin(), ::toupper);
        this->key = theKey;
        this->shift = shift;
        // initialize the table
        createTable();
    }
    // specific encryption using SUBSTITUTION
    std::string encrypt(const std::string& input);
    void printTable() const;
    
private:
    std::string key;
    int shift;
    // table for encryption
    char table[26];
    void createTable();
};

std::string Substitution::encrypt(const std::string& input){
    std::string cipher = "";
    std::string orgInput = input;
    std::transform(orgInput.begin(),orgInput.end(),orgInput.begin(),::toupper);
    
    for(int i=0; i < orgInput.length(); i++){
        int tbl_index = orgInput[i] - 'A';
        cipher += table[tbl_index];
    }
    
    return cipher;
}

void Substitution::printTable() const{
    std::cout << "Substitution Table:" << std::endl;
    char c = 'A';
    for(int i=0; i < 26; i++){
        std::cout << c << " ";
        c++;
    }
    std::cout << std::endl;
    for(int i=0; i < 26; i++){
        std::cout << table[i] << " ";
    }
    std::cout << std::endl << std::endl;
}

void Substitution::createTable(){
    int i,k=0;
    std::string tablStr = "";
    for(i=0; i < key.length(); i++){
        std::string tmp = "";
        tmp += key[i];
        if(tablStr.find_first_of(tmp,0) == std::string::npos){
            tablStr += tmp;
            table[k++] = key[i];
        }
    }
    char c = 'A';
    for(; k < 26;){
        for(int j=0; j < key.length(); j++){
            std::string s = "";
            s += c;
            if(key.find_first_of(s,0) == std::string::npos){
                table[k++] = c;
                break;
            }
        }
        c++;
    }
    // now shift
    for(i=0; i < shift; i++){
        char last = table[25];
        for(k=25; k > 0; k--){
            table[k] = table[k-1];
        }
        table[0] = last;
    }
}



// Subclass for transposition encryption
class Transposition: public Encryptor{
public:
    Transposition(int numericKey){
        this->numericKey = numericKey;
    }
    
    // specific encryption using TRANSPOSITION
    std::string encrypt(const std::string& input);
    
private:
    int numericKey;
};

std::string Transposition::encrypt(const std::string& input){
    return input;
}

// Display menu for encryption
void showMenu(){
    std::cout << "MENU:" << std::endl;
    std::cout << "1. Encryption by Substitution" << std::endl;
    std::cout << "2. Encryption by Transposition" << std::endl;
    std::cout << "3. Exit" << std::endl;
}


// handle menu for encryption by substitution
void encryption(const std::string& input, std::string key, int shift){
    // create an object of class substitution
    Substitution encryptor(key,shift);
    
    encryptor.printTable();
    
    // encrypt the input and display it
    std::string cipherText = encryptor.encrypt(input);
    
    // display the encrypted text
    //std::cout << "Original text: " << input << std::endl;
    std::cout << "Encrypted text: " << cipherText << std::endl;
    std::cout << std::endl;
}

// handle menu for encryption by transposition (polymorphism)
void encryption(const std::string& input, int numericKey){
    // create an object of class substitution
    Transposition encryptor(numericKey);
    
    // encrypt the input and display it
    std::string cipherText = encryptor.encrypt(input);
    
    // display the encrypted text
    std::cout << "Original text: " << input << std::endl;
    std::cout << "Encrypted text: " << cipherText << std::endl;
    std::cout << std::endl;
}


int main(){
    
    // user menu choice
    int choice;
    
    // plain text to be encrypted
    std::string input;
    
    std::string key;
    
    int numericKey, shift;
    
    // loop for menu choice
    while(true){
        
        // display menu choice
        showMenu();
        
        // read user choice
        std::cout << std::endl << "Select your choice: ";
        std::cin >> choice;
        std::cin.ignore();
        
        if(choice == 3){
            break;
        }
        
        // read the input to be encrypted
        std::cout << "Enter input string : ";
        getline(std::cin, input);
        
        if(choice == 1){
            
            // read key and shift
            std::cout << "Enter key: ";
            std::cin >> key;
            std::cout << "Enter shift by: ";
            std::cin >> shift;
            
            // encypt the input
            encryption(input,key,shift);
        }
        else if(choice == 2){
            
            // read numericKey
            std::cout << "Enter numeric key: ";
            std::cin >> numericKey;
            
            // encypt the input
            encryption(input,numericKey);
        }
    } // end while
    
    return 0;
}
