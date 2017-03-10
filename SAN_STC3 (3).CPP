// Dynamic Stacks

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>


struct node
 { int adno;
   char name[20];
   float mks;
   node *link;
   };
node *top;

void push()
 { node *ptr;
   ptr=new node;
   if(ptr==NULL)
    { cout<<"Overflow";
      exit(0);
      }
   cout<<"\nEnter ADNO ";cin>>ptr->adno;
   cout<<"\nEnter Name ";gets(ptr->name);
   cout<<"\nEnter Marks ";cin>>ptr->mks;
   ptr->link=NULL;
   if(top==NULL)
    top=ptr;
   else
    {ptr->link=top;
     top=ptr;}
     }


void pop()
 { if(top==NULL)
    {cout<<"Under Flow";
     exit(0);
      }
   node *ptr;
   ptr=top;
   top=top->link;
   ptr->link=NULL;
   cout<<"Deleted\n";
   cout<<"\nAdmission Number "<<ptr->adno;
   cout<<"\nNAme "<<ptr->name;
   cout<<"\nMarks "<<ptr->mks;
   delete ptr;
   }

void display()
 { if(top==NULL)
    {cout<<"No Elements to Display";
     getch();
     exit(0);
     }
    node *ptr;
    ptr=top;
    while(ptr!=NULL)
     {  cout<<"\nAdmission Number "<<ptr->adno;
	cout<<"\nNAme "<<ptr->name;
	cout<<"\nMarks "<<ptr->mks;
	cout<<'\n';
	ptr=ptr->link;
	}
  }


void main()
 {
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
		   push();}break;

	  case 2:{ clrscr();
		   pop();}break;
	  case 3:{ clrscr();
		   display();}break;
	  case 4:exit(0);

	  }cout<<"Want to Continue? ";cin>>ch;
   }while(ch=='Y' || ch=='y');
  getch();
  }