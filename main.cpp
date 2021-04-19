#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class Profile{
    public:

        char name[30];
        char rollno[15];
        char fname[30];
        char no[15];

        void getdata(){
            textbackground(4);
            clrscr();
            gotoxy(20, 3);{
                cout << "We Welcome you to the registration process!";
            }
            gotoxy(26, 5);{
                cout << "Enter your name. ";
                gets(name);
            }
            gotoxy(26, 7);{
                cout << "Enter your roll number. ";
                cin >> rollno;
            }
            gotoxy(26, 9);{
                cout << "Enter your father's name. ";
                gets(fname);
            }
            gotoxy(26, 11);{
                cout << "Enter your contact number. ";
                gets(no);
            }
        }

        void showdata(){
            textbackground(4);
            clrscr();
            gotoxy(23, 7);{
                cout << "Name - " << name;
            }
            gotoxy(23, 9);{
                cout << "Roll no. = " << rollno;
            }
            gotoxy(23, 11);{
                cout << "Father's Name - " << fname;
            }
            gotoxy(23, 13);{
                cout << "Contact no. - " << no;
            }
            textbackground(0);
        }
};

void mainmenu();

void gotomainmenu(){
    int chu;
    gotoxy(1, 23);{
        cout << "Press 0 for main menu ";
        cin >> chu;
    }
    if(chu == 0){
        mainmenu();
    }
}

void design(){
    int a, i;
    gotoxy(1, 1);{
        for(i = 0; i < 80; i++){
            cout<<"*";
        }
    }
    gotoxy(1,24);{
        for(i=0;i<80;i++){
            cout<<"*";
        }
    }
}

void mains_rank(){
    textbackground(6);
    clrscr();
    int score1;
    clrscr();
    design();
    gotoxy(25,3);{
        cout << "MAINS RANK & COLLEGES";
    }
    gotoxy(25,5);{
        cout << "Enter your score! ";
        cin >> score1;
    }
    if( (score1 < 360) && (score1 >= 310) ){
        gotoxy(25,7);{
            cout << "AIR 0 - 100";
        }
        gotoxy(1,9);{
            cout << "Colleges available - NIT Warangal, NIT Tiruchi, NIT Karnataka, MNIT, MANIT, Malviya NIT, NIT Calicut, NIT Silchar";
        }
    }
    if( (score1 < 310) && (score1 >= 280) ){
        gotoxy(25,7);{
            cout << "AIR 100 - 500";
        }
        gotoxy(1,9);{
            cout << "Colleges available - NIT Tiruchi, NIT Karnataka, MNIT, MANIT, Malviya NIT, NIT Calicut, NIT Silchar";
        }
    }
    if( (score1 < 280) && (score1 >= 240) ){
        gotoxy(25,7);{
            cout << "AIR 500 - 1000";
        }
        gotoxy(1,9);{
            cout << "Colleges available - MNIT, MANIT, Malviya NIT, NIT Calicut, NIT Silchar";
        }
    }
    if( (score1 < 240) && (score1 > 180) ){
        gotoxy(25,7);{
            cout << "AIR 1000 - 5000";
        }
        gotoxy(1,9);{
            cout << "Colleges availabe - MNIT, MANIT, Malviya NIT, NIT Calicut, NIT Silchar";
        }
    }
    if( (score1 < 180) && (score1 > 120) ){
        gotoxy(25,7);{
            cout << "AIR 5000 and beyond";
        }
        gotoxy(1,9);{
            cout << "Colleges available - MANIT, Malviya NIT, NIT Calicut, NIT Silchar";
        }
    }
    if(score1 < 120){
        gotoxy(17,7);{
            cout << "Sorry, you did not clear the cut-off for JEE MAINS";
        }
        textbackground(0);
    }
    gotomainmenu();
}

void nits(){
    textbackground(2);
    clrscr();
    design();
    gotoxy(1,3);{
        cout << "NIT        Established   Director        Location   Campus(acres)" << "\n";
    }
    cout << "\n";
    cout << "Warangal   1959          T.S.Rao         Warangal,  256" << "\n";
    cout << "                                         Telangana" << "\n";
    cout << "\n";
    cout << "Tiruchi    1964          S.Sundaranjan   Tiruchi,   800" << "\n";
    cout << "                                         Tamil Nadu" << "\n";
    cout << "\n";
    cout << "Karnataka  1960          S.Bhatacharya   Suratkal,  295" << "\n";
    cout << "                                         Karnataka" << "\n";
    cout << "\n";
    cout << "MNNIT      1961          P.Chakrabarty   Allahabad, 222" << "\n";
    cout << "                                         U.P." << "\n";
    cout << "\n";
    cout << "MANIT      1960          Appu Kuttan     Bhopal,MP  650" << "\n";
    cout << "\n";
    cout << "Calicut    1961          S.Chakravarty   Calicut,   300" << "\n";
    cout << "                                         Kerala";
    textbackground(0);
    gotomainmenu();
}

