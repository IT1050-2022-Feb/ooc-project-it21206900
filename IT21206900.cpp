#include<string>
#include<iostream>
using namespace std;
//User Class
class user
{
	protected:
		string name;
		string address;
		int phoneNumber;
	
	public:
    user();
    user(string uName, string uAddress, int uPhNo);
		void addcustomerDetails();
    ~user;
};

user::user(){
  
}

user::user(string uName, string uAddress, int uPhN){
  name = uName;
  address = uAddress;
  phoneNumber = uPhNo;
}

void user:: addcustomerDetails(){
  
}

user::~user(){
  
}

//class registered customer

class RegisteredCustomer: public user
{
	protected:
	    string userName;
		  string password;
      Feedback *fb;
	
	public:
	    RegisteredCustomer();
      RegisteredCustomer(string RegCusUsername, string   RegCusPassword,);
      void addLoginDetails();
		  void addFeedback(Feedback *fb) ;
      ~RegisteredCustomer;
};

RegisteredCustomer::RegisteredCustomer(){
  
}

RegisteredCustomer::RegisteredCustomer(string RegCusUsername, string RegCusPassword){
  userName = RegCusUsername;
  password = RegCusPassword;
  
}

void RegisteredCustomer::addLoginDetails(){
  
}

void RegisteredCustomer::addFeedback(Feedback *fb){
  
}

RegisteredCustomer::~RegisteredCustomer(){
  
}

//class feedback
class  feedback:
{
	private:
		string FeedbackID;
		string comment;
    RegisteredCustomer *cus;
		
	public:
    feedback();
    feedback(string fID, string fcomment, RegisteredCustomer *rCus);
		void displayFeedback;
    ~feedback;
};

feedback::feedback(){
  
}

feedback::feedback(string fID, string fcomment, RegisteredCustomer *rCus){
  FeedbackID = fID;
  comment = fcomment;
}

void feedback::displayFeedback(){
  
}

feedback::~feedback(){
  
}


int main (){
  
  user us("Janaka", "13/A,Colombo 7",0713456789);
  us.addcustomerDetail();
  
  RegisteredCustomer RegCus("Janka33","Jan@5344");
  RegCus.addLoginDetails();
  RegCus.giveFeedback();

  feedback fd("f1322","GG");
  fd.displayFeedback();

  return 0;
  
}


