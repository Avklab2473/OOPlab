#include<iostream>
#include <string>
using namespace std;

class employee{

public:
    int id,num = 1;
    float basic;
    char name,title;

    void get_emp_info()
    {
    std::cout<<"Employ "<<num<<" "<<std::endl;
    num++;
    cout<<"\n Enter name";
    cin>>name;
    cout<<"\n Enter Employee ID";
    cin>>id;
    cout<<"\n Employee designation";
    cin>>title;
    cout<<"\n Employee designation";
    cin>>basic;

    }

    int gross_sal(){
    int d_a = basic*(120/100),hra=basic*(20/100),inc = basic*(5/100),it = basic*(10/100),pt= basic*(1/100) ;
    int gs = d_a + hra + inc -(it + pt);

    return gs;
    }

    void give_emp_info(){

    std::cout<<"Employee"<<num<<"detailes are : "<<std::endl;
    std::cout<<"Employee name : "<<name<<std::endl; 
    std::cout<<"Employee id : "<<id<<std::endl;
    std::cout<<"Employee desigation : "<<name<<std::endl;
    std::cout<<"Gross salory : "<<gross_sal()<<std::endl;
    }

    };

    int main(){

        employee e;
        e.get_emp_info();

        return 0;
    }