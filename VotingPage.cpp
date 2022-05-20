
#include"Weeklist.h"
#include"VotingPage.h"
#include<iostream>
#include<cstring>

using namespace std;

void VotingPage::broadcast(int comp_date)
{
   competitonDate = comp_date;
}
void VotingPage::countingTime(string com_time)
{
  Time = com_time;
}
void VotingPage::allowVote(char cName,int cNo,string ctime)
{
  strcpy(competitorName,cName);
  performanceNo = cNo;
  Time = ctime;
};