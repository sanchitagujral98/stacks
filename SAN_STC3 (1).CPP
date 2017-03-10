// Stacks Structures Using parameters

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

const int size=20;

struct passenger
 { int ticket_no, s_no;
   char name[20]; float fare;
   };


void push(passenger p[size],int &top,passenger p1)
 { if(top==size-1)
    { cout<<"Overflow";
      exit(0);
      }
   top++;
   p[top]=p1;
    }

void pop(passenger p[size],int &top)
 { if(top==-1)
    { cout<<"Underflow";
      exit(0);
      }
   passenger p1;
   p1=p[top];
   cout<<"Deleted\n";
   cout<<"\nTicket Number "<<p1.ticket_no;
   cout<<"\nSeat Number "<<p1.s_no;
   cout<<"\nName : "<<p1.name;
   cout<<"\nFare : "<<p1.fare;
   top--;
   }

void display(passenger p[size],int top)
 { for(int i=0;i<=top;i++)
    {  cout<<"\nTicket Number "<<p[i].ticket_no;
       cout<<"\nSeat Number "<<p[i].s_no;
       cout<<"\nName : "<<p[i].name;
       cout<<"\nFare : "<<p[i].fare;
       cout<<'\n';
     }
  }


void main()
 { int top=-1; passenger p[size];  passenger p1;
   char ch;
   do {clrscr();
       cout<<"\nPush an Element     1";
       cout<<"\nPop an Element      2";
       cout<<"\nDisplay Stack       3";
       cout<<"\nExit                4";
       int n;
       cin>>n;
       switch(n)
	{ case 1:{ clrscr();
		   cout<<"\nEnter Ticket Number : ";cin>>p1.ticket_no;
		   cout<<"\nEnter Seat Number : ";cin>>p1.s_no;
		   cout<<"\nEnter Name : ";gets(p1.name);
		   cout<<"\nEnter Fare : ";cin>>p1.fare;
		   push(p,top,p1);}break;

	  case 2:{ clrscr();
		   pop(p,top);}break;
	  case 3:{ clrscr();
		   display(p,top);}break;
	  case 4:exit(0);

	  }cout<<"Want to Continue? ";cin>>ch;
   }while(ch=='Y' || ch=='y');
  getch();
  }