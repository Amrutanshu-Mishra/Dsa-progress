#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    student(){}
    student(string s,int a,int g){
        name=s;
        age=a;
        gender=g;
    }
    student(student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    ~student(){
        cout<<"DESTRUCTOR CALLED!!!!!!";
    }
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"age = ";
        cout<<age<<endl;
        cout<<"gender = ";
        cout<<gender<<endl;
    }
    void set_name(string s){
        name=s;
    }
    bool operator == (student &a){
        if((name==a.name)&&(age==a.age)&&(gender==a.gender)){
            return true;
        }
        return false;
    }
};
int main(){
    student a("tim",20,0);
    student c=a;
    c.printInfo();
    if (c==a)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"different"<<endl;
    }
    

    
    return 0;
}