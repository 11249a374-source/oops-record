#include<iostream>
using namespace std;
class student 
{
    int rollno;
    char sname[100];
    int sub_marks[5];
    float per;
    public :
        void getdata();
        void calc_display();

};

void student :: getdata()
{ 
    cout<<"enter youyr roll no\n";
    cin>>rollno;
    cout<<"enter student name \n";
    cin>>sname;
    cout<<"ente3r five sbuject marks\n";
    for(int i=0;i<5;i++)
        {
         cin>>sub_marks[i];
        }
}                                               
void student :: calc_display()
{
    cout<<"the roll no is:"<<rollno<<"\n";
    cout<<"the student name is:"<<sname<<"\n";
    per=0.0;
    for (int i=0;i<5;i++)
        {
        cout<<"marks of sub_marks["<<i<<"]:"<<sub_marks[i]<<"\n";
        per=per+ sub_marks[i];
        }
    per=per/0.5;
    cout<<"total marks in %"<<per<<"\n";

    if (sub_marks[0]<50 || sub_marks[1]<50 || sub_marks[2]<50 || sub_marks[3]<50 || sub_marks[4]<50 )
    {
        cout<<"overall semester result is : fail";

    }
    else
    {
        cout<<"overall semester result is : pass";
    }
}                                 
int main ()
{
    student s;
    s.getdata();
    s.calc_display();
    return 0;
}