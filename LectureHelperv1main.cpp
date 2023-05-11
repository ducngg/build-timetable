#include"cpplibduc.h"
//Libraries

#include"usingclass.h"
//classes

#include"LectureClass.h"
//Lecture references

#include"Timetable.h"
//Timetable references

#include"LectureHelper.account.h" 

int main(){

    UserData User[11];
    for(int i=1;i<=10;i++)
    {
        User[i].InNo(i);
    }
    //Initialize the User

    LectureData Lecture;
    string ecORco;

    string uORm;
    cout<<"\nYou are User or Moderator? Type here: ";cin>>uORm;
    for(int i=0;i<100;i++)
    {
        if(uORm=="User")
        {
            cin.ignore();
            break;
        }
        else if(uORm=="Moderator")
        {
            cout<<"\nModerator not yet supported\n";
            return 0;
        }
        else
        {
            cout<<"Just choose 1 of these: 'User' or 'Moderator': ";cin>>uORm;
        }
    }
    /*
    cout<<"\nYou want to choose from 'existed classes' or 'create own' lectures? Type here: ";getline(cin,ecORco);
    for(int i=0;i<100;i++)
    {
        if(ecORco=="existed classes")
        {
            ...
        }
        else if(ecORco=="create own")
        {
            ...
        }
        else
        {
            cout<<"Just choose 1 of these: 'User' or 'Moderator': ";getline(cin,ecORco);
        }
    }
*/

    User[1].SignIn(User);

    for(int i=1;i<100;i++)
    {
        string ordinalOFi=(i%10==1)?"st":(i%10==2)?"nd":(i%10==3)?"rd":"th";
        cout<<"\n\nYour "<<i<<ordinalOFi<<" lecture.";
        Lecture.GetInfo();
        if(Lecture.GetName()=="end")
        {
            cout<<"\nYou have chosen to end the filling process!\n";
            break;
        }
        ToTimetable(Lecture,User[1]);
    }
    ShowTimetable(User[1]);
    return 0;
}
