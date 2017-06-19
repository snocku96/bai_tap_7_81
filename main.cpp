#include <iostream>
#include <string>
using namespace std;

int main()
{
   string pollQuestion;
   string answer_1;
   string answer_2;
   string answer_3;
   string user;
   int a=0,b=0,c=0;
   cout <<"Please enter your poll question:"<<endl;
   getline(cin,pollQuestion,'\n');
   cout <<"****************************"<<endl;
   cout <<"Enter your answer 1:"<<endl;
   getline(cin,answer_1,'\n');
   cout <<"Enter your answer 2:"<<endl;
   getline(cin,answer_2,'\n');
   cout <<"Enter your answer 3:"<<endl;
   getline(cin,answer_3,'\n');
   cout <<pollQuestion<<endl;
   cout <<"1."<<answer_1<<endl;
   cout <<"2."<<answer_2<<endl;
   cout <<"3."<<answer_3<<endl;
   while(1){
        cout <<"Enter Answers from 1-->3, enter 0 when finished: ";
        getline(cin,user,'\n');
        if(user == "1")
            a++;
        else if(user == "2")
            b++;
        else if(user == "3")
            c++;
        else if(user == "0"){
            break;
        }
        else
            cout<<"fail!!!!!!"<<endl;
   }
   cout <<"The poll results are :"<<endl;
   cout <<" Answer 1 are "<<a<<endl;
   cout <<" Answer 2 are "<<b<<endl;
   cout <<" Answer 3 are "<<c<<endl;


}
