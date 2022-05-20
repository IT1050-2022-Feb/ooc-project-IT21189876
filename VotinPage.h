#include"Webpage.h"
#include<iostream>
#include<cstring>

class voting_page: public Webpage
{
    private:
        char competitorName[50];
        int performanceNo;
       
    public:
        int competitonDate;
        int Time;
        void broadcast(int comp_date);
        void countingTime(string com_time);
        void allowVote(char cName,int cNo,string ctime);

};