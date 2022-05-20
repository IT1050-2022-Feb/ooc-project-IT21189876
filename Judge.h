
//DONE BY: Mendis N.U.P.S. it21190070
//my github account got suspended accidently,


#include<iostream>
#include<string>

using namespace std;

//Judge Class
class Judge {
    private:
        string name;
        string judgeid;

    public:
        Judge();
        Judge(string name, string judgeid);//get details
        void checkAcuracy();

};