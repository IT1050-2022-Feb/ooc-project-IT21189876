#include"Review.h"
#include<iostream>
#include<cstring>

using namespace std;

//Review implementation
Review::Review(){}

//display the details
Review::Review(int pid,string pvotername,int pvideoid){
	id = pid;
	votername = pvotername;
	videoid = pvideoid;
}
void Review::storer()
{
	cout<<"id: " << id << endl;
	cout<<"votername: " << votername << endl;
	cout<<"videoid: " << videoid << endl;
};