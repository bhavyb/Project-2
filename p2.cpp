#include<iostream>
#include <string>
using namespace std;
// 1
class student
{
    private:
        string name,fn,address,branch;
        char bg[4],state[22], mailid[33],cn[30];
        int sem,enroll;
    public:
        void input()
        {
            cout<<"Enter the your Name :: ";
            getline(cin, name);
            cout<<"Enter the your father name :: ";
            getline(cin,fn);
            cout<<"Enter the your Enrollment No. :: ";
            cin>>enroll;
            cin.ignore();
            cout<<"Enter the your address :: ";
            getline (cin,address);
            cout<<"Enyer the your boold group :: ";
            cin>>bg;
            cout<<"Enter the your state :: ";
            cin>>state;
            cout<<"Enter the your E-mail id :: ";
            cin>>mailid;
            cout<<"Enter the your collage name ::";
            cin>>cn;
            cin.ignore();
            cout<<"Enter the your Branch :: ";
            getline(cin,branch);
            cout<<"Enter the your Sem :: ";
            cin>>sem;
        }
        void display()
        {
            cout<<"\nYour Name is :: "<<name<<endl;
            cout<<"Your Father name is :: "<<fn<<endl;
            cout<<"Your enrollment No. is :: "<<enroll<<endl;
            cout<<"Your address is :: "<<address<<endl;
            cout<<"Your boold group is :: "<<bg<<endl;
            cout<<"Your state is :: "<<state<<endl;
            cout<<"Your E-mail id is :: "<<mailid<<endl;
            cout<<"Your collage name is :: "<<cn<<endl;
            cout<<"Your Branch is :: "<<branch<<endl;
            cout<<"Your Sem is :: "<<sem<<endl;
        }
};
// 2
class Employee 
{
    private:
        string name;
        int id;
        int salary;

    public:
        void get_detail()
        {
            cout<<"\n \n";
            cin.ignore();
            cout<<"Enter the emplotee name :: ";
            getline(cin,name);
            cout<<"Enter the employee id :: ";
            cin>>id;
            cout<<"Enter the employee salary ::";
            cin>>salary;
        }
        void display_detail()
        {
            cout<<"\nEmployee name is ::"<<name<<endl;
            cout<<"Employee Id is :: "<<id<<endl;
            cout<<"Employee salary is :: "<<salary<<endl;
        }
};
// 3
class Account
{
    private:
        int acc_no;
        double balance;
        int branch_code;
    public:
        void get_acc_detail()
        {
            cout<<"\n \n";
            cout<<"Enter the account number :: ";
            cin>>acc_no;
            cout<<"Entre the blance :: ";
            cin>>balance;
            cout<<"Enter the branch code ::";
            cin>>branch_code;
        }
        void display_acc_detail()
        {
            cout<<"\nNumber :: " <<acc_no<<endl;
            cout<<"Balance :: " <<balance<<endl;
            cout<<"Branch Code :: " <<branch_code<<endl;
        }
};
//4
class Distance
{
    private:
        int feet;
        float inches;

    public:
        void get_distance()
        {
            cout<<"\n \n";
            cout<<"Enter the feet :: ";
            cin>>feet;
            cout<<"Enter the inches :: ";
            cin>>inches;
        }

        void display_distance()
        {
            cout<<"\nDistance Details ::"<<endl;
            cout<<"Feet :: "<<feet<<endl;
            cout<<"Inches :: "<<inches<<endl;
        }
};
// 5
class shap
{
    private:
        float height;
        float base;
    public:
        void get_shap()
        {
            cout<<"\n \n";
            cout<<"Enter the height in centimeter ::";
            cin>>height;
            cout<<"Enter the base in centimeter ::";
            cin>>base;
        }
        void put_shap()
        {
            cout<<"\nHeight is :: "<<height<<"cm"<<endl;
            cout<<"Base is :: "<<base<<"cm"<<endl;
        }
};

int main()
{
    student s;
    s.input();
    s.display();

    Employee emp;
    emp.get_detail();
    emp.display_detail();
    
    Account Acc;
    Acc.get_acc_detail();
    Acc.display_acc_detail();
    
    Distance distance;
    distance.get_distance();
    distance.display_distance();
    
    shap sh;
    sh.get_shap();
    sh.put_shap();
    
    return 0;
}