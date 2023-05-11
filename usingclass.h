
class UserData{

    private:
    int No;
    string Username;
    string Password;
    string Fullname;
    string Timetable[24][9];

    public:
    UserData(){
        Username="0";
        for(int i=0;i<24;i++)
            {
                for(int j=2;j<9;j++)
                {
                    Timetable[i][j]="-";
                }
            }
    }
    void InNo(int i){
        No=i;
    }
    void InUsername(string u){
        Username=u;
    }
    void InPassword(string p){
        Password=p;
    }
    void InFullname(string f){
        Fullname=f;
    }
    void InTimetable(string t, int i, int j){
        Timetable[i][j]=t;
    }
    void SignIn(UserData User[]);
    string OutTimetable(int i, int j){
        return Timetable[i][j];
    }
    string OutUsername(){
        return Username;
    }
};

class LectureData{

    private:
    string Name;
    string TimeD;
    string TimeI;
    string TimeF;

    public:
    void GetInfo(){
        cout<<"\nWhat is your lecture name? ";getline(cin,Name);
        if(Name=="end")return;
        cout<<"Weekday: ";cin>>TimeD;
        cout<<"Assigned time?\nFrom: ";cin>>TimeI;cout<<"to: ";cin>>TimeF;
        cin.ignore();
    }

    string GetName(){
        return Name;
    }
    string GetTimeD(){
        return TimeD;
    } 
    string GetTimeI(){
        return TimeI;
    }
    string GetTimeF(){
        return TimeF;
    }
    int TimetoInt(string iORf, string Time);
    int TimeDtoWeekday(string &WeekdayString, string TimeD);

};