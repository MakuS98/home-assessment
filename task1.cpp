/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
  #include<iostream>

int data = 255;

float payload = 6.153;

bool flag = true;

char ch = 35;

int a = 10;

int b = a + 100;

int c = b - 20;

int d = c * 3;

int e = d / 2;





int main()
{
    std::cout << "data value is : "  << data << std::endl;
    
    std::cout << "payload value is : "  << payload << std::endl;
    
    std::cout << "flag value is : "  << flag << std::endl;
    
    std::cout << "ch value is : "  << ch << std::endl;
    
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << c << std::endl;
    
    std::cout << d << std::endl;
    
    std::cout << e << std::endl;

    
    
    float g = 0;
    float h = 1;; // дві крапки з комою, но все одно працює
    double q = 1.5426;// можно указать float і . а не ,
    
    
    int value = 3;
    int value1 = value + 1;// не взказан тип данних 
    std::cout << value << std::endl;// дві змінні з однаковою назвoю і з маленкою буквою 

    
    int userID = 0x12; 
    userID += 5;// не вказан тип данних, один і та ж назва змінної і якась хрінь "+="
    std::cout << userID << std::endl;

    return 0;
}

