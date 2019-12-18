#include "hospital.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
Hospital :: Hospital(){
department1="Neurology";
department2="Oncology";
department3="Emergency department";
department4="Obstetrics";
rooms=10;
};
int Hospital :: getroomsnumber(){
	return rooms;
}
string Hospital ::getdepartment1(){
	return department1;
}
string Hospital ::getdepartment2(){
	return department2;
}
string Hospital ::getdepartment3(){
	return department3;
}
string Hospital ::getdepartment4(){
	return department4;
}
void Hospital ::getrepost(){
	string line;
	ifstream myfile("patients_name.txt");
	cout<<"all patients data"<<endl;
   if(myfile.is_open()){
	while(getline(myfile,line)){
	cout << line << '\n';
	}
   myfile.close();
	}
   else{
	cout << "Unable to open file";}
	string line2;
	ifstream myfile2("doctors_name.txt");
	cout<<"all doctors data"<<endl;
   if(myfile2.is_open()){
	while(getline(myfile2,line2)){
	cout << line2 << '\n';
	}
   myfile2.close();
	}
   else{
	 cout << "Unable to open file";
}
string line3;
	ifstream myfile3("rooms.txt");
	cout<<"all rooms data"<<endl;
   if(myfile3.is_open()){
	while(getline(myfile3,line3)){
	cout << line3 << '\n';
	}
   myfile3.close();
	}
   else{
	 cout << "Unable to open file";
}
}


