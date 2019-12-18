#include "patient.h"
using namespace std;
patient :: patient(){
name="unknown";
age=0;
history="no history";	
};
patient :: patient(string x,int y,string z){
name=x;
age=y;
history=z;	
};
void patient :: setname(string x){
	name=x;
}
void patient :: setage(int x){
	age=x;
}
void patient :: sethistory(string x){
	history=x;
}
string patient :: getname(){
	return name;
}
string patient :: gethistory(){
	return history;
}
int patient:: getage(){
	return age;
}