void jee_main(){
    int cho;
    textbackground(5);
    clrscr();
    design();
    gotoxy(32, 3);{
        cout << "JEE MAINS PORTAL";
    }
    gotoxy(30,5);{
        cout << "1. JEE MAINS RANk AND COLLEGES";
    }
    gotoxy(30,6);{
        cout << "2. COLLEGES AVAILABLE";
    }
    gotoxy(30,7);{
        cout << "3. MAIN MENU";
    }
    gotoxy(22,9);{
        cout << "Please enter your choice ";
    }
    cin >> cho;
    if(cho == 1)
        mains_rank();
    else if(cho == 2)
        nits();
    else if(cho == 3)
        mainmenu();
}

void advance_rank(){
    int score2;
    textbackground(6);
    clrscr();
    design();
    gotoxy(25,3);{
        cout << "ADVANCE RANK & COLLEGES";
    }
    gotoxy(25,5);{
        cout << "Enter your score! ";
        cin>>score2;
    }
    if( (score2 < 360) && (score2 >= 310) ){
        gotoxy(25,7);{
            cout << "AIR 0 - 50";
        }
        gotoxy(1,9);{
            cout << "Colleges available -IIT Kanpur, IIT Delhi, IIT Bombay, IIT Kharagpur, IIT Roorkee, NIT Warangal, NIT Tiruchi, NIT Karnataka, MNIT, MANIT, Malviya NIT, NIT Calicut, NIT Silchar";
        }
    }
    if( (score2 < 310) && (score2 >= 280) ){
        gotoxy(25,7);{
            cout << "AIR 50 - 500";
        }
        gotoxy(1,9);{
            cout << "Colleges available -IIT Kanpur, IIT Delhi, IIT Kharagpur, IIT Roorkee, NIT Warangal, NIT Tiruchi, NIT Karnataka, MNIT, MANIT, Malviya NIT, NIT Calicut, NIT Silchar ";
        }
    }
    if( (score2 < 280) && (score2 >= 240) ){
        gotoxy(25,7);{
            cout << "AIR 500 - 3000";
        }   
        gotoxy(1,9);{
            cout << "Colleges available -IIT Kanpur, IIT Kharagpur, IIT Roorkee, NIT Warangal, NIT Tiruchi, NIT Karnataka, MNIT, MANIT, Malviya NIT, NIT Calicut, NIT Silchar ";
        }
    }
    if( (score2 < 240) && (score2 > 180) ){
        gotoxy(25,7);{
            cout << "AIR 1000 - 5000";
        }
        gotoxy(1,9);{
            cout << "Colleges availabe -IIT Kanpur, IIT Kharagpur, IIT Roorkee, NIT Warangal, NIT Tiruchi, NIT Karnataka, MNIT, MANIT, Malviya NIT, NIT Calicut, NIT Silchar ";
        }
    }
    if( (score2 < 180) && (score2 > 120) ){
        gotoxy(25,7);{
            cout << "AIR 5000 and beyond";
        }
        gotoxy(1,9);{
            cout << "Colleges available -IIT Kharagpur, IIT Roorkee, NIT Warangal, NIT Tiruchi, NIT Karnataka, MNIT, MANIT, Malviya NIT, NIT Calicut, NIT Silchar ";
        }
    }
    if(score2 < 120){
        gotoxy(17,7);{
            cout << "Sorry, you did not clear the cut-off for JEE ADVANCE";
        }
        textbackground(0);
    }
    gotomainmenu();
}

void iits(){
    textbackground(2);
    clrscr();
    design();
    gotoxy(1,3);{
        cout << "IIT        Established   Director        Location   Campus(acres)" << "\n";
    }
    cout << "\n";
    cout << "Kanpur     1959          D.Manna         Kanpur     1055" << "\n";
    cout << "\n";
    cout << "Delhi      1961          R.K.Shevgaonkar New Delhi  325" << "\n";
    cout << "\n";
    cout << "Bombay     1958          D.V.Khakhar     Mumbai     550" << "\n";
    cout << "\n";
    cout << "Kharagpur  1951          P.P.CHakrabprty Kharagpur  2100" << "\n";
    cout << "\n";
    cout << "Roorkee    1847          Pradipt Banerji Roorkee    25";
    gotomainmenu();
}

