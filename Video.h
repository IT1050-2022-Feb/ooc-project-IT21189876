//DONE BY: Mendis N.U.P.S. it21190070
//my github account got suspended accidently,


#include"Competitor.h"
#include<iostream>
#include<string>

using namespace std;

class Video {
    private:
        string name;
        int videoId;
    public:
        string competitorsname;
        Video();
        Video(int vid, string vname, string compname); //store the video details
        void allowReviwes(int video_id);
        void diplay();
        ~Video();
};