#include"main.sh"
#include<iostream>
#include<cstring>
#include<string>
#include"Competitor.h"
#include"Judge.h"
#include"Registration.h"
#include"Review.h"
#include"Statistic.h"
#include"TeamsPage.h"
#include"User.h"
#include"Video.h"
#include"Voter.h"
#include"VotingPage.h"
#include"Webpage.h"
#include"Weeklist.h"
#include"VoterAccount.h"


using namespace std;

int main()
{
  Voter v1; //voter objects
  Statistic s1; //statistic object
  Votingpage vp4; //voting page object


  //voter class
  v1.setDetails("Harshani", 0713245670, "has200@gmail.com" );
  v1.addComments();


  //competitor class
  Competitor *c1;
  c1 = new Competitor("Thamal", 23, 02091999, "Unmarried" ,"Galle");

    //judge class
  Judge *j1;
  j1 = new Judge("Lahiru" , 12563 );

  //registration class
  Regristration *reg1;
  reg1 = new Registration("Amal" , 0777510021,"amal99", "njmk9753m");

  //review class
  Review *rev1;
  rev1 = new Review(120,"Gihan",11);
  rev1.storer();

  //statistic class
  s1.getData(456 , 03052021);
  s1.calculateVotes();

    //teams page class
  TeamsPage *tp1;
  tp1 = new TeamsPage("Competitor Page");
  tp1.storePerformance();

    //user class
  User *user1;
  user1 = new User("amal99", "njmk9753m");
  user1.viewAccount("Competitor");
  user1.viewWeeklist(06112021);

  //webpage class
  Webpage *w1;
  w1 = new Webpage("Competitor Page");

  //voter page
  VoterAccount *VA1;
  VA1 = new VoterAccount("Harshani", 120);
  
  //week list class
  Weeklist *week1;
  week1 = new Weeklist("Thamal" , 3, 06112021);

  //voting page class
  vp4.broadcast(06112021);
  vp4.countingTime("06:35");
  vp4.allowVote("Thamal" , 3);

  
  
  
  

  
  

 

  

    

  
return 0;
  
}