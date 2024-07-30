#include<iostream>
#include<string>
#include<vector>
using namespace std;
class User{
     private:
	   string username,password;
	 public:
	   User(string name,string pass){
	   	username=name;
	   	password=pass;
	    }	
	    string getUsername(){
	    	return username;
		}
    	string getPassword(){
			return password;				
		}
};
class UserManager{
	private:
		vector<User>users;
    public:
    	void ReisterUser(){ 
    	  string username,password;
    	  cout<<"\t\tEnter User name:";
    	  cin>>username;
    	  cout<<"\t\tEnter password:";
    	  cin>>password;
    	  
    	  User newUser(username,password);
    	  users.push_back(newUser);
    	  cout<<"\t\t User Register Successful...."<<endl;
    	  	}
    	  	bool LoginUser(string name,string pass){
			  for(int i=0;i<users.size();i++){
			  if(users[i].getUsername()==name && users[i].getPassword()==pass){
			  		cout<<"\t\tLogin Succesfully..."<<endl;
                    return true;		  		
				  }
			  }
			  cout<<"\t\tInvalid User Name or Password.."<<endl;
			  return false;
			  }
			  void showUser(){
			  	cout<<"\t\t---User List---"<<endl;
			  	for(int i=0;i<users.size();i++){
			  		cout<<"\t\t"<<users[i].getUsername()<<endl;
				  } 
		    }
		   void searchUser(string username){
		   	for(int i=0;i<users.size();i++){
		   		if(users[i].getUsername ()== username){
		   			cout<<"\t\t Userfound"<<endl;
				   }
			   }
		   }
    	  	void deleteUser(string username){
    	  		for(int i=0;i<users.size();i++){
    	  			if(users[i].getUsername ()==username){
    	  				users.erase(users.begin()+i);
    	  				cout<<"\t\tUser Remove Seccessfully...."<<endl;
     			   }
			  }
		    }
};
main(void){
	UserManager usermanage;
	
	 int op;
	 char choice;
	 do{
	 	 system("cls");
	 	 cout<<"\n\n\t\t1.Register User"<<endl;
     	 cout<<"\t\t2.Login"<<endl;
	     cout<<"\t\t3.Show User List"<<endl;
	     cout<<"\t\t4.Search User"<<endl;
	     cout<<"\t\t5.Delete User"<<endl;
	     cout<<"\t\t6.Exit"<<endl;
    	 cout<<"\t\tEnter Your Choice:";
     	 cin>>op;
     switch(op){
	   	case 1:{
	 		usermanage.ReisterUser();
	 		break;
	    }
	    case 2:{
	    	string Username,Password;
	    	cout<<"\t\tEnter User :";
	    	cin>>Username;
	    	cout<<"\t\tEnter password :";
	    	cin>>Password;
	    	usermanage.LoginUser(Username,Password);
			break;
	    }  
	     case 3:{
	     	usermanage.showUser();
			break;
		 }
		 case 4:{
		 	string username;
		 	cout<<"\t\tEnter User Name :";
		 	cin>>username;
		 	usermanage.searchUser(username);
			break;
		 }
		 case 5:{
		 	string username;
		 	cout<<"\t\tEnter User Name :";
		 	cin>>username;
			usermanage.deleteUser(username);
			break;
		 }
      }
	 cout<<"\t\tDo You Want to Continue[YES/NO]? :";
	 cin>>choice;
	 }while(choice == 'y'||choice == 'Y');
	 }



