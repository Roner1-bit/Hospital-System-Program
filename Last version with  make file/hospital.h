#include <string>
#include <fstream>
using namespace std;
class Hospital {
private:
string department1;
string department2;
string department3;
string department4;
int rooms;
public:
	Hospital();
	string getdepartment1();
	string getdepartment2();
	string getdepartment3();
	string getdepartment4();
	int getroomsnumber();
	void getrepost();
};
