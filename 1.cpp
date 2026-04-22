//We can use printf() & scanf() in C++ 

//use this for all case #include <bits/stdc++.h>


/*#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    std::cout<< " This project uses the C++17 language standard version. ie if "<<"\n using name space std \n isn't used " << std::endl;
    return 0;
}*/

/*#include "iostream"
int main() {
    int y=5;  // x is called as variable or identifier 
    // OR
    int x;
    x=5;
    std::cout<< x << y;
    // no need of return 0 in modern compilers
}*/

/*#include <iostream>
int main(){
    //integer
    int x=9.8;
    //double
    double y=9.8;
    //string 
    std::string z="Rehaan";
    //char
    char a='d';
    //boolean
    bool b=true;
}*/

/*#include <iostream>
int main() {
    const double PI=3.12;
    std::cout<<PI;
}*/

/*#include <iostream>
namespace x1{
    int x=1;
}
int main(){
    int x=0;
    std::cout<<x<<x1::x;
}
int main(){
    using namespace x1;
    std::cout<<x;
}*/

/*#include <iostream>
int main(){
    using std::string;
    string name="Rehaan";
}
int main(){
    using namespace std;
    int x=5;
    cout<<x;
}*/

/*#include <iostream>
typedef std::string text_t;
using integer=int;
int main(){
    text_t name="rehaan";
    integer marks=90;
    std::cout<<name<<'\t'<<marks;
}*/

//Arthmetic Operators! - Use Serpent Notebook!

/*#include <iostream>
int main(){
    double x=10.66;
    double y=(int) x;
    char c=100;
    std::cout<<x<<y;
    std::cout<<c;
    int a=8;
    int b=10;
    double scr=a/(double)b *100;
    std::cout<<scr;
}*/

/*#include <iostream>
int main(){
    std::string nm;
    std::cout<<"Whats your name?\n";
    std::cin>>nm;
    std::cout<<nm;      // << Insertion Operator >> Extersion Operator
}*/

/*#include <iostream>
int main(){
    int age;
    std::string nme;                            
                                                Works fine until age is getline is used at beginning
                                                but if getline is used after using cin then it skips the getline part 
                                                as cin has inbuilt \n as getline takes \n as input.                                                                                                           
    std::cout<<"Enter your full name\n";             
    std::getline(std::cin,nme);
    std::cout<<"Enter your age\n";
    std::cin>>age;  
    std::cout<<age<<'\n'<<nme;
}*/

/*#include <iostream>
int main(){
    int age;
    std::string nme; 
    std::cout<<"Enter your age\n";
    std::cin>>age;                                                                                                                           
    std::cout<<"Enter your full name\n";              //See the error as run this code
    std::getline(std::cin,nme);
    std::cout<<age<<'\n'<<nme;
}*/

/*#include <iostream>
int main(){
    int age;
    std::string nme; 
    std::cout<<"Enter your age\n";
    std::cin>>age;                                                                                                                           
    std::cout<<"Enter your full name\n"; 
    std::getline(std::cin>>std::ws,nme);                     //Issue Resolved!
    std::cout<<age<<'\n'<<nme;
}*/

//Mathematical Operations - https://cplusplus.com/reference/

/*#include <iostream>
int main(){
    int Age;
    std::cout<<"Whats your age?"<<std::endl;
    std::cin>>Age;
    if(Age>18 || Age==18){
        std::cout<<"You are eligible to vote!"<<std::endl;
    }
    else if(Age<0 && Age!=0){
        std::cout<<"You are not eligible to vote! as you're not born yet!"<<std::endl;
    }
    else{
        std::cout<<"You are not eligible to vote!"<<std::endl;
    }
}*/

//Bitwise Operators - AND | OR | NOT | XOR

/*#include <iostream>
int main(){
    double grade=80;
    grade>=90 ? std::cout<<"good" : std::cout<<"bad";
    std::cout<<(grade<=70 ? "failure" : "ok!");
}*/

/*#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cin>>name;
    char x=name.at(0);
    name.append("123");
    name.insert(1,"@");
    int y=name.find(' ');
    name.erase(1,3);
    std::cout<<name<<std::endl<<y<<x;
}*/

