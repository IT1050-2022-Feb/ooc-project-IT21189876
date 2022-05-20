//DONE BY: Mendis N.U.P.S. it21190070
//my github account got suspended accidently,


#include"Video.h"
#include"Competitor.h"
#include<iostream>
#include<string>

using namespace std;

//Video class method implementation
Video::Video(){}

Video::Video(int vid, string vname, string compname)
{
    videoId = vid;
    name = vname;
    competitorsname = compname;
}

void Video::allowReviwes(int video_id)
{
  videoId = video_id;
}

void Video::diplay(){
    cout<<"Video name: "<<name<<endl;
    cout << "Competitor name : " << competitorsname << endl;
}

Video::~Video() 
{
  cout << "Video doesnot exixts"<< endl;
};