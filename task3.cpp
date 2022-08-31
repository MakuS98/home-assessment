#include <iostream>

using namespace std;

int main()
{
    // 1. Loops (for/while/do while)
    // 1.1.0 Write a program that prints your name 8 times.
    // 1.1.2 Write a program that prints integer numbers in the range 0 to 100.
    // 1.1.3 Write a program that prints integer numbers in the range -10 to 10.
    // 1.1.4 Write a program that prints integer numbers in the range -100 to 100.
    
    // paste your code here 
    
    

    int b = 8;
    int b1 = 100;
    int b2 = 10;

    for (int a = 1; a <= b; a++)
    {
       cout << "Максим" "\n";
    }
    
    for (int a1 = 1; a1 <= b1; a1++)
    {
       cout << a1 << "\n";
    }
    
    for (int a2 = -10; a2 <= b2; a2++)
    {
       cout << a2 << "\n";
    }
    
    for (int a3 = -100; a3 <= b1; a3++)
    {
       cout << a3 << "\n";
    }
    


    
    
    // 2.1 Write a program that accepts a positive integer N from the user. 
    // Make sure that the user enters exactly a positive number. 
    // After that - sum up a series of numbers from 0 to the entered number N (0 + 1 + 2 + … + N). 
    // For example, if user enter 3 (N = 3), program must print your 6, what means 1+2+3. 
    // You must use for loop.
    
    // paste your code here 

    int c;
    int t = 1;
    int u = 0;
    int y;
    for (int c; c = 1;)
    {

    cout << "Введите положительное число: ";

    cin >> c;

    if (c > 0)
    {
        int d = c;
        for ( int c = 0; c <= d; c++)
        {
            
            u = u + c;
            cout << u << "\n";
            
        }
        break;
    }
    else
    {
    
        cout << "Не правильно!" << "\n";
        c = 0;
        continue;
    }
    }
    
    
    // 2.2 Rewrite previous program using while loop! 
    
    // paste your code here 
    
    
    
    
    // 3*. A timer is a software program or hardware device in your PC, smartphone, laptop that keeps track of the elapsed time between two events. These events could be mouse clicking, opening new browser window, start Minecraft and CS:GO and so on. Timer count time in “ticks”. A number of ticks could be a pretty large number, to represent 1 second.
    // 	Let’s say that 1 second = 10 000 ticks. Simulate that you have a time span of 20 seconds, where:
    //         - every 10 seconds the “My-Homework-N4.docx” auto save process occurs;
    //         - every 5 seconds a browser page is refreshed;
    //         - every 1 seconds it polls for the state Wi-Fi connection;
    //         - every 1000 ticks it polls for the state of the connected charger;
    //         - every 100 ticks it polls for the state of the left mouse button.
    // At given intervals, you just need to PRINT THE NAME OF THE PROCESS, for example: “Browser page has refreshed!”, and so on.

    
    // paste your code here 
    int q;
    int w = 2000000;
    int e = 100;
    int r = 1000;
    int o = 10000;
    int p = 50000;
    int s = 10000;
    int j = 20000;
    string x = "(づ｡◕‿‿◕｡)づ";
    for (int q = 0; q <= w; q++)
    {
        cout << x << "\n";

        
        
        

        if (q == e)
        {
            e += 100;

            cout << "Состояния левой кнопки мишки: успешно обновлено!" << "\n";
             if (q == r)
        {
            
            r += 1000;

            cout << "Состояния зарядного устройства: успешно обновлено!" << "\n";

             if (q == o)
        {
            
            o += 10000;

            cout << "Состояния соиденения Wi-Fi: успешно обновлено!" << "\n";

             if (q == p)
        {
            
            p += 50000;

            cout << "Состояния страницы браузера: успешно обновлено!" << "\n";

             if (q == s)
        {
            s += 100000;

            cout << "Состояния автосохранения «My-Homework-N4.docx» : успешно обновлено!" << "\n";

            continue;
        }
        


            continue;
        }
        

            continue;
        }
        

            continue;
        }
        

            continue;
        }
        
        
    }
    


    return 0;
}
