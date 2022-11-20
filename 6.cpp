// C++ program to find length of string 
// using pointer arithmetic. 
#include <iostream> 

using namespace std; 
 
// function to find the length 
// of the string through pointers 

int string_length(char* given_string) 
{ 

    // variable to store the 

    // length of the string 

    int length = 0; 

    while (*given_string != '\0') { 

        length++; 

        given_string++; 

    } 
 

    return length; 
} 
 
// Driver function 

int main() 
{ 

    // array to store the string 

    char given_string[] = "geeksforgeeks"; 

    cout << string_length(given_string); 

    return 0; 
}
