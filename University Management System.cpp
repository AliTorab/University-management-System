#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
	void portal();
	void cafe();
	char numbers[10];   
	void game();
	void dash_board();
	void user_turn();
	bool gameover();
	void enter_marksA();
	void enter_marksB();
	void enter_marksC();
	void enter_marksD();
	void check_marksA();
	void check_marksB();
	void check_marksC();
	void check_marksD();
	void student(int);

	int e;
	double g();
	double caf();
	char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	int option;
	int row,column;
	char turn = 'X';
	bool tie = false;

int main()
{
	// cout<<"\t\t\tM Shehroz khan	Hassan Ali Janjua	Ali Torab"<<endl<<"\t\t\tBEMTS-F-21-A"<<endl;
	cout<<"\n\t\t\t#################################################"<<endl;
	cout<<"\t\t\t## Welcome To Air University Management System ##"<<endl;
	cout<<"\t\t\t#################################################\n\n"<<endl;
	int decide;
	char condition;
do{
	cout<<"* Press 1 For AU Portal : \n";
	cout<<"* Press 2 For Cafe : \n";
	cout<<"* Press 3 For Game : \n";
	cin>>decide;
	switch (decide)
{
	case 1:
	portal ();
	break;
	case 2:
	cafe ();	
	break;
	case 3:
	game ();
	break;
	default :
	cout<<"Invalid input\n";
}
	cout<<"\n\nPress y to start again this Program ? :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
	return 0;
}



// For AU Portal :-

void  portal()
{
	char condition;
	int decide,roll_no;
	string pass,user;
	do{
	cout<<"\t\tWelcome To AU Portal"<<endl;

do{
	cout<<"\t	Administration \n";	
	cout<<"Enter your name : \t";
	cin>>user;
	cout<<"Enter your Password : \t";
	cin>>pass;
	if (user=="admin"&&pass == "admin")	// id , pass
	{
	cout<<"\n\t\tWelcome "<<user<<" !!!"<<endl;
	cout<<"Do you want to Enter Marks ? Press \"1\"\n";
	cout<<"Do you want to Check Marks ? Press \"2\"\n";	
	cin>>decide;
	switch (decide)						// switch for marks
	{
do{
	case 1:
	do
{	char section;
	cout<<"\nWhich section marks do you want to enter (A,B,C,D) ? : ";
	cin>>section;
	switch(section)
{
	do
{
	case 'A':
	case 'a':
	enter_marksA();	
	break;	
	case 'B':
	case 'b':
	enter_marksB();	
	break;	
	case 'C':
	case 'c':
	enter_marksC();	
	break;	
	case 'D':
	case 'd':
	enter_marksD();	
	break;	
	default:
	cout<<"Invalid Input \n";
	cout<<"Do You want to Enter again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
}
cout<<"Do you want to enter another section marks ? Press y :";
cin>>condition;
}while(condition=='Y'||condition=='y');
	break;
	case 2:
do
{	char section;
cout<<"Which section marks do you want to check (A,B,C,D) ? : ";
	cin>>section;
switch (section)
{	
do{
	case 'A':
	case 'a':
	check_marksA();
	break;	
	case 'B':
	case 'b':
	check_marksB();
	break;	
	case 'C':
	case 'c':
	check_marksC();	
	break;	
	case 'D':
	case 'd':
	check_marksD();	
	break;	
	default:
	cout<<"Invalid Input \n";
	cout<<"Do You want to Try it again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
}
cout<<"\nDo you want to Check another section marks ? Press y :";
cin>>condition;
}while(condition=='Y'||condition=='y');
	break;
	default :
	cout<<"Invalid input\n";
cout<<"Do You want to Try Again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
	}
	}
	else
	{
	cout<<"Wrong user name or Password \n";
	//cout<<"haaaan esy tu nai na, esy nai khuly ga \n";			// just for remainder
	}
	cout<<"Do You want to Enter Marks again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
	break;	
	

}while(condition=='Y'||condition=='y');
}



// For Cafe :-

void cafe()			
{
caf();
}
void enter_marksA()
{
	fstream fout;
	fout.open("A-section.csv", ios::out);
	int size;
	cout<<"Enter number of students in A section : ";
	cin>>size;

string name [size];

int roll[size];

float lab1perf[size],lab2perf[size],lab3perf[size],lab4perf[size],lab5perf[size];
float lab6perf[size],lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size];
float lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size];

float lab1 [size],lab2 [size],lab3 [size],lab4 [size],lab5 [size];
float lab6 [size],lab7 [size],lab8 [size],lab9 [size],lab10 [size];
float lab11[size],lab12 [size],lab13[size],lab14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"Enter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"\n\nEnter Student "<<i+1<<" data"<<endl;
    
	cout<<"\n\tRoll number : ";
    cin>>roll[i];
	
	cout<<"\n\tName : ";
    cin>>name[i];
  
  	cout<<"Lab performance 1 : ";
    cin>>lab1perf[i];

    cout<<"Lab performance 2 : ";
    cin>>lab2perf[i];

    cout<<"Lab performance 3 : ";
    cin>>lab3perf[i];
	
    cout<<"Lab performance 4 : ";
    cin>>lab4perf[i];
	
    cout<<"Lab performance 5 : ";
    cin>>lab5perf[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>lab6perf[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>lab7perf[i];
	
	cout<<"Lab performance 8 : ";
	cin>>lab8perf[i];
	
	cout<<"Lab performance 9 : ";
	cin>>lab9perf[i];
		
    cout<<"Lab performance 10 : ";
	cin>>lab10perf[i];
		
    cout<<"Lab performance 11 : ";
    lab11perf[i]=(rand()%15);	
	cout<<lab11perf[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    lab12perf[i]=(rand()%15);	
	cout<<lab12perf[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    lab13perf[i]=(rand()%15);	
	cout<<lab13perf[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    lab14perf[i]=(rand()%15);	
	cout<<lab14perf[i];    
	cout<<endl;  
    
    cout<<"\nlab report 1 : ";
    cin>>lab1 [i];
    
	cout<<"lab report 2 : ";
    cin>>lab2 [i];
    
	cout<<"lab report 3 : ";
    cin>>lab3 [i];
    
	cout<<"lab report 4 : ";
    cin>>lab4 [i];
    
	cout<<"lab report 5 : ";
    cin>>lab5 [i];   
	
	cout<<"lab report 6 : ";
    lab6 [i]=(rand()%15);	
	cout<<lab6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    lab7 [i]=(rand()%15);	
	cout<<lab7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    lab8 [i]=(rand()%15);	
	cout<<lab8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    lab9 [i]=(rand()%15);	
	cout<<lab9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    lab10 [i]=(rand()%15);	
	cout<<lab10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    lab11 [i]=(rand()%15);	
	cout<<lab11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    lab12 [i]=(rand()%15);	
	cout<<lab12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    lab13 [i]=(rand()%15);	
	cout<<lab13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    lab14 [i]=(rand()%15);	
	cout<<lab14 [i];    
	cout<<endl;
	
    cout<<"\n\tMid : ";
    cin>>mid [i];    
	    
	cout<<"\n\tFinal : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"\n\tProject : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]
	+ lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i];

lab[i]=lab1[i]+lab2[i]+lab3[i]+lab4[i]+lab5[i]+lab6[i]+lab7[i]+lab8[i]+lab9[i]+lab10[i]+lab11[i]+lab12[i]+lab13[i]+lab14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "
<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< lab1perf[i ]<< " , "<< lab2perf[i]<< " , "<< lab3perf[i]<< " , "<< lab4perf[i]<<  " , "<< lab5perf[i]<<  " , "
	<< lab6perf[i] << " , "<< lab7perf[i]<< " , "<< lab8perf[i]<< " , "<< lab9perf[i]<<  " , "<< lab10perf[i]<< " , "
	<< lab11perf[i]<< " , "<<lab12perf[i]<< " , "<< lab13perf[i]<<" , "<< lab14perf[i]<< " , "

	<< lab1[i] << " , "<< lab2[i] << " , "<<lab3[i]<< " , "<< lab4[i] << " , "<< lab5[i] 
	<< " , " << lab6[i]<< " , "<< lab7[i] << " , "<< lab8[i] << " , "<< lab9[i] << " , "<< lab10[i]
	<< " , " <<lab11[i]<< " , "<< lab12[i]<< " , "<< lab13[i]<< " , "<< lab14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }
}
void enter_marksB()
{
	fstream fout;
	fout.open("B-section.csv", ios::out);
	int size;
	cout<<"\nEnter number of students in B section : ";
		cin>>size;

string name [size];

int roll[size];

float lab1perf[size],lab2perf[size],lab3perf[size],lab4perf[size],lab5perf[size];
float lab6perf[size],lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size];
float lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size];

float lab1 [size],lab2 [size],lab3 [size],lab4 [size],lab5 [size];
float lab6 [size],lab7 [size],lab8 [size],lab9 [size],lab10 [size];
float lab11[size],lab12 [size],lab13[size],lab14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"\nEnter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"\nEnter Student "<<i+1<<" data"<<endl;
    
	cout<<"\n\tRoll number : ";
    cin>>roll[i];
	
	cout<<"\n\tName : ";
    cin>>name[i];
  
  	cout<<"\nLab performance 1 : ";
    cin>>lab1perf[i];

    cout<<"Lab performance 2 : ";
    cin>>lab2perf[i];

    cout<<"Lab performance 3 : ";
    cin>>lab3perf[i];
	
    cout<<"Lab performance 4 : ";
    cin>>lab4perf[i];
	
    cout<<"Lab performance 5 : ";
    cin>>lab5perf[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>lab6perf[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>lab7perf[i];
	
	cout<<"Lab performance 8 : ";
	cin>>lab8perf[i];
	
	cout<<"Lab performance 9 : ";
	cin>>lab9perf[i];
		
    cout<<"Lab performance 10 : ";
	cin>>lab10perf[i];
		
    cout<<"Lab performance 11 : ";
    lab11perf[i]=(rand()%15);	
	cout<<lab11perf[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    lab12perf[i]=(rand()%15);	
	cout<<lab12perf[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    lab13perf[i]=(rand()%15);	
	cout<<lab13perf[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    lab14perf[i]=(rand()%15);	
	cout<<lab14perf[i];    
	cout<<endl;  
    
    cout<<"\nlab report 1 : ";
    cin>>lab1 [i];
    
	cout<<"lab report 2 : ";
    cin>>lab2 [i];
    
	cout<<"lab report 3 : ";
    cin>>lab3 [i];
    
	cout<<"lab report 4 : ";
    cin>>lab4 [i];
    
	cout<<"lab report 5 : ";
    cin>>lab5 [i];   
	
	cout<<"lab report 6 : ";
    lab6 [i]=(rand()%15);	
	cout<<lab6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    lab7 [i]=(rand()%15);	
	cout<<lab7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    lab8 [i]=(rand()%15);	
	cout<<lab8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    lab9 [i]=(rand()%15);	
	cout<<lab9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    lab10 [i]=(rand()%15);	
	cout<<lab10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    lab11 [i]=(rand()%15);	
	cout<<lab11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    lab12 [i]=(rand()%15);	
	cout<<lab12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    lab13 [i]=(rand()%15);	
	cout<<lab13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    lab14 [i]=(rand()%15);	
	cout<<lab14 [i];    
	cout<<endl;
	
    cout<<"\n\tMid : ";
    cin>>mid [i];    
	    
	cout<<"\n\tFinal : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"\n\tProject : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]
	+ lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i];

lab[i]=lab1[i]+lab2[i]+lab3[i]+lab4[i]+lab5[i]+lab6[i]+lab7[i]+lab8[i]+lab9[i]+lab10[i]+lab11[i]+lab12[i]+lab13[i]+lab14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "
<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< lab1perf[i ]<< " , "<< lab2perf[i]<< " , "<< lab3perf[i]<< " , "<< lab4perf[i]<<  " , "<< lab5perf[i]<<  " , "
	<< lab6perf[i] << " , "<< lab7perf[i]<< " , "<< lab8perf[i]<< " , "<< lab9perf[i]<<  " , "<< lab10perf[i]<< " , "
	<< lab11perf[i]<< " , "<<lab12perf[i]<< " , "<< lab13perf[i]<<" , "<< lab14perf[i]<< " , "

	<< lab1[i] << " , "<< lab2[i] << " , "<<lab3[i]<< " , "<< lab4[i] << " , "<< lab5[i] 
	<< " , " << lab6[i]<< " , "<< lab7[i] << " , "<< lab8[i] << " , "<< lab9[i] << " , "<< lab10[i]
	<< " , " <<lab11[i]<< " , "<< lab12[i]<< " , "<< lab13[i]<< " , "<< lab14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }


}
void enter_marksC()
{
fstream fout;
	fout.open("C-section.csv", ios::out);
	int size;
	cout<<"\nEnter number of students in C section : ";
	cin>>size;

string name [size];

int roll[size];

float lab1perf[size],lab2perf[size],lab3perf[size],lab4perf[size],lab5perf[size];
float lab6perf[size],lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size];
float lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size];

float lab1 [size],lab2 [size],lab3 [size],lab4 [size],lab5 [size];
float lab6 [size],lab7 [size],lab8 [size],lab9 [size],lab10 [size];
float lab11[size],lab12 [size],lab13[size],lab14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"\nEnter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"\nEnter Student "<<i+1<<" data"<<endl;
    
	cout<<"\n\tRoll number : ";
    cin>>roll[i];
	
	cout<<"\n\tName : ";
    cin>>name[i];
  
  	cout<<"\nLab performance 1 : ";
    cin>>lab1perf[i];

    cout<<"Lab performance 2 : ";
    cin>>lab2perf[i];

    cout<<"Lab performance 3 : ";
    cin>>lab3perf[i];
	
    cout<<"Lab performance 4 : ";
    cin>>lab4perf[i];
	
    cout<<"Lab performance 5 : ";
    cin>>lab5perf[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>lab6perf[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>lab7perf[i];
	
	cout<<"Lab performance 8 : ";
	cin>>lab8perf[i];
	
	cout<<"Lab performance 9 : ";
	cin>>lab9perf[i];
		
    cout<<"Lab performance 10 : ";
	cin>>lab10perf[i];
		
    cout<<"Lab performance 11 : ";
    lab11perf[i]=(rand()%15);	
	cout<<lab11perf[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    lab12perf[i]=(rand()%15);	
	cout<<lab12perf[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    lab13perf[i]=(rand()%15);	
	cout<<lab13perf[i];    
	cout<<endl;
	
	cout<<"\nLab performance 14 : ";
    lab14perf[i]=(rand()%15);	
	cout<<lab14perf[i];    
	cout<<endl;  
    
    cout<<"lab report 1 : ";
    cin>>lab1 [i];
    
	cout<<"lab report 2 : ";
    cin>>lab2 [i];
    
	cout<<"lab report 3 : ";
    cin>>lab3 [i];
    
	cout<<"lab report 4 : ";
    cin>>lab4 [i];
    
	cout<<"lab report 5 : ";
    cin>>lab5 [i];   
	
	cout<<"lab report 6 : ";
    lab6 [i]=(rand()%15);	
	cout<<lab6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    lab7 [i]=(rand()%15);	
	cout<<lab7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    lab8 [i]=(rand()%15);	
	cout<<lab8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    lab9 [i]=(rand()%15);	
	cout<<lab9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    lab10 [i]=(rand()%15);	
	cout<<lab10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    lab11 [i]=(rand()%15);	
	cout<<lab11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    lab12 [i]=(rand()%15);	
	cout<<lab12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    lab13 [i]=(rand()%15);	
	cout<<lab13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    lab14 [i]=(rand()%15);	
	cout<<lab14 [i];    
	cout<<endl;
	
    cout<<"\n\tMid : ";
    cin>>mid [i];    
	    
	cout<<"\n\tFinal : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"\n\tProject : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]
	+ lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i];

lab[i]=lab1[i]+lab2[i]+lab3[i]+lab4[i]+lab5[i]+lab6[i]+lab7[i]+lab8[i]+lab9[i]+lab10[i]+lab11[i]+lab12[i]+lab13[i]+lab14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "
<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< lab1perf[i ]<< " , "<< lab2perf[i]<< " , "<< lab3perf[i]<< " , "<< lab4perf[i]<<  " , "<< lab5perf[i]<<  " , "
	<< lab6perf[i] << " , "<< lab7perf[i]<< " , "<< lab8perf[i]<< " , "<< lab9perf[i]<<  " , "<< lab10perf[i]<< " , "
	<< lab11perf[i]<< " , "<<lab12perf[i]<< " , "<< lab13perf[i]<<" , "<< lab14perf[i]<< " , "

	<< lab1[i] << " , "<< lab2[i] << " , "<<lab3[i]<< " , "<< lab4[i] << " , "<< lab5[i] 
	<< " , " << lab6[i]<< " , "<< lab7[i] << " , "<< lab8[i] << " , "<< lab9[i] << " , "<< lab10[i]
	<< " , " <<lab11[i]<< " , "<< lab12[i]<< " , "<< lab13[i]<< " , "<< lab14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }
	
}
void enter_marksD()
{
fstream fout;
	fout.open("D-section.csv", ios::out);
	int size;
	cout<<"\nEnter number of students in D section : ";
	cin>>size;

string name [size];

int roll[size];

float lab1perf[size],lab2perf[size],lab3perf[size],lab4perf[size],lab5perf[size];
float lab6perf[size],lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size];
float lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size];

float lab1 [size],lab2 [size],lab3 [size],lab4 [size],lab5 [size];
float lab6 [size],lab7 [size],lab8 [size],lab9 [size],lab10 [size];
float lab11[size],lab12 [size],lab13[size],lab14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"\nEnter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"\nEnter Student "<<i+1<<" data"<<endl;
    
	cout<<"\n\tRoll number : ";
    cin>>roll[i];
	
	cout<<"\n\tName : ";
    cin>>name[i];
  
  	cout<<"\nLab performance 1 : ";
    cin>>lab1perf[i];

    cout<<"Lab performance 2 : ";
    cin>>lab2perf[i];

    cout<<"Lab performance 3 : ";
    cin>>lab3perf[i];
	
    cout<<"Lab performance 4 : ";
    cin>>lab4perf[i];
	
    cout<<"Lab performance 5 : ";
    cin>>lab5perf[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>lab6perf[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>lab7perf[i];
	
	cout<<"Lab performance 8 : ";
	cin>>lab8perf[i];
	
	cout<<"Lab performance 9 : ";
	cin>>lab9perf[i];
		
    cout<<"Lab performance 10 : ";
	cin>>lab10perf[i];
		
    cout<<"Lab performance 11 : ";
    lab11perf[i]=(rand()%15);	
	cout<<lab11perf[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    lab12perf[i]=(rand()%15);	
	cout<<lab12perf[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    lab13perf[i]=(rand()%15);	
	cout<<lab13perf[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    lab14perf[i]=(rand()%15);	
	cout<<lab14perf[i];    
	cout<<endl;  
    
    cout<<"\nlab report 1 : ";
    cin>>lab1 [i];
    
	cout<<"lab report 2 : ";
    cin>>lab2 [i];
    
	cout<<"lab report 3 : ";
    cin>>lab3 [i];
    
	cout<<"lab report 4 : ";
    cin>>lab4 [i];
    
	cout<<"lab report 5 : ";
    cin>>lab5 [i];   
	
	cout<<"lab report 6 : ";
    lab6 [i]=(rand()%15);	
	cout<<lab6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    lab7 [i]=(rand()%15);	
	cout<<lab7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    lab8 [i]=(rand()%15);	
	cout<<lab8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    lab9 [i]=(rand()%15);	
	cout<<lab9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    lab10 [i]=(rand()%15);	
	cout<<lab10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    lab11 [i]=(rand()%15);	
	cout<<lab11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    lab12 [i]=(rand()%15);	
	cout<<lab12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    lab13 [i]=(rand()%15);	
	cout<<lab13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    lab14 [i]=(rand()%15);	
	cout<<lab14 [i];    
	cout<<endl;
	
    cout<<"\n\tMid : ";
    cin>>mid [i];    
	    
	cout<<"\n\tFinal : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"\n\tProject : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]
	+ lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i];

lab[i]=lab1[i]+lab2[i]+lab3[i]+lab4[i]+lab5[i]+lab6[i]+lab7[i]+lab8[i]+lab9[i]+lab10[i]+lab11[i]+lab12[i]+lab13[i]+lab14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "
<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< lab1perf[i ]<< " , "<< lab2perf[i]<< " , "<< lab3perf[i]<< " , "<< lab4perf[i]<<  " , "<< lab5perf[i]<<  " , "
	<< lab6perf[i] << " , "<< lab7perf[i]<< " , "<< lab8perf[i]<< " , "<< lab9perf[i]<<  " , "<< lab10perf[i]<< " , "
	<< lab11perf[i]<< " , "<<lab12perf[i]<< " , "<< lab13perf[i]<<" , "<< lab14perf[i]<< " , "

	<< lab1[i] << " , "<< lab2[i] << " , "<<lab3[i]<< " , "<< lab4[i] << " , "<< lab5[i] 
	<< " , " << lab6[i]<< " , "<< lab7[i] << " , "<< lab8[i] << " , "<< lab9[i] << " , "<< lab10[i]
	<< " , " <<lab11[i]<< " , "<< lab12[i]<< " , "<< lab13[i]<< " , "<< lab14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }
	
}
void check_marksA()
{

  
int size=42;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size],lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size];
float lab1rep[size],lab2rep[size],lab3rep[size],lab4rep[size],lab5rep[size];
float mid[size];

   
string line;
ifstream file3("MTSA-CP-GRADES.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
   
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab7perf[i];
	 getline(iss, rand, ',');
    iss >>  lab8perf[i];
	 getline(iss, rand, ',');
    iss >>  lab9perf[i];
	 getline(iss, rand, ',');
    iss >>  lab10perf[i];
	 getline(iss, rand, ',');
    iss >>  lab11perf[i];
	 getline(iss, rand, ',');
    iss >>  lab12perf[i];
	 getline(iss, rand, ',');
    iss >>  lab13perf[i];
	 getline(iss, rand, ',');
    iss >>  lab14perf[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++; 
}

for(int i=0;i<size;i++)
cout<<rollnum[i]<<setw(12)<<name[i]<<setw(12)<<lab1perf[i]<<setw(12)<<lab2perf[i]<<setw(12)<<lab3perf[i]<<setw(12)<<lab4perf[i]<<setw(12)<<lab5perf[i]<<setw(12)<<lab6perf[i]<<setw(12)<<lab7perf[i]<<setw(12)<<lab8perf[i]<<setw(12)<<lab9perf[i]<<setw(12)<<lab10perf[i]<<setw(12)<<lab11perf[i]<<setw(12)<<lab12perf[i]<<setw(12)<<lab13perf[i]<<setw(12)<<lab14perf[i]<<setw(12)<<mid[i]<<endl;
}
void check_marksB()
{
  
int size=35;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size],lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size],lab15perf[size];

float mid[size];

   
string line;
ifstream file4("MTSB-CP-GRADES.csv");
int i=0;
while (getline(file4, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab7perf[i];
	 getline(iss, rand, ',');
    iss >>  lab8perf[i];
	 getline(iss, rand, ',');
    iss >>  lab9perf[i];
	getline(iss, rand, ',');
    iss >>  lab10perf[i];
	 getline(iss, rand, ',');
    iss >>  lab11perf[i];
	 getline(iss, rand, ',');
    iss >>  lab12perf[i];
	 getline(iss, rand, ',');
    iss >>  lab13perf[i];
	 getline(iss, rand, ',');
    iss >>  lab14perf[i];
	 getline(iss, rand, ',');
    iss >>  lab15perf[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++;
}

for(int i=0;i<size;i++)
cout<<rollnum[i]<<setw(12)<<name[i]<<setw(12)<<lab1perf[i]<<setw(12)<<lab2perf[i]<<setw(12)<<lab3perf[i]<<setw(12)<<lab4perf[i]<<setw(12)<<lab5perf[i]<<setw(12)<<lab6perf[i]<<setw(12)<<lab7perf[i]<<setw(12)<<lab8perf[i]<<setw(12)<<lab9perf[i]<<setw(12)<<lab10perf[i]<<setw(12)<<lab11perf[i]<<setw(12)<<lab12perf[i]<<setw(12)<<lab13perf[i]<<setw(12)<<lab14perf[i]<<setw(12)<<mid[i]<<endl;	
}
void check_marksC()
{
int size=30;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size],lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size],lab15perf[size];
float lab1rep[size],lab2rep[size],lab3rep[size],lab4rep[size],lab5rep[size];
float mid[size];

   
string line;
ifstream file5("BEBME-OOP-GRADES.csv");
int i=0;
while (getline(file5, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab7perf[i];
	 getline(iss, rand, ',');
    iss >>  lab8perf[i];
	 getline(iss, rand, ',');
    iss >>  lab9perf[i];
	 getline(iss, rand, ',');
    iss >>  lab10perf[i];
	 getline(iss, rand, ',');
    iss >>  lab11perf[i];
	 getline(iss, rand, ',');
    iss >>  lab12perf[i];
	 getline(iss, rand, ',');
    iss >>  lab13perf[i];
	 getline(iss, rand, ',');
    iss >>  lab14perf[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++;
}

for(int i=0;i<size;i++)	
cout<<rollnum[i]<<setw(12)<<name[i]<<setw(12)<<lab1perf[i]<<setw(12)<<lab2perf[i]<<setw(12)<<lab3perf[i]<<setw(12)<<lab4perf[i]<<setw(12)<<lab5perf[i]<<setw(12)<<lab6perf[i]<<setw(12)<<lab7perf[i]<<setw(12)<<lab8perf[i]<<setw(12)<<lab9perf[i]<<setw(12)<<lab10perf[i]<<setw(12)<<lab11perf[i]<<setw(12)<<lab12perf[i]<<setw(12)<<lab13perf[i]<<setw(12)<<lab14perf[i]<<setw(12)<<mid[i]<<endl;	

}
void check_marksD()
{
int size=23;
string name[size];
int rollnum[size];
float lab1perf[size];
float lab2perf[size];
float lab3perf[size];
float lab4perf[size];
float lab5perf[size];
float lab6perf[size];
float lab7perf[size],lab8perf[size],lab9perf[size],lab10perf[size],lab11perf[size],lab12perf[size],lab13perf[size],lab14perf[size],lab15perf[size],lab16perf[size];

float mid[size];

   
string line;
ifstream file6("POWER-CP.csv");
int i=0;
while (getline(file6, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	 getline(iss, rand, ',');
    iss >>  lab7perf[i];
	 getline(iss, rand, ',');
    iss >>  lab8perf[i];
	 getline(iss, rand, ',');
    iss >>  lab9perf[i];
	getline(iss, rand, ',');
    iss >>  lab10perf[i];
	 getline(iss, rand, ',');
    iss >>  lab11perf[i];
	 getline(iss, rand, ',');
    iss >>  lab12perf[i];
	 getline(iss, rand, ',');
    iss >>  lab13perf[i];
	 getline(iss, rand, ',');
    iss >>  lab14perf[i];
	 getline(iss, rand, ',');
    iss >>  lab15perf[i];
	 getline(iss, rand, ',');
	  iss >>  lab16perf[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++;
}

for(int i=0;i<size;i++)
cout<<rollnum[i]<<setw(12)<<name[i]<<setw(12)<<lab1perf[i]<<setw(12)<<lab2perf[i]<<setw(12)<<lab3perf[i]<<setw(12)<<lab4perf[i]<<setw(12)<<lab5perf[i]<<setw(12)<<lab6perf[i]<<setw(12)<<lab7perf[i]<<setw(12)<<lab8perf[i]<<setw(12)<<lab9perf[i]<<setw(12)<<lab10perf[i]<<setw(12)<<lab11perf[i]<<setw(12)<<lab12perf[i]<<setw(12)<<lab13perf[i]<<setw(12)<<lab14perf[i]<<setw(12)<<lab15perf[i]<<setw(12)<<lab16perf[i]<<setw(12)<<mid[i]<<endl;		
}
void student(int roll_no)
{
	
}

double caf() {
    int total=0;
	int n;
	char opt;
	cout<<"			Welcome to cafe		"<<endl;
    cout<<"	Press 1 : Pizza "<<"\t\tPRICE = 1000"<<endl;
	cout<<"	Press 2 : Biryani "<<"\t\tPRICE = 200"<<endl;
	cout<<"	Press 3 : Burger "<<"\t\tPRICE = 300"<<endl;
	cout<<"	Press 4 : Sandwitch "<<"\t\tPRICE = 150"<<endl;
	cout<<"	Press 5 : Finger fries "<<"\t\tPRICE = 100"<<endl;
	cout<<"	Press 6 : Samosa "<<"\t\tPRICE = 30"<<endl;
	cout<<"	Press 7 : Petties "<<"\t\tPRICE = 60"<<endl;
	cout<<"	Press 8 : Brownies "<<"\t\tPRICE = 120"<<endl;
	cout<<"	Press 9 : Snacks "<<"\t\tPRICE = 100"<<endl;
	cout<<"	Press 10 : Italian sandwitch "<<"\tPRICE = 140"<<endl;
	cout<<"	Press 11 : Cold Drink 1L "<<"\tPRICE = 80"<<endl;
	cout<<"	Press 12 : Coffee "<<"\t\tPRICE = 70"<<endl;
	cout<<"	Press 13 : Macroni "<<"\t\tPRICE = 250"<<endl;
	cout<<"	Press 14 : Shake "<<"\t\tPRICE = 130"<<endl;
	cout<<"	Press 15 : Chai "<<"\t\tPRICE = 60"<<endl;
	cout<<"	Press 16 : Biscuits"<<"\t\tPRICE = 30"<<endl;
	cout<<"	Press 17 : Chocolate "<<"\t\tPRICE = 50"<<endl;
	cout<<"	Press 18 : Roti "<<"\t\tPRICE = 12"<<endl<<endl;
	
		
	do{
	   cout<<"\tEnter option: ";
	cin>>n;
	if(n==1)
	{
	total=total+1000;
	cout<<"\tPizza delievered"<<endl;}
	
	else if(n==2)
	{
	total=total+200;
	cout<<"\tBiryani delievered"<<endl;}
	
		else if(n==3)
	{
	total=total+300;
	cout<<"\tBurger delievered"<<endl;}
	
		else if(n==4)
	{
	total=total+150;
	cout<<"\tSandwitch delievered"<<endl;}
	
		else if(n==5)
	{
	total=total+100;
	cout<<"\tFries delievered"<<endl;}
	
		else if(n==6)
	{
	total=total+30;
	cout<<"\tSamosa delievered"<<endl;}
	
		else if(n==7)
	{
	total=total+60;
	cout<<"\tPettes delievered"<<endl;}
	
		else if(n==8)
	{
	total=total+120;
	cout<<"\tBrownies  delievered"<<endl;}
	
		else if(n==9)
	{
	total=total+100;
	cout<<"\tSnacks delievered"<<endl;}
	
		else if(n==10)
	{
	total=total+140;
	cout<<"\tItalian Sandwitch delievered"<<endl;}
	
		else if(n==11)
	{
	total=total+80;
	cout<<"\tDrinks delievered"<<endl;}
	
		else if(n==12)
	{
	total=total+70;
	cout<<"\tCoffee delievered"<<endl;}
	
		else if(n==13)
	{
	total=total+250;
	cout<<"\tMacroni delievered"<<endl;}
	
		else if(n==14)
	{
	total=total+130;
	cout<<"\tShakes delievered"<<endl;}
	
		else if(n==15)
	{
	total=total+60;
	cout<<"\tChai delievered"<<endl;}
	
		else if(n==16)
	{
	total=total+30;
	cout<<"\tBiscuits delievered"<<endl;}
	
		else if(n==17)
	{
	total=total+50;
	cout<<"\tChocolate delievered"<<endl;}
	
		else if(n==18)
	{
	total=total+200;
	cout<<"\tRoti delievered"<<endl;}

    cout<<"\nDo you want to select another Item(press 'Y')";
	cin>>opt;    
    
    
	}while(opt == 'Y' || opt == 'y');
	cout<<endl;
	 cout<<"Total Rs. : "<<total;
	 cout<<"\n\n\tTHANKS FOR COMING"<<endl;}


// game



void game()
{
	int c;
	g();}

double g()
{
	

	
	cout<<"\t\t\t\t WELCOME TO THE GAME \t\t\t\t"<<endl<<endl;
	cout<<"\t\t\tPRESS 1 TO ENTER THE GAME\t\t\t";
	cin>>e;
	cout<<endl<<endl;
	if(e==1)
	{
	cout<<"\t\t\t------------------------------------------------\t\t"<<endl;
    cout<<"\t\t\t\tT I C K  T A C  T O E  G A M E \t\t\t\t"<<endl;
    cout<<"\t\t\t------------------------------------------------\t\t"<<endl;
    cout<<"\n\t\t\t\tFOR 2 PLAYERS\n\t\t\t";
    while(gameover())
	{
        dash_board();
        user_turn();
        gameover();
    }
    if(turn == 'X' && tie == false){
        cout<<"\n\n\t\t\tCongratulations!Player with 'O' has won the game\n\n";
    }
    else if(turn == 'O' && tie == false){
        cout<<"\n\n\t\t\tCongratulations!Player with 'X' has won the game";
    }
    else
    cout<<"\n\nGAME DRAW!!!\n\n";}
		
else if(e!=1)
		cout<<"\t\t\t\t NONE \t\t\t\t";}



void dash_board()
{
    cout<<endl<<"\t\t\tPLAYER-1 [X]\t||\tPLAYER-2 [O]\n\n"<<endl;
    cout<<"\t\t\t     |     |     "<<endl;
    cout<<"\t\t\t  "<<board[0][0]<<"  | "<<board[0][1]<<"   |  "<<board[0][2]<<" "<<endl;
    cout<<"\t\t\t_____|_____|_____"<<endl;
    cout<<"\t\t\t     |     |     "<<endl;
    cout<<"\t\t\t  "<<board[1][0]<<"  | "<<board[1][1]<<"   |  "<<board[1][2]<<" "<<endl;
    cout<<"\t\t\t_____|_____|_____"<<endl;
    cout<<"\t\t\t     |     |     "<<endl;
    cout<<"\t\t\t  "<<board[2][0]<<"  | "<<board[2][1]<<"   |  "<<board[2][2]<<" "<<endl;
    cout<<"\t\t\t     |     |     "<<endl;
}
void user_turn()
{
    if(turn == 'X')
	{
        cout<<"\n\tPlayer-1 [X] turn : ";
    }
    else if(turn == 'O')
	{
        cout<<"\n\tPlayer-2 [O] turn : ";
    }
    cin>>option;
    switch(option)
	{
        case 1: row=0; column=0; 
		break;
        case 2: row=0; column=1; 
		break;
        case 3: row=0; column=2; 
		break;
        case 4: row=1; column=0; 
		break;
        case 5: row=1; column=1; 
		break;
        case 6: row=1; column=2; 
		break;
        case 7: row=2; column=0;
		break;
        case 8: row=2; column=1; 
		break;
        case 9: row=2; column=2; 
		break;
        default:
            cout<<"Invalid Move";
    }
    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
	{
        board[row][column] = 'X';
        turn = 'O';
    }
	else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'O';
        turn = 'X';
    }
	else 
	{
        cout<<"\t\tBox already filled!\n Please choose another!!\n\n";
        user_turn();
    }
    dash_board();
}
bool gameover()
{
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;
    tie = true;
    return false;
}
