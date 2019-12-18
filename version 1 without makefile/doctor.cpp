#include "doctor.h"
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
Doctor :: Doctor(){};
Doctor ::Doctor(string x,int y,string z,int g){
	name=x;
	age=y;
	department=z;
	number_of_patients=g;
};
void Doctor :: setname(string x){
	name=x;
}
void Doctor :: setage(int x){
	age=x;
}void Doctor :: setdepart(string x){
	department=x;
}
void Doctor :: setnumber_of_patient(int x){
	number_of_patients=x;
}
string Doctor :: getname(){
	return name;
}
int Doctor :: getage(){
	return age;
}
string Doctor :: getdepart(){
	return department;
}
int Doctor :: getnumber_of_patient(){
	return number_of_patients;
}
void Doctor :: editpatienthistory(string x){
	patient_history=x;
}
string Doctor :: geteditpatienthistory(){
	return patient_history;
}
void Doctor ::roomsvalidator (){
string x;
string y;
   ofstream myfile3("rooms.txt",ios::app);
	ifstream myfile;
	myfile.open("count.txt");
if (myfile.is_open()){
while(getline (myfile,x)) 
{
 y=x;
}
myfile.close();
}
else
{
cout << "Unable to open file"; 
}
stringstream geek(y);
int count;
geek>>count;
	int z=count+1;
	ofstream myfile2;
	myfile2.open("count.txt");
	myfile2<<z<<endl;
	myfile2.close();
if(z<=10){
	cout<<"you can reserve the room ";
	cout<<z<<endl;
	myfile3<<"you can reserve the room"<<" "<<z<<endl;
}	
	else {
		cout<<"all rooms are busy"<<endl;
	}
}

   
