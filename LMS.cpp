#include<iostream>
#include<stdlib.h>

using namespace std;

class LMS{
	string Title[20],Author[20],name[20],dep[20];
	int roll_no[];
	int total=0,choice=0;
	public:
		LMS()
		{
			Title[20];
			Author[20];   
			name[20];
			roll_no[20]; 
		}
		void enb()
		{
			if(total==0)
			{
			cout<<"Enter the number of books for which you would like to enter their data : ";
			cin>>choice;
			total=total+choice;
			for(int i=0;i<choice;i++)
			{
				
				cout<<"Book "<<i+1<<endl;
				cout<<"\tEnter the title or name of the book : ";
				cin>>Title[i];
				cout<<"\tEnter the name of the author : ";
				cin>>Author[i];
				cout<<"\tEnter the name of the student : ";
				cin>>name[i];
				cout<<"\tEnter the department of the student : ";
				cin>>dep[i];
				cout<<"\tEnter the roll number of the student : ";
				cin>>roll_no[i];
				
			}
			
		}
		else
		{
		cout<<"Enter the number of books for which you would like to enter their data : ";
		cin>>choice;
			for(int i=total;i<total+choice;i++)
			{
				cout<<"Book "<<i+1<<endl;
				cout<<"\tEnter the title or Name  of Book : ";
				cin>>Title[i];
				cout<<"\tEnter the Name of Author : ";
				cin>>Author[i];
				cout<<"\tEnter the Name of the student : ";
				cin>>name[i];
				cout<<"\tEnter the Department of the student : ";
				cin>>dep[i];
				cout<<"\tEnter the Roll Number of the student : ";
				cin>>roll_no[i];
			
		}
		        total=total+choice;
		    
		}
	}
		void showdata()
		{
			cout<<"SR  Title  Author  Name    Department     Roll Number"<<endl;
			for(int i=0;i<=total;i++)
			{
			cout<<endl;		
		 		cout<<i+1<<"    "<<Title[i]<<"      "<<Author[i]<<"        "<<name[i]<<"           "<<dep[i]<<"        "<<roll_no[i]<<endl;
		 		
			}
		}
		void sb()
		{
			string s;
			cout<<"Enter the title of the book that you wish to search for : ";
			cin>>s;
			for(int i=0;i<total;i++)
			{
				if(s==Title[i])
				{
					cout<<"SR  Title  Author  Name   Department    Roll Number"<<endl;
					 cout<<i+1<<"    "<<Title[i]<<"      "<<Author[i]<<"        "<<name[i]<<"           "<<dep[i]<<"        "<<roll_no[i]<<endl;
		 		     
				}
			}
		}
		void ed()
		{
				string s;
			cout<<"Enter the title name to edit  : ";
			cin>>s;
			for(int i=0;i<total;i++)
			{
				if(s==Title[i])
				{
					cout<<"Previous Data"<<endl;
					 cout<<i+1<<"    "<<Title[i]<<"      "<<Author[i]<<"        "<<name[i]<<"           "<<dep[i]<<"        "<<roll_no[i]<<endl;
		 		     
		 		     cout<<"Enter New Data :"<<endl;
		 		    cout<<"\tEnter the title or name of the book : ";
				     cin>>Title[i];
				     cout<<"\tEnter the name of the author : ";
				     cin>>Author[i];
				     cout<<"\tEnter the name of the student : ";
				     cin>>name[i];
				     cout<<"\tEnter the department of the student : ";
				     cin>>dep[i];
			       	 cout<<"\tEnter the roll number of the student : ";
				     cin>>roll_no[i];
				     
		 		     
				}
			}
		}
		
};
int main()
{
	cout<<"\t\tLibrary Management System\n"<<endl;
int x,n=1;
LMS obj1;
while(n)
{
cout<<"1-Enter New Book Data "<<endl;
cout<<"2-Show Book Data"<<endl;
cout<<"3-Search Book Data"<<endl;
cout<<"4-Edit Book Data"<<endl;
cout<<"5-Delete Book Data "<<endl;
cout<<"6-Exit Programme"<<endl;
cout<<"\n"<<endl;
cout<<"\tEnter your choice : ";
cin>>x;
cout<<endl;
	if(x==1)
	{
		obj1.enb();
	}
	else if(x==2)
	{
	obj1.showdata();	
	}
	else if(x==3)
	{
		obj1.sb();
	}
	else if(x==4)
	{
	    obj1.ed();
	}
	else if(x==5)
	{
		
	}
    else if(x==6)
    {
    	exit(0);
	}
	else
	{
		cout<<"You entered an invalid input. Please enter a number that corresponds to the given choice.\n"<<endl;
	}
}
}
