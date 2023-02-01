#include <iostream>
#include <string>
using namespace std;
class login{
    public:
    void check(){
    string u="";
    string p="";
    cout<<"enter username: ";
    cin>>u;
    cout<<"enter password: ";
    cin>>p;
    cout<<endl;
    int n=2;
    string username[2]={"Ravi","Sheetal","Roshan"};
    string password[2]={"Admin1","Admin2","Admin3"};
    for(int i=0;i<n;i++)
    {
        if(username[i]==u)
        {
            if(password[i]==p)
            {
                cout<<"login successful";
                break;
            }
            else{
                cout<<"login unsuccessful";
                break;
            }
        }
        else{
                cout<<"login unsuccessful";
            }
    }
    }
};
int main()
{
    login l;
    l.check();
    
    return 0;
}