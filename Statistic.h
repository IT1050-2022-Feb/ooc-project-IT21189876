#include<iostream>
#include<string>

using namespace std;

//statistic class
class statistic{
protected:
  int performanceNo;
private:
	int date;
	
public:
  
  void getData(int perfNo,int pdate);
  int calculateVotes(int Perfno);
	void storeVotes();
};