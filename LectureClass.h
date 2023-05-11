
int LectureData::TimeDtoWeekday(string &WeekdayString,string TimeD){
    begin:
    if(TimeD=="Monday"||TimeD=="monday"||TimeD=="2"||TimeD=="mon"||TimeD=="Mon")
    {WeekdayString="Monday";return 2;}
    else if(TimeD=="Tuesday"||TimeD=="tuesday"||TimeD=="3"||TimeD=="tue"||TimeD=="Tue")
    {WeekdayString="Tuesday";return 3;}
    else if(TimeD=="Wednesday"||TimeD=="wednesday"||TimeD=="4"||TimeD=="wed"||TimeD=="Wed")
    {WeekdayString="Wednesday";return 4;}
    else if(TimeD=="Thursday"||TimeD=="thursday"||TimeD=="5"||TimeD=="thu"||TimeD=="Thu")
    {WeekdayString="Thursday";return 5;}
    else if(TimeD=="Friday"||TimeD=="friday"||TimeD=="6"||TimeD=="fri"||TimeD=="Fri")
    {WeekdayString="Friday";return 6;}
    else if(TimeD=="Saturday"||TimeD=="saturday"||TimeD=="7"||TimeD=="sat"||TimeD=="Sat")
    {WeekdayString="Saturday";return 7;}
    else if(TimeD=="Sunday"||TimeD=="sunday"||TimeD=="8"||TimeD=="1"||TimeD=="sun"||TimeD=="Sun")
    {WeekdayString="Sunday";return 8;}
    else
    {
        cout<<"\n!! Invalid weekday, please enter the weekday again: ";cin>>TimeD;cin.ignore();
        goto begin;
    }
}

int LectureData::TimetoInt(string iORf, string Time){

    int finalp=0;if(iORf=="final")finalp=1;
    //iORf: initial or final: mode, affect to the return value.

    begin:
    if(Time[0]=='p')
    {
        if(Time.length()==2)
        {return (Time[1]-48)+5+finalp;}  // p+5=hour  and  final period end when start of next period
        else if(Time.length()==3)
        {return (Time[1]-48)*10+(Time[2]-48)+5+finalp;}
        else
        {
            cout<<"\n!! Invalid time, please enter the "<<iORf<<" time again. Use p_ for period and _h for hours: ";cin>>Time;
            goto begin;
        }
    }
    /*
    else if(Time.length()==1)
    {
        if(Time[0]-48<10&&Time[0]-48>0)
        {return Time[0]-48;}
        else
        {
            cout<<"\n!! Invalid time, please enter the "<<iORf<<" time again. ";cin>>Time;
            goto begin;
        }
    }
    */
    else if(Time.length()==2)
    {
        if(Time[1]=='h')
        {
            if(Time[0]-48<10&&Time[0]-48>0)
            {return Time[0]-48;}
        }
        /*
        else if((Time[0]-48)*10+(Time[1]-48)<25&&(Time[0]-48)*10+(Time[1]-48)>0)
        {return (Time[0]-48)*10+(Time[1]-48);}
        */
        else
        {
            cout<<"\n!! Invalid time, please enter the "<<iORf<<" time again. ";cin>>Time;
            goto begin;
        }
    }
    else if(Time.length()==3)
    {
        if(Time[2]=='h'&&(Time[0]-48)*10+(Time[1]-48)<25&&(Time[0]-48)*10+(Time[1]-48)>0)
        {return (Time[0]-48)*10+(Time[1]-48);}
        else
        {
            cout<<"\n!! Invalid time, please enter the "<<iORf<<" time again. ";cin>>Time;
            goto begin;
        }
    }
    else
    {
        cout<<"\n!! Invalid time, please enter the "<<iORf<<" time again. ";cin>>Time;
        goto begin;
    }
    return 0;
}
