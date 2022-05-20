#include"user.h"
#include<iostream>
#include<string>

class Voter: public User
{
    private:
        string name;
        int telNo;
        string email;
    
    public:
        void setDetails(string vname, int vtelNo, string vemai);
        void watchLiveperfomance();
        void vote(string vo_name, int vo_tel);
        void addComments(string v_name);
        void editProfile();
};
