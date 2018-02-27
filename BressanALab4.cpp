//Anthony Bressan
//CPSC 121 Lab 4
//02/26/2018
#include "stdafx.h"
#include <iostream> 
using namespace std; 
  
//Print Hello world function
void hello() 
{ 
    cout << "Hello, World!" << endl; 
} 

//Print numbers in between function 
void printBetween(int a, int b) 
{ 
    for (int i = a; i <= b; i++) 
    { 
        cout << i << " ";  
    } 
    cout << endl;
} 

//Prime function
bool isPrime(int n) 
{ 
bool isPrime = true; 
  for(int i = 2; i <= n / 2; ++i) 
  { 
      if(n % i == 0) 
      { 
          isPrime = false; 
          break; 
      } 
  } 
    return isPrime; 
} 

//Least common denominator function
int leastCommonDenominator(int a, int b) 
{ 
    int x  = a * b; 
    for (int i = 2; i <= x; i++) 
    { 
        if (i % a == 0 && i % b == 0) 
        { 
            return i; 
        } 
    } 
} 

//Square function
void squareOpposite(double &n) 
{ 
    n = n * n; 
    int i = n * 2; 
    cout << n - i << endl; 
} 

int main() 

{ 
    int a = 0; 
    int b = 0; 
    int n = 0; 
    double x = 0;
    char again = 'y'; 
    char choice = 'z'; 

while (again == 'y') 
{ 
//Menu display
    cout << "What would you like to do? Select letter from below" << endl; 
    cout << "a. Print Hello" << endl; 
    cout << "b. Print between two numbers" << endl; 
    cout << "c. Find out if a number is prime" << endl; 
    cout << "d. find the least common denominator" << endl; 
    cout << "e. square number and set opposite" << endl; 
    cin >> choice; 

//Runs the hello function 
    if (choice == 'a') 
    { 
    hello(); 
    } 
    
//Runs the printBetween function
    if (choice == 'b') 
    { 
        cout << "Please pick the first number " << endl; 
        cin >> a; 
        cout << "Please pick the second number " << endl; 
        cin >> b; 
        printBetween(a, b); 
    } 
    
//Runs the isPrime function
    if (choice == 'c') 
    { 
        cout << "Please select number to test if it is prime" << endl; 
        cin >> n; 
        bool check = isPrime(n); 
        if(check == 1) 
        { 
            cout <<"Yes it is prime" << endl; 
        } 
        else  
        { 
            cout << "No it is not prime" << endl; 
        } 
    } 
    
//Runs the leastCommonDenominator function
    if (choice == 'd') 
    { 
        cout << "Please pick the first number "  << endl; 
        cin >> a; 
        cout << "Please pick the second number " << endl; 
        cin >> b;   
        int ans = leastCommonDenominator(a, b); 
        cout << ans << endl; 
    } 
    
//Runs the squareOpposite function
    if (choice == 'e') 
    { 
        cout << "Please select number to double and change to opposite" << endl; 
        cin >> x; 
    squareOpposite(x); 
    } 
    
//asks user to start program again
    cout << "would you like to go again? y or n" << endl; 
    cin >> again; 
} 
    return 0; 
}