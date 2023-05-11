//-------------------------------//

//int login(UsernameandPass Account[]);
//void AnotherAccount(UsernameandPass Account[], int counterdata[], book lib[]);
//void InitLib(UsernameandPass Account[],book lib[]);
//------functions prototype------//

void UserData::SignIn(UserData User[]){
    string passagain;
    cout<<"\nWelcome to LectureHelper, create your username: ";

    typeusername:
    getline(cin,Username);

    for(int i=1;i<=10;i++)
    {
        if(i!=No&&Username==User[i].OutUsername())
        {
            cout<<"\nThis username has been taken, try another one! Create your username: ";
            goto typeusername;
        }
    }

    for(int i=0;i<Username.length();i++)
    {
        if(Username[i]==' ')
        {
            cout<<"\nUsername must not have blanks. Type your username again: "; goto typeusername;
        }
    }
    
    cout<<"\nCreate your password for '"<<Username<<"', it should have at least 6 characters: ";
    typepass:
    cin>>Password;
    if(Password.length()<6)
    {
        cout<<"\n! The password is not long enough ! Create your password again: ";
        goto typepass;
    }
    cout<<"\nEnter your password again? ";cin>>passagain;
    if(Password!=passagain)
    {
        cout<<"\n! The password is not match ! Create your password again: ";
        goto typepass;
    }

    cin.ignore();
    cout<<"\nWhat is your real name? ";getline(cin,Fullname);
     //cout<<"\nHow should we call you? (etc. 'Mr.', 'Ms.', 'Mrs.', 'Dr.'...): ";getline(cin,User[accno].Prefixname);
    cout<<"\nSign in completed. \n";
    cout<<"===================================\n";
}

/*
int login(UsernameandPass Account[]){
    string ch_u; //check username
    string ch_p; //check password

    int limitcheckpass=0;

    cout<<"\nType in your username: ";cin>>ch_u;
    for(int i=1;i<=10;i++) //Just allow up to 10 accounts
    {
        if(ch_u==Account[i].username)
        {
            {
                cinch_plabel:
                cout<<"\nType in your password please, "<<Account[i].prefixname<<" "<<Account[i].realname<<": ";
                cin>>ch_p;
                if(ch_p==Account[i].password)
                {
                    cout<<"\nWelcome back, "<<Account[i].prefixname<<" "<<Account[i].realname<<".";
                    cout<<"\n===================================\n";
                    return i;
                }
                else if(ch_p!=Account[i].password&&limitcheckpass<5)
                {
                    limitcheckpass++;
                    cout<<"\n! Wrong password !";
                    cout<<"\nYou have "<<5-limitcheckpass<<" tries left.\n";
                    goto cinch_plabel;
                }
                else if(ch_p!=Account[i].password&&limitcheckpass==5)
                {
                    cout<<"\nWrong password too many times! Please login again!\n";
                    return -1;
                }
            }
        }
    }
    return 0;
}

void AnotherAccount(UsernameandPass Account[], int counterdata[], book lib[]){
    int DecoyForLogin;
    string checkanoacc;
    int accno;

    cout<<"===================================";

    checkanotacc:
    cout<<"\nHi! Have you had an account? Type 'yes' or 'no': ";cin>>checkanoacc;

    if(checkanoacc!="yes"&&checkanoacc!="no")goto checkanotacc;
    else if(checkanoacc=="no")
    {
        for(accno=1;accno<=10;accno++) //Exceed limit of accounts(10)
        {
            if(Account[accno].username==" ")
            break;
        }

        if(accno==11) //Exceed limit of accounts(10)
        {
            cout<<"\n! No more account can be created !\n";
            goto checklogin;
        }

        cin.ignore();
        SignIn(accno,Account);
        AppFlow(accno,lib,Account[accno],counterdata[accno]);
    }
    else
    {
        checklogin:
        DecoyForLogin=login(Account);

        if(DecoyForLogin>0)
        {
            AppFlow(DecoyForLogin,lib,Account[DecoyForLogin],counterdata[DecoyForLogin]);
        }
        else if(DecoyForLogin==0){
            cout<<"\nWrong username or password, please try again.\n";goto checklogin;
        }
        else if(DecoyForLogin==-1) return;
    }
}

void InitLib(UsernameandPass Account[],book lib[]){
    string Line1="Initialization--------------------------------------------------";
    string Line2="files:{ libraryv8.cpp(main) - applibduc.h(standard libs.)";
    string Line3="account.h(account process) - appflowv8.h(library process)";
    string Line4="libapplicationsv8.h(library apps.) }";
    string Line5="ducng || v8_Dec_20_2021";

    int i;

    //for (use for to determine storage of books)
    for(i=1;i<=100;i++)
    {
        if(Account[i].username!=" ")
        {
            i--;
            break;
        }
    }
    string Line6="Storage: "+to_string(10001)+" (books) || Maximum account: "+to_string(i);
    string Line7="End initialization";
    
    using namespace std::this_thread;
    using namespace std::chrono;

    std::cout<<endl<<Line1;sleep_for(milliseconds(1000));
    std::cout<<endl<<Line2<<" ";sleep_for(milliseconds(450));for(int i=0;i<64;i++){if(i>Line2.length())std::cout<<".";}
    std::cout<<endl<<Line3<<" ";sleep_for(milliseconds(450));for(int i=0;i<64;i++){if(i>Line3.length())std::cout<<".";}
    std::cout<<endl<<Line4<<" ";sleep_for(milliseconds(750));for(int i=0;i<64;i++){if(i>Line4.length())std::cout<<".";}
    std::cout<<endl<<Line5<<" ";sleep_for(milliseconds(300));for(int i=0;i<64;i++){if(i>Line5.length())std::cout<<".";}
        std::cout<<endl<<"Storage: ";
        sleep_for(milliseconds(1000));
        std::cout<<10001<<" (books) || ";
        sleep_for(milliseconds(500));
        std::cout<<"Maximum account: ";
        sleep_for(milliseconds(1000));
        std::cout<<i<<" ";
            for(int i=0;i<64;i++){if(i>Line6.length())std::cout<<".";}
    std::cout<<endl<<Line7<<" ";sleep_for(milliseconds(500));for(int i=0;i<64;i++){if(i>Line7.length())std::cout<<".";}
    std::cout<<"\n----------------------------------------------------------------";sleep_for(milliseconds(1500));

    using namespace std;
}
*/