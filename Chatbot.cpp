#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <cstdlib>
#include <string>
#include <thread>
#include <chrono>
#include <time.h>
using namespace std;
//string ans=""; 
class ChatBot{
    public:
    float total_time=10;
    int max = 5; 
    
    string questions[5] = {"What is C++?", "Why C++?", "What is namespace in C++?", "What is operator overloading in C++?","What is the difference between C and C++?"};
       
    
    void ask_question()
    {
        srand((unsigned) time(NULL));
        int random=rand()%max;
        cout<<questions[random]<<endl;
    }
    
    int answer()
    {
        string ans="";
        thread t1([&](){ 
        cin>>ans;
        });
        this_thread::sleep_for(chrono::seconds(10));
        t1.detach();
        if(ans=="")
        {
            return -1;
        }
        return 1;
    }
    
    
};

int main()
{
    ChatBot c;
    c.ask_question();
    cout<<"10 seconds to answer"<<endl;
    int val=0;
    val=c.answer();
    if(val==-1)
    {
        cout<<"No answer";
    }
   if(val==1)
    {
        cout<<"Submitted";
    }

    return 0;
}