/*#include <iostream>
int main(){
    std::string name;
    
    while(name.empty()){
        std::cout<<"Enter your name"; 
        std::getline(std::cin,name);    //std::cin>>name;   cin doesn't read initial ws so dont use this but use getline function!
    }
    std::cout<<"hello"<<name;
}*/

/*#include <iostream>
int main(){
    int num;
    std::cout<<"Positive";
    std::cin>>num;
    while(num<0){
        std::cout<<"Positive";
        std::cin>>num;                 //Default value is 0 for int & '' for string
    }
    std::cout<<"Number"<<num;
}*/

/*#include <iostream>
int main(){
    for(int i=0;i<3;i++){
        std::cout<<i;
    }
}*/

//Nested Loops

/*#include <iostream>
#include <ctime>
int main(){
    std::srand(time(NULL));
    int num=(rand()%6)+1;
    std::cout<<num;
}*/       
//Use switch and do while to make a guess game!

/*#include <Iostream>
void func();     // Function declaration first - tell's compiler that function is somewhere in the code go fetch it.
int main(){
    func();
}
void func(){    // Function definition later
    std::cout<<"Hi! I am Rehaan Parthanahalli.";             //Output - Hi! I am Rehaan Parthanahalli.
}*/

/*#include<bits/stdc++.h> 
std::string gr(){
    return "Hi";
}
int sum(int a,int b){
    return a+b;
}
int main(){
    int a=1,b=2;
    std::cout<<gr()<<std::endl;
    std::cout<<sum(a,b);
}*/

/* Overloaded function 

func();
func(par1,par2);
func(par3,par4);      //Valid & No error until parameter are all different 
*/

//Banking practice program

//Rock paper Scossir game.

/*#include <iostream>
int main(){
    int age=18;
    std::cout<<&age; //Similar to all Datas.
}*/

/*#include <iostream>
void swap(int x,int y);
int main(){
    int x=8,y=9;
    swap(x,y);
}
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;                        //Pass Value as copied version of x & y are changed but actual values aren't
    y=temp;
    std::cout<<x<<y;
}*/

/*#include<iostream>
void swap(int &X,int &Y);
int main(){
    int x=9,y=8;
    swap(x,y);
}
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;                 // Pass reference according to mem addr the values were swappped
    std::cout<<x<<y;
}*/

/*#include<iostream>
void func(const int age){
    age=0;
    std::cout<<age;
}
int main(){
    int age=19;
    func(age);   ///errror as age param is cont it can't be changed
}
#include<iostream>
void func(const int age){
    std::cout<<age;
}
int main(){
    int age=19;
    func(age);   ///No errror as age param is cont it can't be changed and isn't changed
}*/

//Credit Card Validator - Luhn Algorithm

//Pointer's

/*#include <iostream>
int main(){
    int x[2]={1,2};
    int *pX=x;                   //* deference operator 
                                // & address of operator
    std::cout<<pX<<x<<"\n";
    std::cout<<*pX;
    return 0;
}*/

/*#include <iostream>
int main(){
    int x=5;
    int *pX=&x;
    std::cout<<pX<<std::endl;   //Address of x
    std::cout<<*pX<<std::endl;
 //Value at address of x
}*/

/*#include <iostream>
int main(){
    int n=9;
    int *p=nullptr;
    p=&n;
    if(p==nullptr){
        std::cout<<"Adress not assigned";
    }else{
        std::cout<<"Address assigned";
        std::cout<<p<<'\n';
        std::cout<<*p;
    }
}*/

//pass list to function

/*#include<iostream>
int total(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    std::cout << sum;
    return sum;
}
int main(){
    int arr[] = {1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *pArr = arr;

    for(int i = 0; i < size; i++){
        std::cout << *(pArr + i) << std::endl;
    }

    for(int i = 0; i < size; i++){
        std::cout << pArr[i] << std::endl;
    }

    total(pArr, size);
}*/

/*#include <iostream>
int total(int *p) {
    int sum = 0;
    while (*p != -1) {   // stop when sentinel found
        sum += *p;
        p++;
    }
    return sum;
}
int main() {
    int arr[] = {1, 2, -1};  // sentinel at the end

    int ans = total(arr);
    std::cout << ans;
}*/

