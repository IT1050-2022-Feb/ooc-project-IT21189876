#include<iostream>
#include<string>

using namespace std;

//Review class
class Review{
private:
	int id;
	string votername;
	int videoid;
	
public:
	Review();
	Review(int pid,string pvotername,int pvideoid);
	void storer();
	void display();
	
};