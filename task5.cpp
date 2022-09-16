/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "arrays_acrobatics.h"

using namespace std;

char aColl[5] {};

int bColl[10] {};

string cColl[4] {};

 void aCollection( char collection[], int a)
 {
    for (size_t i = 0; i < a; i++)
    {
        cout << collection[i] << "\n";
    }
 } 

  void bCollection( int collection[], int a)
 {
    cout << collection[a] << "\n";
 }

 void cCollection( string collection[], int a )
 {
    for (size_t i = 0; i < a; i++)
    {
        cout << collection[i] << "\n";
    }
 }

 void printnamber(int a)
 {
   int namber[a] {};
    
   for (size_t i = 1; i <= a; i++)
   {
    namber[i] = i;
    cout << namber[i] << "\n";
   }
   
 }

 void printnamber2(int a)
 {
   int namber[a] {};

    for (size_t i = 1; i <= a; i++)
   {

    if (i % 2 == 0)
    {
       namber[i] = i;
       cout << namber[i] << "\n";  
    }
    else
    {
        continue;
    }
    
   }
   
 }

 void printnamber3(int a)
 {
   int namber[a] {};

    for (size_t i = 1; i <= a; i++)
   {

    if (i % 2 == 0)
    {
       continue;
    }
    else
    {
        namber[i] = i;
       cout << namber[i] << "\n";  
    }
    
   }
   
 }
 void printnamber4(int a)
 {
   int namber[a] {};

    for (size_t i = 1; i <= a; i++)
   {

    if (i > 2)
    {
       namber[i] = i;
       cout << namber[i] << "\n";  
    }
    else
    {
        continue;
    }
    
   }
   
 }

 float arr [] {};



int main()
{
    /*
    1.1 Declare a symbolic (char) array with size of 5 elements, and initialize it manually. Please: don’t use magic constants.

    1.2 Declare and initialize an integer array with size of 10 elements and print it to the terminal. Please: don’t use magic constants.

    1.3 Declare a string array with size of 4 elements and initialize it the same values, for example your name, using for/while loop. Please: don’t use magic constants.

    1.4 Write a function that takes an array as an argument. The function must prints all elements to the terminal.

    1.5 Rewrite a previous function that takes an array as an argument, as well as non-negative integer number. The function must prints a specific element if this array to the terminal.
    */
    
    // place your code here

    int a;


    cout << "Введите 5 елеметнов: " << "\n";
    for (size_t i = 0; i < 5; i++)
    {
        cin >> aColl[i];
        cout << "\n";
    }
    cout << "Ваши 5 елементов: " << "\n";
    aCollection(aColl, 5);
    
    cout << "Введите 10 положительных целых чисел: " << "\n";
    for (int i = 1; i <= 10; i++)
    {
        cin >> a;
        if (a > 0)
        {
        bColl[i] = a;
        
        cout << "\n";
        
        }
        else
        {
            cout << "неправильно!" << "\n";
            i --;

        }
    }

    cout << "Ваши 10 целых чисел: " << "\n";

    for (size_t i = 1; i <= 10; i++)
    {
        cout << bColl[i] << "\n";
    }
    cout << "Выбирете индекс" << "\n";
    cin >> a;
    bCollection(bColl, a);
    
    cout << "Введите 4 слова: " << "\n";
    for (size_t i = 0; i < 4; i++)
    {
        cin >> cColl[i];
        cout << "\n";
    }
    cout << "Ваши 4 слов: " << "\n";
    cCollection(cColl, 4);
    
    
    
    /*
    2.1 Declare an integer array (non-negative) with size of N elements, where N – is a number entered by user (cin). After that - initialize the array manually: you array must consist of following numbers: 1, 2, 3, 4, 5, … N.

    2.2 Continuing previous task: print only odd elements to the terminal. After that – print only even elements to the terminal.

    2.3 Continuing previous task: change the elements that are > 2. After that – print the array to the terminal.
    */

    // place your code here

    cout << "Введите количество елементовдля массива: ";
    cin >> a;
    printnamber(a);
    printnamber3(a);
    printnamber2(a);
    printnamber4(a);
    
    
    
    
    /*
    
    3.1 Create the function that print all elements in appropriate array.
        Here is an example of call this function:
            printAll(array);
    
    
    3.2 Move the implementation of this function in header file called "arrays_acrobatics.h"
    
    3.3 Create a new function in "arrays_acrobatics.h" that return specified element of an appropriate array. 
        The arrays must be float.
    */
    
    // place your code here

   printAll(a);
   cout << "Введите кол. элементов: ";
   cin >> a;
   ARr(arr, a);
   cout << "Выберете элемент: ";
   cin >> a; 
   cout << "Ваш выбранный элемент" << arr[a] << "\n";
   
    return 0;
}