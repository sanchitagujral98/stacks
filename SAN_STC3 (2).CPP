// Stacks in OOPS

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

class stack
 { int top, a[20];

   public :  stack()
	      { top=-1;
		 }

	     void push()
	      { if(top==19)
		  { cout<<"Overflow";
		    exit(0);
		    }
		top++;
		int num; cin>>num;
		a[top]=num;
		 }

	     void pop()
	      { if(top==-1)
		  { cout<<"Underflow";
		    exit(0);
		    }
		int num;
		num=a[top];
		cout<<"Deleted "<<num;
		top--;
		}

	     void display()
	      { for(int i=0;i<=top;i++)
		 { cout<<a[i];
		   cout<<'\n';
		  }
		}
	       };

void main()
 { stack s;
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
		   s.push();}break;

	  case 2:{ clrscr();
		   s.pop();}break;
	  case 3:{ clrscr();
		   s.display();}break;
	  case 4:exit(0);

	  }cout<<"Want to Continue? ";cin>>ch;
   }while(ch=='Y' || ch=='y');
  getch() ;
  }