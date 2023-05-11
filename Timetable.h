

void ToTimetable(LectureData L, UserData &U){
    string WeekdayString;
    int Weekday=L.TimeDtoWeekday(WeekdayString,L.GetTimeD());
    int TimeI=L.TimetoInt("initial",L.GetTimeI());
    int TimeF=L.TimetoInt("final",L.GetTimeF());

    // for (int i=TimeI;i<TimeF;i++)
    // {
    //     if(U.OutTimetable(i,Weekday)!="-")
    //     {
    //         cout<<"\n!! Unavailable time, please choose another one.";
    //         return;
    //     }
    // }
    for (int i=TimeI;i<TimeF;i++)
    {
        U.InTimetable(L.GetName(),i,Weekday);
    }
    cout<<"Your assigned lecture:\n\t'"<<L.GetName()<<"', "<<WeekdayString<<" from "<<TimeI<<"h to "<<TimeF<<"h.\n";
}

void ShowTimetable(UserData U){
    cout<<endl<<setw(15)<<left<<"Morning";
    cout<<setw(20)<<left<<"MONDAY";
    cout<<setw(20)<<left<<"TUESDAY";
    cout<<setw(20)<<left<<"WEDNESDAY";
    cout<<setw(20)<<left<<"THURSDAY";
    cout<<setw(20)<<left<<"FRIDAY";
    cout<<setw(20)<<left<<"SATURDAY";
    cout<<setw(20)<<left<<"SUNDAY";
    cout<<endl;
    
    string Board[24][9];
    string iANDh;
    //i AND hour, example: i=11 -> iANDh = "11h"

    for(int H=6;H<21;H++)
    {
        for(int Weekday=2;Weekday<9;Weekday++)
        {
            Board[H][Weekday]=U.OutTimetable(H,Weekday);
        }
    }

    for(int i=6;i<21;i++)
    {
        iANDh=to_string(i)+"h";
        cout<<setw(4)<<left<<iANDh;
        cout<<setw(3)<<left<<"to ";
        iANDh=to_string(i+1)+"h";
        cout<<setw(8)<<left<<iANDh;
        for(int j=2;j<9;j++)
        {
            cout<<setw(20)<<left<<Board[i][j];
        }
        cout<<endl;
        if(i==11)cout<<"Afternoon"<<endl;
        if(i==17)cout<<"Evening"<<endl;
    }
}