void jee_advanced(){
    int chi;
    textbackground(5);
    clrscr();
    design();
    gotoxy(32,3);{
        cout << "JEE ADVANCE PORTAL";
    }
    gotoxy(30,5);{
        cout << "1. JEE ADVANCE RANk AND COLLEGES";
    }
    gotoxy(30,6);{
        cout << "2. COLLEGES AVAILABLE";
    }
    gotoxy(30,7);{
        cout << "3. MAIN MENU";
    }
    gotoxy(22,9);{
    cout << "Please enter your choice ";
    }
    cin >> chi;
    if(chi == 1)
        advance_rank();
    else if(chi == 2)
        iits();
    else if(chi == 3)
        mainmenu();
}

void college_overview(){
    clrscr();
    design();
    int a;
    gotoxy(30,12);{
        cout << "Press 1 for IITs";
    }
    gotoxy(30,13);{
        cout << "Press 2 for NITs ";
    }
    cin >> a;
    if(a == 1)
        iits();
    else if(a == 2)
        nits();
}

void profile(){
    textbackground(1);
    clrscr();
    design();
    char name[30];
    char rollno[15];
    char fname[30];
    char no[15];
    char roll1[15];
    Profile P;
    gotoxy(25,3);{
        cout<<"Enter your roll no.";
        cin>>roll1;
    }
    ifstream in("Records.dat", ios::in|ios::binary);
    while( !in.eof() ){
        in.read((char*)&P, sizeof(P));
        if( strcmp(P.rollno, roll1) == 0)
            P.showdata();
    }
    in.close();
    gotomainmenu();
    textbackground(0);
    getch();
}

void mainmenu(){
    int choice;
    clrscr();
    design();
    gotoxy(35,3);{
        cout << "MAIN MENU";
    }
    gotoxy(30,5);{
        cout << "1. JEE MAINS portal";
    }
    gotoxy(30,6);{
        cout << "2. JEE ADVANCE portal";
    }
    gotoxy(30,7);{
        cout << "3. Colleges Overview";
    }
    gotoxy(30,8);{
        cout << "4. Veiw your profile";
    }
    gotoxy(30,9);{
        cout << "5. Exit";
    }
    gotoxy(28,12);{
        cout << "Please enter your choice ";
    }
    cin >> choice;
    if(choice == 1)
    jee_main();
    if(choice == 2)
    jee_advanced();
    if(choice == 3)
    college_overview();
    if(choice == 4)
    profile();
    if(choice == 5){
    }
    getch();
}

void registration(){
    clrscr();
    design();
    char name[30];
    char rollno[15];
    char fname[30];
    char no[15];
    gotoxy(20,3);{
        cout << "We Welcome you to the registration process!";
    }
    Profile P;
    ofstream out("Records.dat", ios::app|ios::binary);
    P.getdata();
    out.write((char*)&P, sizeof(P));
    out.close();
    clrscr();
    design();
    gotoxy(2,12);{
        cout << "Congratulations! You've successfully completed the registration process";
    }
    mainmenu();
    getch();
}

void intro(){
    clrscr();
    design();
    textcolor(2);
    textbackground(4);
    clrscr();
    gotoxy(20,8);{
        cout << "THIS PROJET IS MADE BY SATYAANSH";
    }
    gotoxy(20,12);{
        cout << "CLASS XII";
    }
    gotoxy(20,16);{
        cout << "THE PILLARS PUBLIC SCHOOL";
    }
    getch();
    textcolor(0);
    textbackground(0);
}

void welcome(){
    textcolor(1);
    textbackground(3);
    clrscr();
    design();
    gotoxy(22,12);{
        cout << "Welcome to the very first of its kind";
    }
    gotoxy(24,14);{
        cout << "THE IIT COUNSELLING PROGRAM";
    }
    textcolor(0);
    textbackground(0);
    getch();
}
void start(){
    int ch;
    textbackground(5);
    clrscr();
    design();
    gotoxy(34,3);{
        cout << "WELCOME! :) ";
    }
    gotoxy(22,5);{
        cout << "Press 1 to start the registration process";
    }
    gotoxy(22,6);{
        cout << "Press 2 if already registered";
    }
    gotoxy(10,20);{
        cout << "Please enter your choice ";
        cin >> ch;
    }
    if(ch == 2){
        mainmenu();
    }
    else if(ch==1){
        registration();
    }
    getch();
    textbackground(0);
}

void main(){
    welcome();
    intro();
    start();
    getch();
}
