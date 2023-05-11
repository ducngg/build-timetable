#include"cpplibduc.h"
//Libraries

#include"usingclassfileinput.h"
//classes

#include"LectureClass.h"
//Lecture references

#include"Timetable.h"
//Timetable references

#include"LectureHelper.account.h" 

int main(){

    UserData User;

    LectureData Lecture;

    string INPUT;
    cout<<"\nWhat is the name of input file: "; cin>>INPUT;
    ifstream DATALINE;
    DATALINE.open(INPUT);

    for(int i=1;i<100;i++)
    {
        if(!getline(DATALINE,Lecture.Name)) break;
        getline(DATALINE,Lecture.TimeD);
        getline(DATALINE,Lecture.TimeI);
        getline(DATALINE,Lecture.TimeF);
    
        ToTimetable(Lecture,User);
    }
    ShowTimetable(User);

    cout<<"\n\n\n";
    return 0;
}
