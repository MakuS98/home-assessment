
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a;

    int b;

    int d;
    /* 1. Write a program to check whether a given number by user is positive or negative. 
          Depending on a result - report it in the console. After that – ask user to enter another number. 
          Find the largest of two entered numbers. Depending on a result - report it in the console.
    */
    
    // place your code
    

    cout << "Enter the number: ";

    cin >> a;
    if (a > 0)
    {
        cout << "число " << a << " позитивноне" << endl;
 
    }
    else  
    {
       cout << "число " << a << " отрицательное" << endl;
    }
    //***********************************************************************************************************************
    
 
    cout << "Enter the number two: ";
 
    cin >> b;
    if (b > 0)
    {
        cout << "число " << b << " позитивноне" << endl;
    }
 
    else 
    {
       cout << "число " << b << " отрицательное" << endl;
    }
    //***********************************************************************************************************************
    if(a > b)
    {
        cout << "первое число больше чем второе" << endl;
    }
    
    else
    {
        cout << "второе число больше чем первое" << endl;
    }
        cout <<endl;
        cout << "**********************************************************************************************************" <<endl;
        cout <<endl;
    
 //***********************************************************************************************************************
 //***********************************************************************************************************************
 //***********************************************************************************************************************  

    
    
    
    
    
  
    /* 2. Write a small program to compare two strings which values was written by user’s keyboard. 
          Also, create additional logic variable (boolean). 
          If strings are the same – print the next message: <your_string_1> is equal to <your_string_2> and assign truth to a logic variable, 
          otherwise – assign false and report it in the console.
    */
    
    // place your code
     

    

    cout << "сколько будет 20 + 30? : ";
    cin >> a;

    if (a == 50)
    {
        cout << "правитно!"<<endl;
    }

    else
    {
        cout << "не правильно!"<<endl;
    }

    cout << "сколько будет 30 + 20? : ";

    cin >> b;

    if (b == 50)
    {
        cout << "правитно!"<<endl;
    }

    else
    {
        cout << "не правильно!"<<endl;
    }
    
    bool c;

    if ( a ==  b )
    {
        c = 1;

        cout << "******************************************" <<endl;

        cout << a << " равно " << b <<endl;

        cout << boolalpha << c <<endl;
    }
    else 
    {
        c = 0;
        cout << "******************************************" <<endl;

        cout << a << " не равно " << b <<endl;

        cout << boolalpha << c <<endl;
    }
        cout <<endl;
        cout << "**********************************************************************************************************" <<endl;
        cout <<endl;
    
    /*  3. Write a program that finds the largest of three entered numbers. 
           Depending on a result - report it in the console.
           
           Підказка: use if in if:
           
           if (...) 
           {
               if (...) 
               {
                   
               }
           }
           
           or you can use:
            - and &&
            - or || 
    
    */
    
    // put your code here
    
    cout << "Введите первое число: ";

    cin >> a;

    cout << "Введите второе число: ";
 
    cin >> b;

    cout << "Введите третье число: ";
 
    cin >> d;

    if ((a > b) && (a > d))
    {
        cout << "первое число самое большое"<<endl;
    }
    
    if ((b > a) && (b > d))
    {
        cout << "второе число самое большое"<<endl;
    }
    
    if ((d > a) && (d > b))
    {
        cout << "третье число самое большое" <<endl;
    }
    
   
    return 0;
}