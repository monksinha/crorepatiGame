#include"graphics.h"
#include"dos.h"
#include "stdlib.h"
#include "iostream.h"
#include "time.h"
#include"conio.h"


class set
{
public:
char u;int i;int z;char l;int b;long int t;int a;int x;int c;
char k;int v;int m; char w;int h[17];char q;
ins()
{
b=0;c=0;x=0;
}
void get()
{
v=0;
if(b==0)
{
goto k1;
}
if(b==1)
{
goto kk;
}
if(b==5)
{
goto ram1;
}
k1:
textcolor(14);
cout<<"\n\n\n\n\n\n\n\t\t\t  ::Utkarsh Sinha Productions Presents::";
cout<<"\n\n\t\t\t\t :: CROREPATI ::";
delay(5000);
clrscr();
cout<<"\n\n\n\n\n\n\n\t\t\t::Terms And Conditions Apply::";
delay(5000);
kk:
clrscr();
cout<<"\n\n\n\n\t\t\t     :: INSTRUCTIONS ::";
cout<<"\n\n\t\t ::Use Only Num Keys For Options( 1 2 3 4 )::";
cout<<"\n\n\t\t\t::You Have Only Two Life Lines::";
cout<<"\n\n\t\t     :: A. Fifty-Fifty   B. Audience Vote ::";
cout<<"\n\n\t\t    ::Firstly Push ' Y ' Key For Life Line::";
cout<<"\n\n\t\t\t\t  :: THEN ::";
cout<<"\n\n\t\t\t::Use Keys A OR B For Life Lines::";
cout<<"\n\n\t\t\t    ::Don't Use Other Keys::";
cout<<"\n\n\t\t     ::Crorepati Game From Utkarsh Sinha Production::";
cout<<"\n\n\n\n\n\t\t\t\t\tDeveloped By->!! Utkarsh Sinha !!";
delay(10000);
clrscr();
cout<<"\n\n\n\n\n\n\t\t\t::::::Audience Vote May Be Wrong::::::";
cout<<"\n\n\t\t\t\t::So Play Carefully::";
delay(5000);
ram1:
if(z==1)
{
goto ram;
}
else
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t         :: WAIT ::";
delay(200);
if(v>=2)
{
v=v-1;
}
else
{
v=0;
}}
ram:
{
srand((unsigned) time(&t));
a=rand() % 50;
v=v+1;
for(m=2;m<=v;m++)
{
if(h[m]==a)
goto ram1;
}
h[v]=a;
if(v==16)
{
clrscr();
delay(2000);
cout<<"\n\n\n\n\n\n\n\n\t\t\t\t::Congratulations::\n";
cout<<"\n\t\t\t ::You Are The Winner Of This Game::";
delay(5000);
show2(); 
}}
if(a==0)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Where Barmuda Triangle Is Suitated ?\n";
cout<<"1.Near America\t\t";
cout<<"2.Near WestIndies\n";
cout<<"3.Near Africa\t\t";
cout<<"4.Near Australia\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p1;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{ 
c1:if(c==1&&x==1)
{life1(); goto p1;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c2;}
x=1;
cout<<"\t\t2.Near WestIndies";
cout<<"\n\n\t\t3.Near Africa";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c2;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c2:if(c==1&&x==1)
{life1();goto p1;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c1;}c=1;
cout<<"\n\n\t\t1.Near America     ( 24% )";
cout<<"\n\n\t\t2.Near WestIndies ( 51% )";
cout<<"\n\n\t\t3.Near Africa         ( 20% )";
cout<<"\n\n\t\t4.Near Australia     ( 10% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c1;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p1:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Near WestIndies";
delay(2000);
show2();
}
if(a==1)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"What Is The Name Of The Father of Computer ?\n";
cout<<"1.John Abhrahum\t\t\t";
cout<<"2.Charles Babage\n";
cout<<"3.Steve Austin\t\t\t";
cout<<"4.George Peeterson\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p2;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c3:if(c==1&&x==1)
{life1(); goto p2;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c4;}
x=1;
cout<<"\t\t2.Charles Babage";
cout<<"\n\n\t\t4.George Peeterson";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y') 
{
goto c4;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c4:if(c==1&&x==1)
{life1();goto p2;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c3;}c=1;
cout<<"\n\n\t\t1.John Abhrahum  ( 24% )";
cout<<"\n\n\t\t2.Charles Babage ( 51% )";
cout<<"\n\n\t\t3.Steve Austin   ( 20% )";
cout<<"\n\n\t\t4.George Peeterson( 10% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c3;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p2:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram; 
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Charles Babage";
delay(2000);
show2();
}
if(a==2)
{
clrscr();
textcolor(v);
show();
show1();
gotoxy(1,17);
cout<<"How Many Players Play In Cricket Team ?\n";
cout<<"1.17\t\t\t";
cout<<"2.09\n";
cout<<"3.13\t\t\t";
cout<<"4.11\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p3;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c5:if(c==1&&x==1)
{life1(); goto p3;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c6;}
x=1;
cout<<"\t\t1.17";
cout<<"\n\n\t\t4.11";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c6;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c6:if(c==1&&x==1)
{life1();goto p3;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c5;}c=1;
cout<<"\n\n\t\t1.17 ( 0% )";
cout<<"\n\n\t\t2.09 ( 0% )";
cout<<"\n\n\t\t3.13 ( 0% )";
cout<<"\n\n\t\t4.11 ( 100% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c5;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p3:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.11";
delay(2000);
show2();
}
if(a==3)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"In Hindi Cinema,Who Is Famous By The Name 'DADA MUNI' ?\n";
cout<<"1.Balraj Sahini\t\t\t";
cout<<"2.Prithvi Raj Kapoor\n";
cout<<"3.Utpal Dutt\t\t\t";
cout<<"4.Ashok Kumar\n"; 
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p4;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c7:if(c==1&&x==1)
{life1(); goto p4;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c8;} x=1;
cout<<"\t\t2.Prithvi Raj Kapoor";
cout<<"\n\n\t\t4.Ashok Kumar";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c8;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c8:if(c==1&&x==1)
{life1();goto p4;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c7;}c=1;
cout<<"\n\n\t\t1.Balraj Sahini      ( 02% )";
cout<<"\n\n\t\t2.Prithvi Raj Kapoor( 30% )";
cout<<"\n\n\t\t3.Utpal Dutt         ( 18% )";
cout<<"\n\n\t\t4.Ashok Kumar        ( 50% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c7;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p4:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.Ashok Kumar";
delay(2000);
show2();
}
if(a==4)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Blood Group Is Universal Recipient ?\n";
cout<<"1.A\t\t\t";
cout<<"2.AB\n";
cout<<"3.B\t\t\t";
cout<<"4.O\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p5;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c9:if(c==1&&x==1)
{life1(); goto p5;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c10;}  x=1;
cout<<"\t\t2.AB";
cout<<"\n\n\t\t3.B";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c10;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c10:if(c==1&&x==1)
{life1();goto p5;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c9;}c=1;
cout<<"\n\n\t\t1.A ( 25% )";
cout<<"\n\n\t\t2.AB( 65% )";
cout<<"\n\n\t\t3.B ( 09% )";
cout<<"\n\n\t\t4.O ( 01% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c9;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p5:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.AB";
delay(2000);
show2();
}
if(a==5)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"What Is The Unit Of Measurment Of Distance Of A Star ?\n";
cout<<"1.Coulomb\t\t\t";
cout<<"2.Light Year\n";
cout<<"3.Nautical Mile\t\t\t";
cout<<"4.KiloMeter\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1)
{life1();goto p6;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c11:if(c==1&&x==1)
{life1(); goto p6;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c12;}  x=1;
cout<<"\t\t2.Light Year";
cout<<"\n\n\t\t3.Nautical Mile";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c12;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c12:if(c==1&&x==1)
{life1();goto p6;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c11;} x=1;
cout<<"\n\n\t\t1.Coulomb       ( 25% )";
cout<<"\n\n\t\t2.Light Year    ( 51% )";
cout<<"\n\n\t\t3.Nautical Mile ( 19% )";
cout<<"\n\n\t\t4.KiloMeter     ( 05% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c11;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p6:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Light Year";
delay(2000);
show2();
}
if(a==6)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Recently,Which Is The Most PowerFull Business Group Of India ?\n";
cout<<"1.An Honour Of AMBANI Group\t\t";
cout<<"2.An Honour Of TATA Group\n";
cout<<"3.An Honour Of BIRLA Group\t\t";
cout<<"4.An Honour Of BHATIA Group\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p7;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c13:if(c==1&&x==1)
{life1(); goto p7;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c14;}  x=1;
cout<<"\t\t1.An Honour Of AMBANI Group";
cout<<"\n\n\t\t3.An Honour Of BIRLA Group";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c14;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c14:if(c==1&&x==1)
{life1();goto p7;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c13;}c=1;
cout<<"\n\n\t\t1.An Honour Of AMBANI Group ( 53% )";
cout<<"\n\n\t\t2.An Honour Of TATA Group   ( 21% )";
cout<<"\n\n\t\t3.An Honour Of BIRLA Group  ( 21% )";
cout<<"\n\n\t\t4.An Honour Of BHATIA Group ( 05% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c13;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p7:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.An Honour Of AMBANI Group";
delay(2000);
show2();
}
if(a==7)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Currency Notes Are Issued By The 'RESERVE BANK OF INDIA' ?\n";
cout<<"1.All\t\t\t";
cout<<"2.Rupee Hundred And Above\n";
cout<<"3.Rupee Ten And Above\t";
cout<<"4.All except Rupee One\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p8;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c15:if(c==1&&x==1)
{life1(); goto p8;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c16;}   x=1;
cout<<"\t\t3.Rupee Ten And Above";
cout<<"\n\n\t\t4.All except Rupee One";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c16;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c16:if(c==1&&x==1)
{life1();goto p8;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c15;}c=1;
cout<<"\n\n\t\t1.All                     ( 05% )";
cout<<"\n\n\t\t2.Rupee Hundred And Above ( 01% )";
cout<<"\n\n\t\t3.Rupee Ten And Above     ( 21% )";
cout<<"\n\n\t\t4.All except Rupee One    ( 73% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c15;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p8:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.All except Rupee One";
delay(2000);
show2();
}
if(a==8)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Is The Capital Of 'GOA' ?\n";
cout<<"1.Gandhi Nagar\t\t\t";
cout<<"2.Patna\n";
cout<<"3.Pundzi\t\t\t";
cout<<"4.Ranchi\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p9;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c17:if(c==1&&x==1)
{life1(); goto p9;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c18;}    x=1;
cout<<"\t\t1.Gandhi Nagar";
cout<<"\n\n\t\t3.Pundzi";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c18;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c18:if(c==1&&x==1)
{life1();goto p9;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c17;}c=1;
cout<<"\n\n\t\t1.Gandhi Nagar ( 13% )";
cout<<"\n\n\t\t2.Patna        ( 21% )";
cout<<"\n\n\t\t3.Pundzi       ( 51% )";
cout<<"\n\n\t\t4.Ranchi       ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c17;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____"; 
cin>>i;
}
p9:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.Pundzi";
delay(2000);
show2();
}
if(a==9)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Is The Birth Date Of 'TIPU SULTAN' ?\n";
cout<<"1.20th September\t\t\t";
cout<<"2.20th Octomber\n";
cout<<"3.20th November\t\t\t\t";
cout<<"4.20th December\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p10;
}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c19:if(c==1&&x==1)
{life1(); goto p10;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c20;}  x=1;
cout<<"\t\t1.20th September";
cout<<"\n\n\t\t3.20th November";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c20;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c20:if(c==1&&x==1)
{life1();goto p10;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c19;}c=1;
cout<<"\n\n\t\t1.20th September ( 13% )";
cout<<"\n\n\t\t2.20th Octomber  ( 21% )";
cout<<"\n\n\t\t3.20th November  ( 51% )";
cout<<"\n\n\t\t4.20th December  ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c19;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p10:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 20th November";
delay(2000);
show2();
}
if(a==10)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Is The Indipendance Date Of 'SWITZERLAND' ?\n";
cout<<"1.1st August\t\t\t";
cout<<"2.20th Octomber\n";
cout<<"3.28th July\t\t\t";
cout<<"4.16th September\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p11;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c21:if(c==1&&x==1)
{life1(); goto p11;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c22;}      x=1;
cout<<"\t\t3.28th July";
cout<<"\n\n\t\t4.16th September";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c22;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c22:if(c==1&&x==1)
{life1();goto p11;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c21;}c=1;
cout<<"\n\n\t\t1.1st August     ( 43% )";
cout<<"\n\n\t\t2.20th Octomber  ( 21% )";
cout<<"\n\n\t\t3.28th July      ( 22% )";
cout<<"\n\n\t\t4.16th September ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c21;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p11:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 28th July  ";
delay(2000);
show2();
}
if(a==11)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Who Was The Father Of This Title'KARO YA MARO' ?\n";
cout<<"1.Mahatma Gandhi\t\t\t";
cout<<"2.Subhash Chandra Bosh\n";
cout<<"3.Chandera Shekar Aajad\t\t\t";
cout<<"4.Pt. Jabahar Lal Nehru\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p12;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c23:if(c==1&&x==1)
{life1(); goto p12;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c24;} x=1;
cout<<"\t\t1.Mahatma Gandhi";
cout<<"\n\n\t\t4.Pt. Jabahar Lal Nehru";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c24;
} 
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c24:if(c==1&&x==1)
{life1();goto p12;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c23;}c=1;
cout<<"\n\n\t\t1.Mahatma Gandhi        ( 43% )";
cout<<"\n\n\t\t2.Subhash Chandra Bosh  ( 21% )";
cout<<"\n\n\t\t3.Chandera Shekar Aajad ( 22% )";
cout<<"\n\n\t\t4.Pt. Jabahar Lal Nehru ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c23;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p12:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.Mahatma Gandhi   ";
delay(2000);
show2();
}
if(a==12)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Who Is The Father Of This Program ?\n";
cout<<"1.Amit Raj\t\t\t";
cout<<"2.Kumar Gaurav Jain\n";
cout<<"3.Imran Khan\t\t\t";
cout<<"4.Samir Bhatia\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p13;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c25:if(c==1&&x==1)
{life1(); goto p13;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c26;}  x=1;
cout<<"\t\t2.Kumar Gaurav Jain";
cout<<"\n\n\t\t4.Samir Bhatia";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c26;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c26:if(c==1&&x==1)
{life1();goto p13;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c25;}c=1;
cout<<"\n\n\t\t1.Amit Raj           ( 03% )";
cout<<"\n\n\t\t2.Kumar Gaurva Jain  ( 81% )";
cout<<"\n\n\t\t3.Imran Khan         ( 01% )";
cout<<"\n\n\t\t4.Samir Bhatia       ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c26;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p13:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Kumar Gaurav Jain";
delay(2000);
show2();
}
if(a==13)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Who Made 'RED FORT' ?\n";
cout<<"1.Great Akbar\t\t\t";
cout<<"2.Abul Fazal\n";
cout<<"3.Sahjada Saleem\t\t";
cout<<"4.Meer Kasim\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p14;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c27:if(c==1&&x==1)
{life1(); goto p14;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c28;}   x=1;
cout<<"\t\t1.Great Akbar";
cout<<"\n\n\t\t3.Sahjada Saleem";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c28;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c28:if(c==1&&x==1)
{life1();goto p14;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c27;}c=1;
cout<<"\n\n\t\t1.Great Akbar	( 100% )";
cout<<"\n\n\t\t2.Abul Fazal     ( 00% )";
cout<<"\n\n\t\t3.Sahjada Saleem ( 00% )";
cout<<"\n\n\t\t4.Meer Kasim     ( 00% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c27;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p14:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.Great Akbar";
delay(2000);
show2();
}
if(a==14)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"How Many Types Of 'COMPUTER NETWORK' ?\n";
cout<<"1.5\t\t\t";
cout<<"2.4\n";
cout<<"3.1\t\t\t";
cout<<"4.3\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p15;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c29:if(c==1&&x==1)
{life1(); goto p15;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c30;}  x=1;
cout<<"\t\t2.  4";
cout<<"\n\n\t\t4.  3";
cout<<"\n\n\t\tEnter Your Choice _____";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c30;
}
else
{
cin>>i;
}}
else if(q=='b'||q=='B')
{
c30:if(c==1&&x==1)
{life1();goto p15;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c29;}c=1;
cout<<"\n\n\t\t1.5 ( 10% )";
cout<<"\n\n\t\t2.4 ( 45% )";
cout<<"\n\n\t\t3.1 ( 00% )";
cout<<"\n\n\t\t4.3 ( 45% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c29;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p15:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4. 3";
delay(2000);
show2();
}
if(a==15)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Who Was The Chief Minister Of M.P. In OCTOMBER 2005 ?\n";
cout<<"1.Uma Bharti\t\t\t";
cout<<"2.Shiv Raj Singh\n";
cout<<"3.Babulal Gaur\t\t\t";
cout<<"4.Arun Jaitly\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p16;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c31:if(c==1&&x==1)
{life1(); goto p16;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c32;}   x=1;
cout<<"\t\t2.Shiv Raj Singh";
cout<<"\n\n\t\t3.Babulal Gaur";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c32;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c32:if(c==1&&x==1)
{life1();goto p16;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c31;}c=1;
cout<<"\n\n\t\t1.Uma Bharti     ( 15% )";
cout<<"\n\n\t\t2.Shiv Raj Singh ( 25% )";
cout<<"\n\n\t\t3.Babulal Gaur   ( 45% )";
cout<<"\n\n\t\t4.Arun Jaitly    ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c31;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p16:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000); 
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.Babulal Gaur";
delay(2000);
show2();
}
if(a==16)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Best Film Of The Year Awaskar Award 2005 Went To_______\n";
cout<<"1.The Abiator\t\t\t";
cout<<"2.Being Julia\n";
cout<<"3.Millon Dollar Baby\t\t";
cout<<"4.Ray\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p17;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c33:if(c==1&&x==1)
{life1();goto p17;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c34;}    x=1;
cout<<"\t\t3.Millon Dollar Baby";
cout<<"\n\n\t\t4.Ray";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c34;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c34:if(c==1&&x==1)
{life1();goto p17;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c33;}c=1;
cout<<"\n\n\t\t1.The Abiator        ( 15% )";
cout<<"\n\n\t\t2.Being Julia        ( 45% )";
cout<<"\n\n\t\t3.Millon Dollar Baby ( 25% )";
cout<<"\n\n\t\t4.Ray                ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c33;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p17:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.Millon Dollar Baby";
delay(2000);
show2();
}
if(a==17)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"What Is The New Name Of 'KAPART'____ ?\n";
cout<<"1.Ganga\t\t\t";
cout<<"2.Mandbi\n";
cout<<"3.Maitry\t\t";
cout<<"4.Gangotri\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p18;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c35:if(c==1&&x==1)
{life1();goto p18;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c36;}     x=1;
cout<<"\t\t1.Ganga";
cout<<"\n\n\t\t4.Gangotri";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c36;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c36:if(c==1&&x==1)
{life1();goto p18;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c35;}c=1;
cout<<"\n\n\t\t1.Ganga    ( 15% )";
cout<<"\n\n\t\t2.Mandbi	  ( 45% )";
cout<<"\n\n\t\t3.Maitry   ( 25% )";
cout<<"\n\n\t\t4.Gangotri ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c35;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p18:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.Gangotri";
delay(2000);
show2();
}
if(a==18)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"'KONAIROU HAMPI' Is Related With______\n";
cout<<"1.Games\t\t\t";
cout<<"2.Politics\n";
cout<<"3.Music\t\t\t";
cout<<"4.None\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p19;} 
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c37:if(c==1&&x==1)
{life1();goto p19;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c38;} x=1;
cout<<"\t\t1.Games";
cout<<"\n\n\t\t3.Music";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c38;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c38:if(c==1&&x==1)
{life1();goto p19;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c37;}c=1;
cout<<"\n\n\t\t1.Games    ( 45% )";
cout<<"\n\n\t\t2.Politics ( 40% )";
cout<<"\n\n\t\t3.Music    ( 05% )";
cout<<"\n\n\t\t4.None     ( 10% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c37;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p19:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.Games";
delay(2000);
show2();
}
if(a==19)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Who Is Miss India Universe 2005 ?\n";
cout<<"1.Niharika Sing\t\t\t";
cout<<"2.Amrita Thapar\n";
cout<<"3.Jyotica Takia\t\t\t";
cout<<"4.Riya Sen\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p20;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c39:if(c==1&&x==1)
{life1();goto p20;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c40;}   x=1;
cout<<"\t\t1.Niharika Sing";
cout<<"\n\n\t\t2.Amrita Thapar";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c40;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c40:if(c==1&&x==1)
{life1();goto p20;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c39;}c=1;
cout<<"\n\n\t\t1.Niharika Sing ( 05% )";
cout<<"\n\n\t\t2.Amrita Thapar ( 75% )";
cout<<"\n\n\t\t3.Jyotica Takia ( 10% )";
cout<<"\n\n\t\t4.Riya Sen      ( 10% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c39;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p20:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Amrita Thapar";
delay(2000);
show2();
}
if(a==20)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Is The MaanChestar City Of Past ?\n";
cout<<"1.Osaka\t\t\t";
cout<<"2.Mumbai\n";
cout<<"3.Ahamdabad\t\t";
cout<<"4.Cocchin\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p21;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c41:if(c==1&&x==1) 
{life1(); goto p21;}
if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c42;}  x=1;
cout<<"\t\t1.Osaka";
cout<<"\n\n\t\t2.Mumbai";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c42;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c42:if(c==1&&x==1)
{life1();goto p21;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c41;}c=1;
cout<<"\n\n\t\t1.Osaka     ( 35% )";
cout<<"\n\n\t\t2.Mumbai    ( 45% )";
cout<<"\n\n\t\t3.Ahamdabad ( 10% )";
cout<<"\n\n\t\t4.Cocchin   ( 10% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c41;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p21:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.Osaka";
delay(2000);
show2();
}
if(a==21)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Man Who Discovered The 'OXIZEN' ?\n";
cout<<"1.J.E.Salf\t\t\t";
cout<<"2.G.Maindal\n";
cout<<"3.P.Aherlik\t\t\t";
cout<<"4.A.Flaming\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p22;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c43:if(c==1&&x==1)
{life1();goto p22;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c44;}   x=1;
cout<<"\t\t1.J.E.Salf";
cout<<"\n\n\t\t4.A.Flaming";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c44;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c44:if(c==1&&x==1)
{life1();goto p22;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c43;}c=1;
cout<<"\n\n\t\t1.J.E.Salf  ( 23% )";
cout<<"\n\n\t\t2.G.Maindal ( 37% )";
cout<<"\n\n\t\t3.P.Aherlik ( 18% )";
cout<<"\n\n\t\t4.A.Flaming ( 22% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c43;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p22:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.A.Flaming";
delay(2000);
show2();
}
if(a==22)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Who Was The Inventioner Of T.V. ?\n";
cout<<"1.Bayard\t\t\t";
cout<<"2.Fairaday\n";
cout<<"3.Marconi\t\t\t";
cout<<"4.Addison\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p23;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c45:if(c==1&&x==1)
{life1();goto p23;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c46;}     x=1;
cout<<"\t\t1.Bayard";
cout<<"\n\n\t\t4.Addison";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c46;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c46:if(c==1&&x==1)
{life1();goto p23;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c45;}c=1;
cout<<"\n\n\t\t1.Bayard   ( 43% )";
cout<<"\n\n\t\t2.Fairaday ( 37% )";
cout<<"\n\n\t\t3.Marconi  ( 18% )";
cout<<"\n\n\t\t4.Addison  ( 02% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c45;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p23:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.Bayard";
delay(2000);
show2();
}
if(a==23)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Who Was The Inventioner Of Typewriter?\n";
cout<<"1.Secail\t\t\t";
cout<<"2.Waterman\n";
cout<<"3.Pascal\t\t\t";
cout<<"4.Solaish\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p24;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c47:if(c==1&&x==1)
{life1();goto p24;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c48;}  x=1;
cout<<"\t\t2.Waterman";
cout<<"\n\n\t\t4.Solaish";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c48;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c48:if(c==1&&x==1)
{life1();goto p24;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c47;}c=1;
cout<<"\n\n\t\t1.Secail   ( 43% )";
cout<<"\n\n\t\t2.Waterman ( 37% )";
cout<<"\n\n\t\t3.Pascal   ( 18% )";
cout<<"\n\n\t\t4.Solaish  ( 02% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c47;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p24:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.Solaish";
delay(2000);
show2();
}
if(a==24)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Invention Of 'FUNK'?\n";
cout<<"1.Vitamins\t\t\t";
cout<<"2.Harmons\n";
cout<<"3.Protines\t\t\t";
cout<<"4.Enzime\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p25;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c49:if(c==1&&x==1)
{life1();goto p25;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c50;}  x=1;
cout<<"\t\t2.Harmons";
cout<<"\n\n\t\t3.Protines";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c50;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c50:if(c==1&&x==1)
{life1();goto p25;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c49;}c=1;
cout<<"\n\n\t\t1.Vitamins  ( 29% )";
cout<<"\n\n\t\t2.Harmons   ( 39% )";
cout<<"\n\n\t\t3.Protines  ( 08% )";
cout<<"\n\n\t\t4.Enzime    ( 24% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c49;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p25:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr(); 
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Harmons ";
delay(2000);
show2();
}
if(a==25)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Where Is The 'INDIAN LAKH RESARCH INSTITUTE'?\n";
cout<<"1.New Delhi\t\t";
cout<<"2.Ranchi\n";
cout<<"3.Katak\t\t\t";
cout<<"4.Bhav Nagar\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p26;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c51:if(c==1&&x==1)
{life1();goto p26;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c52;}    x=1;
cout<<"\t\t2.Ranchi";
cout<<"\n\n\t\t3.Katak";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c52;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c52:if(c==1&&x==1)
{life1();goto p26;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c51;}c=1;
cout<<"\n\n\t\t1.New Delhi   ( 29% )";
cout<<"\n\n\t\t2.Ranchi      ( 39% )";
cout<<"\n\n\t\t3.Katak       ( 08% )";
cout<<"\n\n\t\t4.Bhav Nagar  ( 24% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c51;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p26:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Ranchi";
delay(2000);
show2();
}
if(a==26)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Hardware Used In First Generation  Computer ?\n";
cout<<"1.Transistor\t\t\t";
cout<<"2.I.C.\n";
cout<<"3.Balb\t\t\t\t";
cout<<"4.S.S.I.\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p27;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c53:if(c==1&&x==1)
{life1();goto p27;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c54;}   x=1;
cout<<"\t\t1.Transistor";
cout<<"\n\n\t\t3.Balb";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c54;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c54:if(c==1&&x==1)
{life1();goto p27;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c53;}c=1;
cout<<"\n\n\t\t1.Transistor ( 36% )";
cout<<"\n\n\t\t2.I.C.       ( 24% )";
cout<<"\n\n\t\t3.Balb       ( 18% )";
cout<<"\n\n\t\t4.S.S.I.     ( 22% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c53;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p27:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.Balb";
delay(2000);
show2();
}
if(a==27)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Computer Programming Language Developed First Time For Computer Programming ?\n";
cout<<"1.Cobol\t\t\t";
cout<<"2.Basic\n";
cout<<"3.Fortron\t\t";
cout<<"4.Pascal\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p28;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c55:if(c==1&&x==1)
{life1();goto p28;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c56;}  x=1;
cout<<"\t\t1.Cobol";
cout<<"\n\n\t\t4.Pascal";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c56;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c56:if(c==1&&x==1)
{life1();goto p28;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c55;}c=1;
cout<<"\n\n\t\t1.Cobol   ( 36% )";
cout<<"\n\n\t\t2.Basic   ( 24% )";
cout<<"\n\n\t\t3.Fortron ( 18% )";
cout<<"\n\n\t\t4.Pascal  ( 22% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c55;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p28:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.Cobol";
delay(2000);
show2();
}
if(a==28)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Where Is The Main Office Of 'ISRO' ?\n";
cout<<"1.Sydni\t\t\t";
cout<<"2.Paris\n";
cout<<"3.Banglore\t\t";
cout<<"4.Nagasaki\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p29;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c57:if(c==1&&x==1)
{life1();goto p29;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c58;}   x=1;
cout<<"\t\t3.Banglore";
cout<<"\n\n\t\t4.Nagasaki";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c58;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c58:if(c==1&&x==1)
{life1();goto p29;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c57;}c=1;
cout<<"\n\n\t\t1.Sydni    ( 36% )";
cout<<"\n\n\t\t2.Paris    ( 24% )";
cout<<"\n\n\t\t3.Banglore ( 18% )";
cout<<"\n\n\t\t4.Nagasaki ( 22% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c57;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p29:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.Banglore";
delay(2000);
show2();
}
if(a==29)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Ozone Plate Is Destroying Regularly Because Of____ ?\n";
cout<<"1.L.P.G.\t\t\t";
cout<<"2.Methain\n";
cout<<"3.NIterogen\t\t\t";
cout<<"4.C.F.C.\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p30;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c59:if(c==1&&x==1)
{life1();goto p30;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c60;}   x=1;
cout<<"\t\t2.Methain ";
cout<<"\n\n\t\t4.C.F.C.";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c60;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c60:if(c==1&&x==1)
{life1();goto p30;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c59;}c=1;
cout<<"\n\n\t\t1.L.P.G.    ( 36% )";
cout<<"\n\n\t\t2.Methain   ( 24% )";
cout<<"\n\n\t\t3.NIterogen ( 18% )";
cout<<"\n\n\t\t4.C.F.C.    ( 22% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c59;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p30:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.C.F.C.";
delay(2000);
show2();
}
if(a==30)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Is The Deepest Sea_______  ?\n";
cout<<"1.Arctik\t\t\t";
cout<<"2.Prashant\n";
cout<<"3.Atlantik\t\t\t";
cout<<"4.Hind\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p31;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c61:if(c==1&&x==1)
{life1();goto p31;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c62;}  x=1;
cout<<"\t\t2.Prashant ";
cout<<"\n\n\t\t4.Hind";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c62;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B') 
{
c62:if(c==1&&x==1)
{life1();goto p31;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c61;}c=1;
cout<<"\n\n\t\t1.Arctik    ( 26% )";
cout<<"\n\n\t\t2.Prashant  ( 34% )";
cout<<"\n\n\t\t3.Atlantik  ( 26% )";
cout<<"\n\n\t\t4.Hind      ( 14% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c61;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p31:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Prashant";
delay(2000);
show2();
}
if(a==31)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Is The Main Producer Country Of Sugar ?\n";
cout<<"1.Australia\t\t\t";
cout<<"2.India\n";
cout<<"3.Quba\t\t\t\t";
cout<<"4.Morasis\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p32;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c63:if(c==1&&x==1)
{life1();goto p32;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c64;}    x=1;
cout<<"\t\t2.India ";
cout<<"\n\n\t\t3.Quba";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c64;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c64:if(c==1&&x==1)
{life1();goto p32;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c63;}c=1;
cout<<"\n\n\t\t1.Australia  ( 18% )";
cout<<"\n\n\t\t2.India      ( 24% )";
cout<<"\n\n\t\t3.Quba       ( 56% )";
cout<<"\n\n\t\t4.Morasis    ( 02% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c63;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p32:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.Quba";
delay(2000);
show2();
}
if(a==32)
{
clrscr();
show();
show1();
gotoxy(1,17); 
cout<<"Where Is The 'HUSAIN SAGAR LAKE/MOORE' ?\n";
cout<<"1.ShriNagar\t\t\t";
cout<<"2.Banglore\n";
cout<<"3.Haidrabad\t\t\t";
cout<<"4.Ahamdabad\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p33;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c65:if(c==1&&x==1)
{life1();goto p33;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c66;}   x=1;
cout<<"\t\t1.ShriNagar ";
cout<<"\n\n\t\t3.Haidrabad   ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c66;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c66:if(c==1&&x==1)
{life1();goto p33;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c65;} c=1;
cout<<"\n\n\t\t1.ShriNagar ( 18% )";
cout<<"\n\n\t\t2.Banglore  ( 02% )";
cout<<"\n\n\t\t3.Haidrabad ( 70% )";
cout<<"\n\n\t\t4.Ahamdabad ( 10% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c65;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p33:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.Haidrabad";
delay(2000);
show2();
}
if(a==33)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Who Is The Supreem Commander Of The 'INDIAN ARMY' ?\n";
cout<<"1.President Of India\t\t\t";
cout<<"2.Commander In Chief\n";
cout<<"3.Field Marshel\t\t\t\t";
cout<<"4.Prime Minister\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p34;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c67:if(c==1&&x==1)
{life1();goto p34;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c68;}  x=1;
cout<<"\t\t1.President Of India  ";
cout<<"\n\n\t\t2.Commander In Chief  ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c68;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c68:if(c==1&&x==1)
{life1();goto p34;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c67;}c=1;
cout<<"\n\n\t\t1.President Of India  ( 81% )";
cout<<"\n\n\t\t2.Commander In Chief  ( 02% )";
cout<<"\n\n\t\t3.Field Marshel       ( 12% )";
cout<<"\n\n\t\t4.Prime Minister      ( 05% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c67;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p34:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.President Of India";
delay(2000);
show2();
}
if(a==34)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Where Is The Command Office Of South Indian 'AIR FORCE' ?\n";
cout<<"1.Tuticorin\t\t\t";
cout<<"2.Chennai\n";
cout<<"3.Cocchi\t\t\t";
cout<<"4.BishakaPattnam\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p35;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c69:if(c==1&&x==1)
{life1();goto p35;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c70;} x=1;
cout<<"\t\t2.Chennai  ";
cout<<"\n\n\t\t3.Cocchi  ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c70;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c70:if(c==1&&x==1)
{life1();goto p35;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c69;}c=1;
cout<<"\n\n\t\t1.Tuticorin      ( 03% )";
cout<<"\n\n\t\t2.Chennai        ( 00% )";
cout<<"\n\n\t\t3.Cocchi         ( 87% )";
cout<<"\n\n\t\t4.BishakaPattnam ( 10% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c69;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p35:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.Cocchi";
delay(2000);
show2();
}
if(a==35)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Is Anti Tank Missile ?\n";
cout<<"1.Agni\t\t\t";
cout<<"2.Naag\n";
cout<<"3.Prithvi\t\t";
cout<<"4.Aakash\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p36;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c71:if(c==1&&x==1)
{life1();goto p36;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c72;}   x=1;
cout<<"\t\t2.Naag ";
cout<<"\n\n\t\t4.Aakash ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c72;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c72:if(c==1&&x==1)
{life1();goto p36;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c71;}c=1;
cout<<"\n\n\t\t1.Agni    ( 03% )";
cout<<"\n\n\t\t2.Naag    ( 92% )";
cout<<"\n\n\t\t3.Prithvi ( 02% )";
cout<<"\n\n\t\t4.Aakash  ( 03% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c71;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p36:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Naag";
delay(2000);
show2();
}
if(a==36)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Where Is The Command Office Of West Indian 'AIR FORCE'  ?\n";
cout<<"1.Mumbai\t\t\t";
cout<<"2.Pandgi\n";
cout<<"3.Goa\t\t\t\t";
cout<<"4.Ullahsh Nagar\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p37;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c73:if(c==1&&x==1)
{life1();goto p37;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c74;} x=1;
cout<<"\t\t1.Mumbai";
cout<<"\n\n\t\t4.Ullahsh Nagar ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c74;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c74:if(c==1&&x==1)
{life1();goto p37;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c73;}c=1;
cout<<"\n\n\t\t1.Mumbai        ( 43% )";
cout<<"\n\n\t\t2.Pandgi        ( 22% )";
cout<<"\n\n\t\t3.Goa           ( 22% )";
cout<<"\n\n\t\t4.Ullahsh Nagar ( 03% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c73;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p37:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.Mumbai";
delay(2000);
show2();
}
if(a==37)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Where Is The Command Office Of North Indian 'ARMY'  ?\n";
cout<<"1.Lakhnow\t\t\t";
cout<<"2.New Delhi\n";
cout<<"3.Chandigar\t\t\t";
cout<<"4.Udham Pur\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p38;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c75:if(c==1&&x==1)
{life1();goto p38;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c76;}  x=1;
cout<<"\t\t3.Chandi Garh";
cout<<"\n\n\t\t4.Udham Pur ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c76;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c76:if(c==1&&x==1)
{life1();goto p38;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c75;}c=1;
cout<<"\n\n\t\t1.Lakhnow     ( 12% )";
cout<<"\n\n\t\t2.New Delhi   ( 28% )";
cout<<"\n\n\t\t3.Chandi Garh ( 23% )";
cout<<"\n\n\t\t4.Udham Pur   ( 37% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c75;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p38:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.Udham Pur";
delay(2000);
show2();
}
if(a==38)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Where Is The Command Office Of West Indian 'ARMY'  ?\n";
cout<<"1.Lakhnow\t\t\t";
cout<<"2.Chandigar\n";
cout<<"3.Udhampur\t\t\t";
cout<<"4.New Delhi\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p39;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c77:if(c==1&&x==1)
{life1();goto p39;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c78;}  x=1;
cout<<"\t\t2.Chandigar";
cout<<"\n\n\t\t3.UdhamPur ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c78;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c78:if(c==1&&x==1)
{life1();goto p39;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c77;}c=1;
cout<<"\n\n\t\t1.Lakhnow   ( 12% )";
cout<<"\n\n\t\t2.Chandigar ( 28% )";
cout<<"\n\n\t\t3.UdhamPur  ( 23% )";
cout<<"\n\n\t\t4.New Delhi ( 37% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c77;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p39:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Chandigar ";
delay(2000);
show2();
}
if(a==39)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Which Is The Main Fighting 'TANK' Of 'INDIAN ARMY'  ?\n";
cout<<"1.Sheetal\t\t\t";
cout<<"2.Arjun\n";
cout<<"3.Angaar\t\t\t";
cout<<"4.None\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p40;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c79:if(c==1&&x==1)
{life1();goto p40;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c80;}  x=1;
cout<<"\t\t2.Arjun";
cout<<"\n\n\t\t4.None ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c80;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c80:if(c==1&&x==1)
{life1();goto p40;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c79;} c=1;
cout<<"\n\n\t\t1.Sheetal  ( 12% )";
cout<<"\n\n\t\t2.Arjun    ( 28% )";
cout<<"\n\n\t\t3.Angaar   ( 37% )";
cout<<"\n\n\t\t4.None     ( 23% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c79;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p40:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Arjun ";
delay(2000);
show2();
}
if(a==40)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"COUNTRY,Which Is Not A Member Of U.S._______ \n";
cout<<"1.Cheen\t\t\t";
cout<<"2.Iraq\n";
cout<<"3.Brazil\t\t";
cout<<"4.Taiban\n"; 
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p41;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c81:if(c==1&&x==1)
{life1();goto p41;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c82;}   x=1;
cout<<"\t\t1.Cheen";
cout<<"\n\n\t\t4.Taiban ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c82;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c82:if(c==1&&x==1)
{life1();goto p41;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c81;}c=1;
cout<<"\n\n\t\t1.Cheen  ( 12% )";
cout<<"\n\n\t\t2.Iraq   ( 28% )";
cout<<"\n\n\t\t3.Brazil ( 17% )";
cout<<"\n\n\t\t4.Taiban ( 43% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c81;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p41:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.Taiban";
delay(2000);
show2();
}
if(a==41)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"'SAFTA'Is Related With___________ ?\n";
cout<<"1.Aasiyan\t\t\t";
cout<<"2.Sark\n";
cout<<"3.W.T.O.\t\t\t";
cout<<"4.Fight\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p42;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c83:if(c==1&&x==1)
{life1();goto p42;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c84;}   x=1;
cout<<"\t\t1.Aasiyan";
cout<<"\n\n\t\t2.Sark ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c84;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c84:if(c==1&&x==1)
{life1();goto p42;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c83;}c=1;
cout<<"\n\n\t\t1.Aasiyan  ( 12% )";
cout<<"\n\n\t\t2.Sark     ( 38% )";
cout<<"\n\n\t\t3.W.T.O.   ( 17% )";
cout<<"\n\n\t\t4.Fight    ( 33% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c83;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p42:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Sark";
delay(2000);
show2();
}
if(a==42)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"A Personality , Who Awarded First Time With 'BHARAT RATNA'?\n";
cout<<"1.Pt.Jabahar Lal Nehru\t\t\t";
cout<<"2.Dr.Rajendra Prasad\n";
cout<<"3.Dr.Sarvapalli Radha Krishnan\t\t";
cout<<"4.Dr.Bhagwan Das\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p43;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c85:if(c==1&&x==1)
{life1();goto p43;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c86;} x=1;
cout<<"\t\t2.Dr.Rajendra Prasad";
cout<<"\n\n\t\t3.Dr.Sarvapalli Radha Krishnan ";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c86;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c86:if(c==1&&x==1)
{life1();goto p43;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c85;}c=1;
cout<<"\n\n\t\t1.Pt.Jabahar Lal Nehru         ( 12% )";
cout<<"\n\n\t\t2.Dr.Rajendra Prasad           ( 28% )";
cout<<"\n\n\t\t3.Dr.Sarvapalli Radha Krishnan ( 30% )";
cout<<"\n\n\t\t4.Dr.Bhagwan Das               ( 30% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c85;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p43:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.Dr.Sarvapalli Radha Krishnan";
delay(2000);
show2();
}
if(a==43)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"'SHOURYA' Award Started From_____?\n";
cout<<"1.1947\t\t\t"; 
cout<<"2.1950\n";
cout<<"3.1952\t\t\t";
cout<<"4.1955\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p44;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c87:if(c==1&&x==1)
{life1();goto p44;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c88;}  x=1;
cout<<"\t\t1.1947";
cout<<"\n\n\t\t4.1955";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c88;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c88:if(c==1&&x==1)
{life1();goto p44;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c87;}c=1;
cout<<"\n\n\t\t1.1947 ( 40% )";
cout<<"\n\n\t\t2.1950 ( 31% )";
cout<<"\n\n\t\t3.1950 ( 14% )";
cout<<"\n\n\t\t4.1955 ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c87;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p44:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.1947";
delay(2000);
show2();
}
if(a==44)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"How Many Awarded India Won In OLYMPIC 2004?\n";
cout<<"1.04\t\t\t";
cout<<"2.09\n";
cout<<"3.01\t\t\t";
cout<<"4.15\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p45;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c89:if(c==1&&x==1)
{life1();goto p45;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c90;}   x=1;
cout<<"\t\t1.04";
cout<<"\n\n\t\t3.01";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c90;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c90:if(c==1&&x==1)
{life1();goto p45;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c89;}c=1;
cout<<"\n\n\t\t1.04 ( 40% )";
cout<<"\n\n\t\t2.09 ( 31% )";
cout<<"\n\n\t\t3.01 ( 14% )"; 
cout<<"\n\n\t\t4.15 ( 15% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c89;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p45:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.01";
delay(2000);
show2();
}
if(a==45)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Reliance Cup Is Related With______?\n";
cout<<"1.Hocky\t\t\t";
cout<<"2.Football\n";
cout<<"3.Table Tenis\t\t";
cout<<"4.Cricket\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p46;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c91:if(c==1&&x==1)
{life1();goto p46;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c92;}  x=1;
cout<<"\t\t3.Table Tenis";
cout<<"\n\n\t\t4.Cricket";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c92;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c92:if(c==1&&x==1)
{life1();goto p46;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c91;}c=1;
cout<<"\n\n\t\t1.Hocky       ( 46% )";
cout<<"\n\n\t\t2.Football    ( 05% )";
cout<<"\n\n\t\t3.Table Tenis ( 04% )";
cout<<"\n\n\t\t4.Cricket     ( 45% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c91;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p46:
if(i==4)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 4.Cricket";
delay(2000);
show2();
}
if(a==46)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Azra Cup Is Related With______?\n";
cout<<"1.Chess\t\t\t";
cout<<"2.Polo\n";
cout<<"3.Table Tenis\t\t";
cout<<"4.Cricket\n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p47;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c93:if(c==1&&x==1)
{life1();goto p47;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c94;}  x=1;
cout<<"\t\t2.Polo";
cout<<"\n\n\t\t4.Cricket";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c94;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}} 
else if(q=='b'||q=='B')
{
c94:if(c==1&&x==1)
{life1();goto p47;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c93;}c=1;
cout<<"\n\n\t\t1.Chess       ( 46% )";
cout<<"\n\n\t\t2.Polo        ( 05% )";
cout<<"\n\n\t\t3.Table Tenis ( 04% )";
cout<<"\n\n\t\t4.Cricket     ( 45% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c93;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p47:
if(i==2)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 2.Polo";
delay(2000);
show2();
}
if(a==47)
{
clrscr();
show();
show1();
gotoxy(1,17);
cout<<"Who Told That 'A THING OF BEAUTY IS A JOY EVER' ?\n";
cout<<"1.John Milton\t\t\t";
cout<<"2.Lard Nelson\n";
cout<<"3.John Keets\t\t\t";
cout<<"4.Lard Milton \n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p48;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c95:if(c==1&&x==1)
{life1();goto p48;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c96;} x=1;
cout<<"\t\t2.Lard Nelson";
cout<<"\n\n\t\t3.John Keets";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c96;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c96:if(c==1&&x==1)
{life1();goto p48;}if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c95;}c=1;
cout<<"\n\n\t\t1.John Milton  ( 46% )";
cout<<"\n\n\t\t2.Lard Nelson  ( 05% )";
cout<<"\n\n\t\t3.John Keets   ( 04% )";
cout<<"\n\n\t\t4.Lard Milton  ( 45% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c95;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p48:
if(i==3)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 3.John Keets";
delay(2000);
show2();
}
if(a==48)
{
clrscr();
show();
show1();
textcolor(14);
gotoxy(1,17);
cout<<"'LIGHT YEAR'Is Related With_______ ?\n";
cout<<"1.Distance\t\t\t";
cout<<"2.Speed\n";
cout<<"3.Energy\t\t\t";
cout<<"4.Light \n";
cout<<"DO YOU WANT TO USE LIFE LINES (Y/N)::";
cin>>w;
if(c==1&&x==1){
life1();goto p49;}
if(w=='y'||w=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\tA. Fifty-Fifty  B. Audience Vote";
cout<<"\n\n\t\t\t\tPlease Enter Your Choice (A/B)::";
cin>>q;
if(q=='a'||q=='A')
{
c97:if(c==1&&x==1)
{life1();goto p49;}if(x==1&&c==0)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY AUDIENCE VOTE ::";
goto c98;}    x=1;
cout<<"\t\t1.Distance";
cout<<"\n\n\t\t3.Energy";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
if(q=='y'||q=='Y')
{
goto c98;
}
else
{
cout<<"\n\n\t\tEnter Your Choice _____";
cin>>i;
}}
else if(q=='b'||q=='B')
{
c98:if(c==1&&x==1)
{life1(); goto p49;}
if(x==0&&c==1)
{cout<<"\n\n\t\t\t:: YOU CAN USE ONLY FIFTY-FIFTY ::";
goto c97;}c=1;
cout<<"\n\n\t\t1.Distance   ( 46% )";
cout<<"\n\n\t\t2.Speed      ( 05% )";
cout<<"\n\n\t\t3.Energy     ( 04% )";
cout<<"\n\n\t\t4.Light      ( 45% )"<<"\n\n";
cout<<"\n\n\t\tDo You Want To Use Another Life Line (Y/N)::";
cin>>q;
cout<<"\n\n";
if(q=='y'||q=='Y')
{
goto c97;
}
else
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}}}
else if(w=='n'||w=='N')
{
cout<<"Enter Your Choice 1 2 3 4_____";
cin>>i;
}
p49:
if(i==1)
{
cout<<endl<<"\t\tYou Are Right";
delay(3000);
clrscr();
goto ram;
}
else
{
cout<<endl<<"\t\tSorry___You Are Wrong";
delay(3000);
}clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tRight Answer Is:: 1.Distance";
delay(2000);
show2();
}}
show()
{
cout<<"1,000"<<endl;
cout<<"2,000"<<endl;
cout<<"3,000"<<endl;
cout<<"5,000"<<endl;
cout<<"10,000"<<endl;
cout<<"20,000"<<endl;
cout<<"40,000"<<endl;
cout<<"80,000"<<endl;
cout<<"1,60,000"<<endl;
cout<<"3,20,000"<<endl;
cout<<"6,40,000"<<endl;
cout<<"12,25,000"<<endl;
cout<<"25,00,000"<<endl;
cout<<"50,00,000"<<"\t\t\t\t\t\tA.Fifty-Fifty"<<endl;
cout<<"1,00,00,000"<<"\t\t\t\t\t\tB.Audience Vote"<<endl;
gotoxy(56,1);
cout<<"QUESTION NUMBER::"<<v<<endl;
}
show1()
{
if(v==1)
{
gotoxy(56,3);
cout<<"QUESTION FOR::1,000";
}
if(v==2)
{
gotoxy(56,3);
cout<<"QUESTION FOR::2,000";
}
if(v==3)
{
gotoxy(56,3);
cout<<"QUESTION FOR::3,000";
}
if(v==4)
{
gotoxy(56,3);
cout<<"QUESTION FOR::5,000";
}
if(v==5)
{
gotoxy(56,3);
cout<<"QUESTION FOR::10,000";
}
if(v==6)
{
gotoxy(56,3);
cout<<"QUESTION FOR::20,000";
}
if(v==7)
{
gotoxy(56,3);
cout<<"QUESTION FOR::40,000";
}
if(v==8)
{
gotoxy(56,3);
cout<<"QUESTION FOR::80,000";
}
if(v==9)
{
gotoxy(56,3);
cout<<"QUESTION FOR::1,60,000";
}
if(v==10)
{
gotoxy(56,3);
cout<<"QUESTION FOR::3,20,000";
}
if(v==11)
{
gotoxy(56,3);
cout<<"QUESTION FOR::6,40,000";
}
if(v==12)
{
gotoxy(56,3);
cout<<"QUESTION FOR::12,25,000";
}
if(v==13)
{
gotoxy(56,3);
cout<<"QUESTION FOR::25,00,000";
}
if(v==14)
{
gotoxy(56,3);
cout<<"QUESTION FOR::50,00,000";
}
if(v==15)
{
gotoxy(56,3);
cout<<"QUESTION FOR::1,00,00,000";
}
textcolor(14);
}
life1()
{
cout<<"\n\t\t:: YOU HAVE NO LIFE LINE ::";
cout<<"\n\t\t  Enter Your Choice _____";
cin>>i;
}
show2()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tDO YOU WANT TO PLAY IT AGAIN (Y/N)::";
cin>>u;
if(u=='y'||u=='Y')
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t   :: OK ::";
delay(1000);
cout<<"\n\n\t\t  :: Do You Want To Know The INSTRUCTIONS (Y/N) ::";
cin>>l;
if(l=='y'||l=='Y')
{
b=1;
}
else
{
b=5;
}
v=0;
x=0;c=0;
clrscr();
get();
}
else
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t:: THANK YOU FOR PLAYING ::";
delay(1000);
exit(0);
}}};
int main()
{
clrscr();
int gdriver=DETECT,gmode;
set s;
s.ins();
s.get();
return 0;
}
