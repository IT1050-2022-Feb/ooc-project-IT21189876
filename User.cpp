#include"User.h"
#include"Weeklist.h"
#include"Webpage.h"
#include<iostream>
#include<cstring>

using namespace std;

//user class implimentation
User::User(){}

User::User(char pusername[],char Password[]) {
	strcpy(username,pusername);
	strcpy(password,Password);
}

void User::visitwebsite(){}
void User::viewAccount(string acc)
{
  wname = acc;
}
void User::viewWeeklist(int date)
{
  competitionDate = date;
}
void User::watchVideos(){};