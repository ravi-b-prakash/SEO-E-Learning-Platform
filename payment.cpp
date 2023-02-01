#include <iostream>
using namespace std;
class payment{
    public:
    double amount=0.0;
    payment(int i)
    {
        double amt[3]={100.0,250.0,150.0};
        amount=amt[i-1];
    }
    double bill()
    {
        return amount;
    }
};
int main()
{
    int val;
    cout<<"Courses"<<"\t\t"<<"Prices"<<endl;
    cout<<"1. SEO"<<"\t\t"<<"Rs. 100"<<endl;
    cout<<"2. JAVA"<<"\t\t"<<"Rs. 250"<<endl;
    cout<<"3. HTML CSS JS"<<"\t"<<"Rs. 150"<<endl;
    cout<<"Enter your choice: 1,2 or 3:"<<endl;
    cin>>val;
    payment p(val);
    double a=p.bill();
    cout<<"Please pay: Rs. "<<a<<endl;
    return 0; 
    }