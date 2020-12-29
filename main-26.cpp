#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    string name;
    int idnum;
    double quizAverage;
    string grade;
};

int main()
{
    int size = 0;
    string answer="";
    int nums=0;
    double average=0.0;
    string letter ="";
    Student s;
    vector <Student> Students;
    cout<< "how many students are there in the class?"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        Students.push_back(s);
        cout<<"What is the name of student "<<i+1<<" ?"<<endl;
        cin>>answer;
        Students[i].name = answer;
        Students[i].idnum = nums;
        cout<<"What are your scores for the last 5 tests?"<<endl;
        for(int s=0;s<5;s++)
        {
            cout<<"Quiz "<<s+1<<": ";
            cin>>average;
            while(average<0||average>100)
            {
                cin>>average;
            }
            Students[i].quizAverage = Students[i].quizAverage + average;
        }
        Students[i].quizAverage=Students[i].quizAverage/5;
        if(Students[i].quizAverage>=90)
        {
            Students[i].grade= "A";
        }
        if(Students[i].quizAverage>=80&&Students[i].quizAverage<90)
        {
            Students[i].grade="B";
        }
        if(Students[i].quizAverage>=70&&Students[i].quizAverage<80)
        {
            Students[i].grade="C";
        }
        if(Students[i].quizAverage>=60&&Students[i].quizAverage<70)
        {
            Students[i].grade="D";
        }
        if(Students[i].quizAverage<60)
        {
            Students[i].grade="F";
        }
        cout<<Students[i].grade<<endl;
    }

    return 0;
}
void PhaseB(Student s)
{
    int idNum;
    while(true)
    {
        cout << "Enter an ID number ('-1' to stop)" <<endl;
        cin >> idNum;
        if (idNum == -1)
        {
            break;
        }
        
        if (idNum == s.idnum)
        {
                cout << s.name << "'s quiz average is " << s.quizAverage << " and their grade is a " << s.grade <<endl;
                break;
        }
        else if (idNum != s.idnum)
        {
            cout << "Not Found" <<endl;
        }
    }
}
