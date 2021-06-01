#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define s(x) x.size()
#define endl '\n'
#define vl vector<ll>
#define all(x) (x).begin(),(x).end()
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
const ll MOD = 1e9 + 7;
string A="YES";
string B="NO";

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|========================= CRIC - IN =======================|"<<endl;
    cout<<"|                                                           |"<<endl;
    cout<<"|             WELCOME TO VIRTUAL CRICKET GAME               |"<<endl;
    cout<<"|                                                           |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;

    int i=3;
    while(i-->0)
    {
        cout<<endl;
    }

    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"|=========================== INSTRUCTIONS ===========================|"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"| 1. CREATE 2 TEAMS (TEAM-A AND TEAM-B WITH 5 PLAYERS EACH) FROM A   |"<<endl;
    cout<<"|    GIVEN POOL OF 11 PLAYERS.                                       |"<<endl;
    cout<<"| 2. LEAD THE TOSS AND DECIDE BOWLING OR BATTING.                    |"<<endl;
    cout<<"| 3. SELECT WHICH PLAYER SHOULD BAT AND BOWL FIRST                   |"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;

    i=3;
    while(i-->0)
    {
        cout<<endl;
    }

    cout<<"------------------------------------------------------------"<<endl;
    cout<<"|===================== POOL OF PLAYERS ====================|"<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    std::vector<string> v{"VIRAT","ROHIT","ROBIN","DHONI","ISHAN","RAHUL","SIRAJ","YADAV","GUPTA","KUMAR","SHAMI"};
    for(int i=0;i<11;i++)
    {
        cout<<"                         "<<i+1<<". "<<v[i]<<"                  "<<endl;
    }

    i=3;
    while(i-->0)
    {
        cout<<endl;
    }

    cout<<"------------------------------------------------------------"<<endl;
    cout<<"|================ CREATE TEAM A and TEAM B ================|"<<endl;
    cout<<"------------------------------------------------------------"<<endl;

    int count = 1;
    int player_in_1_team = 5;
    std::vector<int> v1(11,0);
    std::vector<string> v2,v3;
    int f,g;
    while(count != (player_in_1_team+1))
    {
        f=1;
        while(f==1)
        {
            int player_serial;
            cin>>player_serial;
            cout<<"SELECT PLAYER "<<count<<" OF TEAM A - "<<player_serial;
            cout<<endl;
            if(v1[player_serial-1]==1 || player_serial<1 || player_serial>11)
            {
                cout<<"Player is not available or already take"<<endl;
            }
            else
            {
                f=0;
                v2.pb(v[player_serial-1]);
                v1[player_serial-1]=1;

            }
        }
        g=1;
        while(g==1)
        {
            int player_serial1;
            cin>>player_serial1;
            cout<<"SELECT PLAYER "<<count<<" OF TEAM B - "<<player_serial1;
            cout<<endl;
            if(v1[player_serial1-1]==1 || player_serial1<1 || player_serial1>11)
            {
                cout<<"Player is not available or already taken"<<endl;
            }
            else
            {
                g=0;
                v3.pb(v[player_serial1-1]);
                v1[player_serial1-1]=1;
            }
        }
        count++;
    }

    i=3;
    while(i-->0)
    {
        cout<<endl;
    }

    cout<<"----------------------                   ----------------------"<<endl;
    cout<<"|====== TEAM A ======|                   |====== TEAM B ======|"<<endl;
    cout<<"----------------------                   ----------------------"<<endl;
    for(int i=0;i<player_in_1_team;i++)
    {
        cout<<"|      "<<i+1<<" "<<setw(5)<<v2[i]<<"       |                   |      "<<i+1<<setw(1)<<" "<<v3[i]<<"       |"<<endl;
        
    }
    cout<<"----------------------                   ----------------------"<<endl;

    i=3;
    while(i-->0)
    {
        cout<<endl;
    }

    cout<<"------------------------------------------------"<<endl;
    cout<<"|================== LET'S TOSS ================|"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"TOSSING THE COIN..."<<endl;
    cout<<endl;
    count = 1;
    int tosses = 1;
    while (count <= tosses)   //RUN LOOP WHILE LESS THAN TOSSES INPUTED
    {
        srand(time(0));
        if (rand()%2 == 0)
        {
            f=1;
            cout << "TEAM-A WON THE TOSS!";
        }
        else
        {
            f=2;
            cout << "TEAM-B WON THE TOSS!";
        }
        count++;        
    }
    cout<<endl;
    cout<<endl;
    cout<<"ENTER 1 TO BAT OR 2 TO BOWL FIRST..."<<endl;
    cout<<endl;
    cout<<"1. BAT"<<endl;
    cout<<"2. BOWl"<<endl;
    int choice;
    cin>>choice;
    cout<<endl;
    if(f==1)
    {
        int score1;
        map<string,ll>m,m1,m2,m3;
        int score=0,wicket=0,run;
        if(choice==1)
        {
            cout<<"TEAM - A has won the toss and elected to bat FIRST"<<endl;
            cout<<endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout<<"|          TEAM A SELECT PLAYER TO BAT FIRST          |"<<endl;
            cout<<"-------------------------------------------------------"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<"                 "<<i+1<<". "<<v2[i]<<"                    "<<endl;
            }
            int p1;
            cin>>p1;
            cout<<"-------------------------------------------------------"<<endl;
            cout<<"|          TEAM B SELECT PLAYER TO Bowl FIRST         |"<<endl;
            cout<<"-------------------------------------------------------"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<"                 "<<i+1<<". "<<v3[i]<<"                    "<<endl;
            }
            int p2;
            cin>>p2;
            cout<<"TEAM A - "<<v2[p1-1]<<" is batting "<<endl;
            cout<<"TEAM B - "<<v3[p2-1]<<" is bowling "<<endl;
            int bowl = 0;
            m3[v3[p2-1]]=0;
            //initalscorecard
            while(bowl<7)
            {
                cout<<"-------------------------------------------------------"<<endl;
                cout<<"|  TEAM A "<<score<<"-"<<wicket<<" "<<"("<<bowl<<")"<<" "<<v2[p1-1]<<" "<<m[v2[p1-1]]<<" "<<m1[v2[p1-1]]<<" "<<v3[p2-1]<<" "<<m2[v3[p2-1]]<<" "<<m3[v3[p2-1]]<<"                 |"<<endl;
                cout<<"-------------------------------------------------------"<<endl;
                cout<<endl;
                if(bowl+1!=7){
                                cout<<"PRESS ENTER TO BOWL..."<<endl;
                                cout<<"BOWLING..."<<endl;}
                cout<<endl;
                if(bowl+1!=7){
                    cin>>run;
                    if(run!=-1)
                    {
                        score+=run;
                        m[v2[p1-1]]+=run;
                        m1[v2[p1-1]]++;
                        m2[v3[p2-1]]+=run;
                    }
                    else
                    {
                        cout<<endl;
                        m1[v2[p1-1]]++;
                        cout<<v2[p1-1]<<" is out!!!"<<endl;
                        wicket++;
                        if(bowl+1!=6){
                            cin>>p1;
                            cout<<"NEXT player to bat is "<<v2[p1-1]<<endl;
                        }
                        m3[v3[p2-1]]++;
                    }
                }
                bowl++;
            }
            score1 = score;
            cout<<"1st inning is over and 2nd innings is going to start"<<endl;
            cout<<"TEAM A - "<<score1<<"/"<<wicket<<endl;
            // score1 = score;
            cout<<endl;
            
            cout<<"-------------------------------------------------------"<<endl;
            cout<<"|          TEAM B SELECT PLAYER TO BAT FIRST          |"<<endl;
            cout<<"-------------------------------------------------------"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<"                 "<<i+1<<". "<<v3[i]<<"                    "<<endl;
            }
            cin>>p1;
            cout<<"-------------------------------------------------------"<<endl;
            cout<<"|          TEAM A SELECT PLAYER TO Bowl FIRST         |"<<endl;
            cout<<"-------------------------------------------------------"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<"                 "<<i+1<<". "<<v2[i]<<"                    "<<endl;
            }
            cin>>p2;
            cout<<"TEAM B - "<<v3[p1-1]<<" is batting "<<endl;
            cout<<"TEAM B - "<<v2[p2-1]<<" is bowling "<<endl;
            bowl = 0;
            m3[v2[p2-1]]=0;
            score=0,wicket=0;
            while(bowl<7)
            {
                cout<<"-------------------------------------------------------"<<endl;
                cout<<"|  TEAM A "<<score<<"-"<<wicket<<" "<<"("<<bowl<<")"<<" "<<v3[p1-1]<<" "<<m[v3[p1-1]]<<" "<<m1[v3[p1-1]]<<" "<<v2[p2-1]<<" "<<m2[v2[p2-1]]<<" "<<m3[v2[p2-1]]<<"                 |"<<endl;
                cout<<"-------------------------------------------------------"<<endl;
                cout<<endl;
                if(bowl+1!=7){
                                cout<<"PRESS ENTER TO BOWL..."<<endl;
                                cout<<"BOWLING..."<<endl;}
                cout<<endl;
                if(bowl + 1!=7)
                {
                    cin>>run;
                    if(run!=-1)
                    {
                        score+=run;
                        m[v3[p1-1]]+=run;
                        m1[v3[p1-1]]++;
                        m2[v2[p2-1]]+=run;
                    }
                    else
                    {
                        cout<<v3[p1-1]<<" is out!!!"<<endl;
                        m1[v3[p1-1]]++;
                        wicket++;
                        // cout<<endl;
                        if(bowl+1!=6){
                            cin>>p1;
                            cout<<"NEXT player to bat is "<<v3[p1-1]<<endl;
                        }
                        m3[v2[p2-1]]++;
                    }
                }
                bowl++;
            }
            cout<<"2nd innings over"<<endl;
            cout<<"TEAM B - "<<score<<"/"<<wicket<<endl;
            if(score1>score)
            {
                cout<<"TEAM A wins";
            }
            else{
                cout<<"TEAM B wins";
            }
            cout<<endl;
            cout<<endl;
             cout<<"STATS FOR TEAM A"<<endl;
             cout<<endl;
            cout<<"sl.no      "<<"PLAYER        "<<"BATTING    "<<"BOWLING      "<<"wicket"<<endl;
            count=1;
    
            for(auto i : v2)
            {
                cout<<count<<"           "<<i<<"           "<<m[i]<<"("<<m1[i]<<")"<<"        "<<m2[i]<<"          "<<m3[i]<<endl;
                count++;
            }
            cout<<endl;
            cout<<endl;
             cout<<"STATS FOR TEAM B"<<endl;
             cout<<endl;
            cout<<"sl.no      "<<"PLAYER        "<<"BATTING    "<<"BOWLING      "<<"wicket"<<endl;
            count=1;
    
            for(auto i : v3)
            {
                cout<<count<<"           "<<i<<"           "<<m[i]<<"("<<m1[i]<<")"<<"        "<<m2[i]<<"          "<<m3[i]<<endl;
                count++;
            }
        }
    }
    return 0;
}