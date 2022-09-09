#include <iostream>

using namespace std;


void printnamesAndsurnameAndage (string name , string surmame , string age )
{
cout << "\n";
cout << name << "\n";
cout << "\n";

cout << "\n";
cout << surmame << "\n";
cout << "\n";

cout << "\n";
cout << age << "\n";
cout << "\n";
}

void printnames(string name)
{
cout << "\n";
cout << name << "\n";
cout << "\n";
}

int nambercomparison(int a , int b)
{
bool c;

if (a == b)
{
    c = 1;
    cout << boolalpha << c << "\n";
    
}
else
{
    c = 0;

    cout << boolalpha << c << "\n";
}



 return c;
}
int kjgksjgjvskdgnhsdj2()
{
    int b = 0;
    int n = 1;
    for (int j = 0; j < n; j++)
   {
    int a;
    cout << "create new positive namber: ";

    cin >> a;
    
   
   if (a > 0)
   {
    for (int i = 0; i <= a ; i++)
    {
        b = b + i;
        cout << b << "\n";
        
    }
    
   }
   else
   {
    cout << "namber is negative " << "\n";
    n++;
   }
   }
   
  return b; 
}

int kjgksjgjvskdgnhsdj()
{
    int b = 0;
    int n = 1;

    for (int j = 0; j < n; j++)
   {
    int a;
    cout << "create new positive namber: ";

    cin >> a;
    
   
   if (a > 0)
   {
    for (int i = 0; i <= a ; i++)
    {

        cout << b << "\n";
        b ++;
    }
    
   }
   else
   {
    cout << "namber is negative " << "\n";
    n++;
   }
   }
   
  return b; 
}


int agjashghsalkdhg()
{
    int a;
    int b = 1;
    int c = 1;
    int n = 1;
   for (int s = 0; s < n; s++)
  {
    cout << "create namber: ";
    
    cin >> a;

    if (a > 0)
    {
        for (int i = 0; i < a; i++)
        {
            
            c = c * b;
            cout << c << "\n";
            b++;

        }
        
        
    }
    else
    {
       cout << "namber is negative " << "\n"; 
        n++;
    }
  }
  return c;
}

int kjgksjgjvskdgnhsdj3()
{
       string esa; 

        int a;
        int s;
        int b;

        cout << "create new namber: ";
        cin >> a;

        cout << "enter 'e' if want to see sum even numbers, enter 'o' if want to see sum odd numbers:  ";
        cin >> esa;

        if ( esa == "e")
        {
            

            for (int i = 0; i < a; i++)
            {
                if(i % 2 == 0)
                {
                  s = i;
                  s % 2;
                  b += s;
                  cout << b << "\n"; 
                }
                
                
            }
            
        }
        else
        {
        for (int i = 0; i < a; i++)
            {
                if(i % 2 == 0)
                {
                 continue;
                
                }
                else
                {
                    s = i;
                    b+= s;
                     cout << b << "\n"; 

                }
                
            }
               
        }
        
   return b;     
}



void user1(int a)
{
    const string name = "Альфа";
    const string mobile = "+380 12 345 67 89";
    const string id = "54GDR45GF";
    if (a = 1)
    {
    bool active = 1;
    }
    else
    {
    bool active = 0;
    }

}

void user2(int a)
{
    const string name = "Бета";
    const string mobile = "+380 09 87 654 32";
    const string id = "FG54RD45";
    if (a = 1)
    {
    bool active = 1;
    }
    else
    {
    bool active = 0;
    }
    
     
}

string masage(int a)
{
string x;
if (a == 1)
{
cout << "Введите сообщения" << "\n";
cin >> x;

}
return x;
}
void audioCall(int a)
{
    if (a == 2)
    {
        cout << "Вы позвонили"<< "\n";
    }
    
}

void videoCall(int a)
{
if (a == 3)
    {
        cout << "Вы позвонили по видеосвязи"<< "\n";
    }
}


