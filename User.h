//user class
class User {
protected :
	char username[50];
	char password[20];

public:
	User();
	User(char username[],char Password[]); //login
	void visitwebsite();
	void viewAccount(string acc);
	void viewWeeklist(int date);
	void watchVideos();
};