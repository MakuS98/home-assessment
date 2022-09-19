#include <iostream>
using namespace std;

/*
    1. Implement class that describes your Phone :)

       Write everything you want, just describe this object! 

       But, this must have at least, 3 fields, 1 constructor, 1 destructor, 2 setters and 2 getters, and also some printing method 
       that show all information about phone.

       NOTE: every fields must be private.
*/
class Myphone
{
private:
    string cpu;
    string model;
    string versionColorsOS;
    string tema;
public:
    Myphone(/* args */)
    {
     cpu ="qualcomm SM6115 8 ядер";
     model ="CPH2219";
     versionColorsOS ="V12.1";
     tema = "grey";
     
    }
     
    void setTema(string new_tema)
    {
    tema = new_tema;
    }
    void setVersionColorsOS(string new_versionColorsOS)
    {
    versionColorsOS = new_versionColorsOS;
    }
    void getTema()
    {
        cout << tema << "\n";
    }
    void getVersionColorsOS()
    {
        cout << versionColorsOS << "\n";
    }
    
    void statusMyPhone()
    {
        cout << cpu << "\n";
        cout << model << "\n";
        cout << versionColorsOS << "\n";
        cout << tema << "\n";
    }
    ~Myphone()
    {
        tema = "grey";
        cout << "tema = default" << "\n"; 
    }
};




/*
    2. Implement class that describes your laptop with folowing fields:
        -   company name;
        -   inner technical characteristics: RAM, Frequency, size of local storage, etc.;
        -   physical characteristics: sizes and weight, etc.;

       This class must have 2 print methons:
        -   showTechChar() - print all inner technical characteristics;
        -   showPhysicalChar() - print all physical characteristics;
    
       This class must have 2 getters:
        -   getCompanyName() - return company name of laptop;
        -   getFreq() - return Frequency of of laptop;

       This class must have 1 setter:
        -   setCompanyName(string com_name) - assign to company name some value from parameter;

       And also it must have 2 constructors:
        -   default constructor (that assign some default values for all fields)
        -   constructor with parameter of company name (string)

       There is examples of creating this class:
            Laptop L1("Lenovo");
            Laptop L2;
            L2.setCompanyName("Mac");

       NOTE: every fields must be private.
       NOTE: YOU FEEL FREE to add another getters or setters, if you want or need it! 
*/
class MyLaptop
{
private:
    string namefirm;
    string RAM;
    string frequebcy;
    string storage;

    string weight;
    string width;

public:
    MyLaptop()
    {
     namefirm = "Lenovo";
     RAM ="16 ГБ";
     frequebcy ="3,2 ГГц";
     storage ="512 ГБ";

    string weight ="2,45 кг";
    string width ="356x260.4-264.4x21.7-26.85";
    }
    MyLaptop(string namefirmOther)
    {
    namefirm =namefirmOther;
    RAM ="";
    frequebcy ="";
    
    weight ="";
    width ="";
    }

    ~MyLaptop();

   void showTechChar() 
    {
       cout << namefirm << "\n";
       cout << RAM << "\n";
       cout << frequebcy << "\n";
       cout << storage << "\n";
    }

   void showPhysicalChar() 
    {
       cout << weight << "\n";
       cout << width << "\n";

    }
    void getCompanyName()
    {
        cout << namefirm << "\n";
    }
    void getFreq() 
    {
        cout << frequebcy << "\n";
    }

    void setCompanyName(string com_name)
    {
        namefirm = com_name;
    }


};
MyLaptop::~MyLaptop(){}

/*
    Не обов'язково :) 
    Для тих кому малувато буде те шо вище:


    3.1*. Implement SocialMedia class. 

        It must have these fields:
            1. name and surname of user (string); 
            2. usrID - user identifier in hex format (int). For example: int usrID = 0x100;
            3. email (string);

        Also, it must have the following methods:
            1. getUsrID - return user identifier;  
            2. getEmail() - return email of user;


    3.2*. Implement Twitter class that is inherited from SocialMedia class. 

        It must have these fields:
            1. twiAccountName - account name of user;
            2. followers_N - number of followers of user;
            3. following_N - number of following users of the user;
            4. posts_N - number of posts of the user;

        It must have setters and getters for ALL above fields.

        Also, implement the following methods: 
            - addNewPost() - method that accept some text as argument and print it to the console;
            - addFollowing() - method that adds new following to the number of following of the user;
            - delFollower() - method that deletes follower from the number of followers of the user;
*/


int main()
{
    int a;
Myphone Myphone;
cout << "MYPHONE";
Myphone.statusMyPhone();
cout << "Хотите изменить тему телеофана, нажмите 1, если нет, то 0" << "\n";
cin >> a;
if (a == 1)
{
    string b;
    cin >> b;
    Myphone.setTema(b);
    Myphone.statusMyPhone();
}
else
{
    Myphone.getTema();
}
cout << "Хотите изменить версию колорОС телеофана, нажмите 1, если нет, то 0" << "\n";
cin >> a;
if (a == 1)
{
   string b;
    cin >> b;
    Myphone.setVersionColorsOS(b);
    Myphone.statusMyPhone(); 
}
else
{
    Myphone.getVersionColorsOS();
}
cout << "\n";
    MyLaptop L1("Gigabite");
    L1.getCompanyName();

    MyLaptop L2;
    L2.getCompanyName();



    




    return 0;
}