//Search an element in list.

//bubble sort

/*#include<iostream>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        std::getline(std::cin,arr[i]);
        if (arr[i]=='q'){
            break
        }
    }
}*/

/*#include<iostream>
int main(){
    std::string arr[5];
    std::string temp;
    for(int i=0;i<5;i++){
        std::getline(std::cin,temp);
        if(temp=="q"){
            break;
        }else{
            arr[i]=temp;
        }
    }
    for(int i=0;!arr[i].empty();i++){
        std::cout<<arr[i];
    }
}*/

//2D List

//Look in video or Notebook!

/*#include <iostream>
int main(){
    int *p=nullptr;
    p=new int;
    *p=5;
    std::cout<<*p;
}*/

/*#include <iostream>
int main(){
    int *p=nullptr;
    int size;
    std::cout<<"Enter the size of L";
    std::cin>>size;
    p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    for(int i=0;i<size;i++){
        std::cout<<"Elemet at"<<i-1<<"is"<<i;
    }
    delete[] p;
}*/

/*#include <iostream>
template <typename T,typename U>
T max1(T x, U y){
    return (x > y) ? x : y;
}
int main(){
    std::cout<<max1('1',2);
}*/

/*#include <iostream>
struct std{
    std::string name;
}
void printd(std s1){
    std::cout<<s1.name;
    std::cout<<&s1;     //Pass to Value
}
int main(){
    std s1;
    s1.name="Rehaan";
    std::cout<<&s1;
    printd(s1);
}*/

/*#include <iostream>
struct std{
    std::string name;
}
void printd(std &s1){
    std::cout<<s1.name;
    std::cout<<&s1;     //Pass to Reference
}
int main(){
    std s1;
    s1.name="Rehaan";
    std::cout<<&s1;
    printd(&s1);
}*/

/*#include <iostream>
enum day {sunday=0,monday=1};
int main(){
    day today=sunday;
    switch(today){
        case 0:
            std::cout<<"Its Sunday";
            break;
        case 1:
            std::cout<<"Its Monday";
            break;
        default:
            break;
    }
}*/

/*#include <iostream>
class Human{
    public:
    std::string name;
    int age;
    void eat(){
        std::cout<<"Eat";
    }
};
int main(){
    Human h1;
    h1.name="Rehaan";
    h1.eat();
}*/

/*#include <iostream>
typedef std::string t;
class stud{
    public:
    t name;
    int age;
    stud(t name1,int age){
        name=name1;
        this->age=age;
        std::cout<<name1;
    }
};
int main(){
    stud s1("Rehan",15);
    std::cout<<s1.name;
}*/

/*#include<bits/stdc++.h>
class stud{
    public:
    std::string name;
    stud(){                         //Without parameter can't access name or other class attributes.
        std::cout<<"Hi";
    }
};
int main(){
    stud s1;
    s1.name="Rehaan";
}*/

/*#include<iostream>
class num{
    public:
    int age1;
    int age2;
    num(int age1){
        this->age1=age1;
    }
    num(int age1,int age2){
        this->age1=age1;
        this->age2=age2;
    }
};
int main(){
    num s1(12);num s2(12,24);
    std::cout<<s1.age1<<'\n'<<s2.age2;  //Overloaded Constructors
}*/

/*#include<iostream>
class num{
    public:
    int age1;
    int age2;
    num(int age1){
        this->age1=age1;
    }
    ~num(){
        std::cout<<"Deleted";
    }

};
int main(){
    num s1(12);
}*/

/*#include <iostream>
class stove{
    private:
    int temp=0;
    public:
    void gettemp(){     //Getter make readable not writeable
        std::cout<<temp;
    }
    void settemp(int temp){   //Makes Writeable
        this->temp=temp;
    }
};
int main(){
    stove s1;
    std::cout<<s1.temp; //Error
    s1.settemp(100);
    s1.gettemp();
}*/

//About inheritance ask GPT "Explain me inheritance single level based on access specifer C++"

//Read Textbook Class XII Handbook about Class Object FunctionOverloading  Constr & Destr Inheritance 

//Includes concpts like defining member function outside of class | Inline function | Freind fucntion 