int main()
{
    /*
    1.1.0 Write the function that takes <name> as an argument and prints it.
    1.1.0 Write the function that takes <name>, <surname> and <age> as input and prints this info.
    1.1.1 Write the function that takes two integer numbers as an argument. It must return true if they are equal, and false in not.

    1.1.2 Write a function that takes and non-negative integer number N as an argument. 
          The function must print integer numbers in the range 0 to N.

    1.1.3 Write a function that takes and non-negative integer number N as an argument. 
          The function calculate sum of integer numbers in the range 0 to N, AND RETURN it.
    */
    
    // place your code here


    string name;

     int a;

     int b;

     int c;

    /*

    cout << "create new name: ";

    cin >> name;

    printnames(name);

    string surname;

    string age;

    cout << "create new name: ";

    cin >> name;

    cout << "create new surname: ";

    cin >> surname;

    cout << "create new age: ";

    cin >> age;

    printnamesAndsurnameAndage(name , surname , age);

    
    cout << "create first namber: ";

    cin >> a;

    cout << "create first namber: ";

    cin >> b;
    
    nambercomparison(a , b);

    kjgksjgjvskdgnhsdj();

    kjgksjgjvskdgnhsdj2();

    */


    
    
    
    
    /*
    2.1 Write a function that calculate and return the factorial of a given number as an argument. Use for or while loop. For example, if user input 3, program must print 6 (1*2*3).

    *A little Help for your:  

        Нагадую що факторіал числа це оце: 1 * 2 * 3 * 4 * … * N. 
        Тоді, factorial of 4  is: 4!  = 1*2*3*4 = 24.
        A factorial of 4  is: 7!  = 1*2*3*4*...*7  = 5040.
        A factorial of 10 is: 10! = 1*2*3*4*...*10 = 3628800.
        

    А ось приклад виклику цієї функції:
    int facto_res = facto(4);
    */
    
    // place your code here

    //agjashghsalkdhg();==============================================================================================
    
    
    
    
    /*
    
    2.1* Write a function that calculate separate sum of odd or even numbers in sequence from range 1 to N. 
    This function must take as an argument a number of elements in sequence – N, and 
    also char symbol ‘e’ of ‘o’: ‘e’ for even numbers, and ‘o’ for odd numbers.

        Say, I want to calculate a sum of odd numbers in range of 1 to 5. 
        Then, I should call this function like:

            int result = calculateSumEven_Odd(5, 'o');

        The result would be a sum of all odd numbers in range of 1 to 5: 1, 2, 3, 4, 5. 
        So, the returned result would be 1 + 3 + 5 = 9.

    */ 
     
    
    
    // place your code here

    // kjgksjgjvskdgnhsdj3(); =====================================================================================
    
    
    
    
    
    
    /*
    3.  Imagine that you working on online chat application. You have a model with two users, and you must to operate with next information:
        - nickname (f.e.: “Nick”);
        - phone number (f.e.: +380 12 345 67 89)
        - account number (f.e.: 543GDR45GF);
        - activity (online/offline, boolean);

        You must create a simple program model to allows these two users to communicate with each other with known information. 
        Users must have the following abilities:
        - addUserToContacts()
        - sendMessage()
        - makeAudioCall()
        - makeVideoCall()
        - makePhoneCall()

    You need to make these functions for each of the two users (we don't know about Classes in C++ yet, sorry 😄).

    You have to figure out in what situations which data for functions are required as input and which as output. Also you have to figure out in what situations which data for functions are required as input and which as output. And also think about simple logic for your functions, for example, user-1 will not be able to successfully make a video call to user-2 if the user-2 is offline. 

    Or, say, user-1 wants to add user-2 to contacts. Suppose that when adding a friend, you need to enter the correct phone number, and if it matches the existing one (user-2), then user-2 will be successfully added to user-1’s contacts.
    */
    
    
    // place your code here

    cout << "подключить пользователя 'Альфа'? Введите цифру один: ";
    cin >> a;

    user1(a);

    cout << "подключить пользователя 'Бета'? Введите цифру один: ";
    cin >> b;

    user2(b);
    if (a == 1 && b == 1)
    {
    cout << "Выберите пользователя в которго хотите войти, '1' - Альфа, '2' - Бета: ";
    cin >> c;
    if (c == 1)
    {
        cout << "вы выбрали пользователя 'Альфа'" << "\n";
        cout << "как вы хотите взаимодействовать с пользоватилем 'Бета'? 1 - сообщение, 2 - звонок, 3 - видеовызов,"<< "\n";
        cin >> a;

         if (a == 2)
        {
         audioCall(a);
         cout << " Было успешно доставлено пользователю 'Бетa'" << "\n";
        }

        if (a == 3)
        {
         videoCall(a);
         cout << " Было успешно доставлено пользователю 'Бетa'" << "\n";
        }

        if (a == 1)
        {
            cout << masage(a) << " Было успешно доставлено пользователю 'Бетa'" << "\n";
        }
    }
    else if (c == 2)
    {
        cout << "вы выбрали пользователя 'Бета'" << "\n";
        cout << "как вы хотите взаимодействовать с пользоватилем 'Альфа'? 1 - сообщение, 2 - звонок, 3 - видеовызов,"<< "\n";
        cin >> a;
        
         if (a == 2)
        {
         audioCall(a);
         cout << " Было успешно доставлено пользователю 'Альфа'" << "\n";
        }

        if (a == 3)
        {
         videoCall(a);
         cout << " Было успешно доставлено пользователю 'Альфа'" << "\n";
        }

        if (a == 1)
        {
            cout << masage(a) << " Было успешно доставлено пользователю 'Альфа'" << "\n";
        }
    }
    
    }
    else if (a == 0 && b == 1)
    {
        cout << "вы выбрали пользователя 'Бета'" << "\n";
        cout << "как вы хотите взаимодействовать с пользоватилем 'Альфа'? 1 - сообщение, 2 - звонок, 3 - видеовызов,"<< "\n";
        cin >> a;
        
         if (a == 2)
        {
         audioCall(a);
         cout << " Было безуспешно доставлено пользователю 'Альфа'" << "\n";
        }

        if (a == 3)
        {
         videoCall(a);
         cout << " Было безуспешно доставлено пользователю 'Альфа'" << "\n";
        }

        if (a == 1)
        {
            cout << masage(a) << " Было безуспешно доставлено пользователю 'Альфа'" << "\n";
        }

    }
    else if (a == 1 && b == 0)
    {
        cout << "вы выбрали пользователя 'Альфа'" << "\n";
        cout << "как вы хотите взаимодействовать с пользоватилем 'Бета'? 1 - сообщение, 2 - звонок, 3 - видеовызов,"<< "\n";
        cin >> a;

         if (a == 2)
        {
         audioCall(a);
         cout << " Было безуспешно доставлено пользователю 'Бетa'" << "\n";
        }

        if (a == 3)
        {
         videoCall(a);
         cout << " Было безуспешно доставлено пользователю 'Бетa'" << "\n";
        }

        if (a == 1)
        {
            cout << masage(a) << " Было безуспешно доставлено пользователю 'Бетa'" << "\n";
        }

        

    }
    

    return 0;
}