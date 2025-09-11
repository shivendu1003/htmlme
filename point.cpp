#include <iostream>
using namespace std;
int main(){
    int age=19;
    int *pAge=&age;
    double gpa=9.5;
    double*pGpa=&gpa;
    string name="mike";
    string *pName=&name;

    cout <<*&gpa;
    return 0;


    
    
}