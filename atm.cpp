#include <iostream>
#include <string>
#include<fstream>
#include<windows.h>
using namespace std;
  struct costomer{ int id_costomer;
  	struct name_costmer{string first_name;string second_name;string last_name;}name;
  	string gender ;
  	int age;
  	string address;
    unsigned int phone_number;
  	int account_number;
  	int account;
  	int pin;
    };
    void list();
    void lest2();
    void show();
    void deletc();
    void editc();
    void atm_systemc();
    // void exitc();
    costomer c[20];
    void check();
    void drow();
    void Deposit();
    void exchang();
    int exchaing;
    int ex;
  
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++  function   main    ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  int main()
{  
	system("cls");
		system("color e0");
		string username ;
		string user="nader";
		int passwordee ,countermain=1;
		int pass=2020;
		cout<<"\n\n\n";
		cout<<"\t\t\t\t*---------------------------------*\n";
		cout<<"\t\t\t\t|-WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW-|\n";
		cout<<"\t\t\t\t|-W                             W-|\n";
  		cout<<"================================|-W wlcome to in sevice of ATM  W-|==============================================\n";
  		cout<<"\t\t\t\t|-W                             W-|\n";
  		cout<<"\t\t\t\t|-WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW-|\n";
  		cout<<"\t\t\t\t*---------------------------------*\n"; 
  		cout<<"__________________________________________________________________________________________________________________\n\n";
		cout<<"------------------------------------------------------------------------------------------------------------------\n";
		cout<<"  please enter the user name  ";
		cout<<"and enter the password to login the system  :\n ";
		cout<<"-----------------------------------------------------------------------------------------------------------------\n";
		
		cout<<"===========================================\n";
		cout<<"=  you have three attempts to login ( "<< countermain<<" ) =\n";
		cout<<"===========================================\n\n";
		
		cout <<" USER NAME :\t";
		getline(cin,username,'\n');
		cout<<"\n PASSWORD :\t";
		cin>>passwordee;
        cin.ignore();
		while(countermain<3)	{

			countermain++;
			if(passwordee==pass&&username==user) list();
			else{
			cout<<"===========================\n";
			cout<<"=  please try agian ( "<< countermain<<" ) =\n";
			cout<<"===========================\n\n";
			cout <<" USER NAME :\t";
			getline(cin,username,'\n');
			cout<<"\n PASSWORD :\t";
			cin>>passwordee;
	        cin.ignore();
			
			}
		    }
			exit(0);
	
	return 0;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++  insert   customer  ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  
  void  insert_customer(){
  	
  	
  	system("color b0");
  	system("cls");
  	ofstream customerfile("customer.txt" ,ios ::app);
  	if( !customerfile){
	  	cerr<<" File could not be opened"<<endl;
	  	exit(EXIT_FAILURE);
	  }
	  	cout<<"\n\n\n";
	    cout<<"\t\t\t\t\t=========================================\n";
	    cout<<"\t\t\t\t\t=     THE LIST OF THE ADD COUSTOMER     =\n";
	    cout<<"\t\t\t\t\t=========================================\n";
	    cout<<"------------------------------------------------------------------------------------------------------------------\n";
	    cout<<"\t\t\t\t\tPlease Enter the information about customer :  \n";
	    cout<<"------------------------------------------------------------------------------------------------------------------\n";
	   	for( int i=0;i<20;i++){
    	cout<<"Enter id_costomer  of customer :  ";
	g1:	cin>>c[i].id_costomer;
        cin.ignore();
		if (c[i].id_costomer<=0 )
		{	
			cout<<"Please Enter Numbers Between  ( 1  to  9 )\t :";
            goto g1;
		}	
	
	   	cout<<"Enter first_name  of customer :  ";
      g2:  getline(cin,c[i].name.first_name,'\n');
        	if (c[i].name.first_name<="9"||c[i].name.first_name>="0"&&c[i].name.first_name.length()==2)
		{
			cout<<"Please Enter Letters ( a ,b,c,d...,z  and don't less the  lenght for 3 lettera )\t : ";
            goto g2;
		}
		
        cout<<"Enter second_name  of customer :  ";
     g3:   getline(cin,c[i].name.second_name,'\n');
     			if (c[i].name.second_name<="9"||c[i].name.second_name>="0"&&c[i].name.second_name.length()==2)
		{
			cout<<"Please Enter Letters ( a ,b,c,d...,z  and don't less the  lenght for 3 lettera)\t : ";
            goto g3;
		}
        
        cout<<"Enter last_name  of customer :  ";
     g4:   getline(cin,c[i].name.last_name,'\n');
        	if (c[i].name.last_name<="9"||c[i].name.last_name>="0"&&c[i].name.last_name.length()==2)
		{
			cout<<"Please Enter Letters ( a ,b,c,d...,z  and don't less the  lenght for 3 lettera)\t : ";
            goto g4;
		}
				
        cout<<"Enter  gender of customer :  ";
     g5 :  getline(cin,c[i].gender,'\n');
        	if(c[i].gender!="Male"&&c[i].gender!="male"&&c[i].gender!="MALE"
			&&c[i].gender!="Female"&&c[i].gender!="FEMALE"&&c[i].gender!="female")
      	{
	       cout<<"Please Enter(  Male Or Female  )\t :";
        goto g5;
        }
        
        cout<<"Enter age of customer :  ";
     g6 :  cin>>c[i].age;
   		  cin.ignore();
   		  	if (c[i].age<15 ||c[i].age>=119)
      	{
	      cout<<"Please Enter Age In Range ( 15   TO 120 )\t :";
	      	
	      goto g6;
      	}
   		  
        
        cout<<"Enter  address of customer :  ";
     g7:   getline(cin,c[i].address,'\n');
       		if (c[i].address<="9"||c[i].address>="0"&&c[i].address.length()==2)
		{
			cout<<"Please Enter Letters ( a ,b,c,d...,z and don't less the  lenght for 3 lettera)\t : ";
            goto g7;
		}
        
        cout<<"Enter  phone of customer :  ";
      g8:  cin>>c[i].phone_number;
        cin.ignore();
        	if(c[i].phone_number<730000000&&c[i].phone_number>739999999)
			      	{
				    	cout<<"Please Enter Numbers 9 Digits  \t :";
				    	
				    	goto g8;
			        }
	        if (c[i].phone_number<710000000&&c[i].phone_number>779999999)
	        	{
			    	cout<<"Please Enter Numbers 9 Digits  \t :";
			    	
			    	goto g8;
	        	}
       		if(c[i].phone_number<770000000&&c[i].phone_number>779999999)
        		{
			    	cout<<"Please Enter Numbers 9 Digits  \t :";
			    	
			    	goto g8;
	        	}
        
        cout<<"Enter account_number of customer :  ";
      g9:  cin>>c[i].account_number;
        cin.ignore();
        	 if(c[i].account_number<=0)
		       {
  		 	   	  cout<<"Please Enter Numbers Between  ( 1  to  9 )\t :";
		       	  goto g9;
		       }
        
        
         cout<<"Enter  account of customer :  ";
	    g10:    cin>>c[i].account;
	        cin.ignore();
	        	 if(c[i].account<5000)
		       {  
		          cout<<"don't allowed login less ( 5000 ) :  \n";
		       	  goto g10;
		       }
        
        cout<<"Enter  PIN of customer :  ";
      g11:  cin>>c[i].pin;
        cin.ignore();
        		 if(c[i].pin<=0)
		       {
		       	  cout<<"Please Enter Numbers Between  ( 1  to  9 )\t :";
		       	  goto g11;
		       }
        
        customerfile<<c[i].id_costomer<<"\t"
					<<c[i].name.first_name<<"\t"
    				<<c[i].name.second_name<<"\t"
    				<<c[i].name.last_name<<"\t"
    				<<c[i].gender<<"\t"
    				<<c[i].age<<"\t"
    				<<c[i].address<<"\t"
    				<<c[i].phone_number<<"\t"
    				<<c[i].account_number<<"\t"
    				<<c[i].account<<"\t"
    				<<c[i].pin<<"\t"
    				<<"\n";
    				customerfile.close();
 			cout<<"\t\t\t\t-----------------------------------------------\n";
	    	cout<<"\t\t\t\t- are you want to add anther costomer (y/n) : -\n";
	    	cout<<"\t\t\t\t-----------------------------------------------\n";
  		char add;
  		cin>>add;
  		if (add=='y'||add=='Y'){insert_customer();}
  		 
  		else 
  		break;
  		
  		
	    } 
		
 		system("cls");
	    list();
	         	
  	
  }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++   show    customer  ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void show (){
	system("cls");
	system("color e0");
  	cout<<"\n\n\n";
  	cout<<"\t\t\t\t===================================================\n";
	cout<<"\t\t\t\t=   the list of show  informaion abuot customer   =\n";
	cout<<"\t\t\t\t===================================================\n";
	cout<<"-------------------------------------------------------------------------------------------------------------\n";
 	
	 costomer c;
	ifstream reader;
	reader.open("customer.txt");
	//reader.seekg(0);
	while(!reader.eof())  {
		        reader>>c.id_costomer;
				reader.ignore(1000,'\t');
				
			    getline(reader,c.name.first_name,'\t');
			    getline(reader,c.name.second_name,'\t');
			    getline(reader,c.name.last_name,'\t');
			    getline(reader,c.gender,'\t');
				reader>>c.age;
				reader.ignore(1000,'\t');
				getline(reader,c.address,'\t');
				reader>>c.phone_number;
				reader.ignore(1000,'\t');
				reader>>c.account_number;
				reader.ignore(1000,'\t');
				reader>>c.account;
				reader.ignore(1000,'\t');
				reader>>c.pin;
				reader.ignore(1000,'\t');
				
				cout<<c.id_costomer<<"\t"
    				<<c.name.first_name<<"\t"
    				<<c.name.second_name<<"\t"
    				<<c.name.last_name<<"\t"
    				<<c.gender<<"\t"
    				<<c.age<<"\t"
    				<<c.address<<"\t"
    				<<c.phone_number<<"\t"
    				<<c.account_number<<"\t"
    				<<c.account<<"\t"
    				<<c.pin<<"\n";
				
		
	}
	reader.close();
	cout<<"-------------------------------------------------------------------------------------------------------------\n";
	cout<<"please enter______( 1_to back  )______ \t:\t";
	int d;
	cin>>d;
	if(d==1)list();
	else exit(0);
	
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++  delete   customer  ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void deletc(){
	system("cls");
	system("color c0");
  	cout<<"\n\n\n";
  	cout<<"\t\t\t\t==========================================\n";
	cout<<"\t\t\t\t=    THE LIST OF THE DELETE COUSTOMER    =\n";
	cout<<"\t\t\t\t==========================================\n";
	cout<<"-------------------------------------------------------------------------------------------------------------\n";
	cout<<" Enter the customer ID that you want deleted  :  ";
	int cust_id;
	cin>>cust_id;
	
	ifstream reader("customer.txt");
		int counter=0;
		int test=0;
		for(int i=0;i<20;i++)
			{   
			    reader>>c[i].id_costomer;
			    
				reader.ignore(1000,'\t');
				
			    getline(reader,c[i].name.first_name,'\t');
			    getline(reader,c[i].name.second_name,'\t');
			    getline(reader,c[i].name.last_name,'\t');
			    getline(reader,c[i].gender,'\t');
				reader>>c[i].age;
				reader.ignore(1000,'\t');
				getline(reader,c[i].address,'\t');
				reader>>c[i].phone_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account;
				reader.ignore(1000,'\t');
				reader>>c[i].pin;
				reader.ignore(1000,'\t');
				
				if(cust_id==c[i].id_costomer)
				{
	 					test=1;
				}
				if(reader.eof())
				{
				break;
				}
				counter++;
				
			}
		if(test==0)
				{
						cout<<"not fond \n";
				}
				else
				{		cout<<"_______________________________________________________________________________________________________\n";
					  		
						cout <<"the process  exchang has been   successfully \n ";
 					 	cout <<"\t\t\t\t\t------\n";
						cout <<"\t\t\t\t\t= OK =\n";
						cout <<"\t\t\t\t\t------\n";
						cout<<"_______________________________________________________________________________________________________\n";
					  		
						
						ofstream customerfile("customer.txt");
		 				for(int i=0;i<counter;i++)
						{
			 				 if(cust_id!=c[i].id_costomer)
			 					 {
									
					  			   customerfile<<c[i].id_costomer<<"\t"
									  			<<c[i].name.first_name<<"\t"
							    				<<c[i].name.second_name<<"\t"
							    				<<c[i].name.last_name<<"\t"
							    				<<c[i].gender<<"\t"
							    				<<c[i].age<<"\t"
							    				<<c[i].address<<"\t"
							    				<<c[i].phone_number<<"\t"
							    				<<c[i].account_number<<"\t"
							    				<<c[i].account<<"\t"
							    				<<c[i].pin<<"\t"
							    				<<"\n";	
							    	
			                      }
			
						}
						
				}//reader.close();
				
			cout<<"\t\t\t\t--------------------------------------------------\n";
	    	cout<<"\t\t\t\t- are you want to delete anther costomer (y/n) : -\n";
	    	cout<<"\t\t\t\t--------------------------------------------------\n";
  		char add;
  		cin>>add;
  		if (add=='y'||add=='Y') deletc();
  		else 
  		{
		  system("cls");
  		list();  }

}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++  edite    customer  ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void editc(){
	system("cls");
	system("color e0");
  	cout<<"\n\n\n";
  	cout<<"\t\t\t\t===================================================\n";
	cout<<"\t\t\t\t=   the list of edite informaion abuot customer   =\n";
	cout<<"\t\t\t\t===================================================\n";
	cout<<"-------------------------------------------------------------------------------------------------------------\n";	
	cout<<"please enter the id of customer  who  want to edite information it  :  \n";
	int cust_id;
	cin>>cust_id;
	ifstream reader("customer.txt");
		int counter=0;
		int test=0;
		for(int i=0;i<20;i++)
			{   
			    reader>>c[i].id_costomer;
				reader.ignore(1000,'\t');
			    getline(reader,c[i].name.first_name,'\t');
			    getline(reader,c[i].name.second_name,'\t');
			    getline(reader,c[i].name.last_name,'\t');
			    getline(reader,c[i].gender,'\t');
				reader>>c[i].age;
				reader.ignore(1000,'\t');
				getline(reader,c[i].address,'\t');
				reader>>c[i].phone_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account;
				reader.ignore(1000,'\t');
				reader>>c[i].pin;
				reader.ignore(1000,'\t');
				
				if(cust_id==c[i].id_costomer)
				{
	 					test=1;
				}
				if(reader.eof())
				{
				break;
				}
				counter++;
				
			}
		if(test==0)
				{
						cout<<"not fond \n";
				}
				else
				{
					cout<<"   please enter choosing in (   1_edite account   " 
	   					 <<"2_edite phone number 3_edite pin     4_edite address  ) :\n";
							int choos;
							cin>>choos;
					
						ofstream customerfile("customer.txt");
		 				for(int i=0;i<counter;i++)
						{
                          if(cust_id==c[i].id_costomer){
                          	                          
						 	if(choos==1){ 
						 	cout<<"please enter the new  account   : ";
						 	int account; 
				 		    cin>>account;
					        c[i].account=account;}
					        if(choos==2){ 
						 	cout<<"please enter the new  number of phone   : ";
						 	int phone; 
				 		    cin>>phone;
					        c[i].phone_number=phone;}
					        if(choos==3){ 
						 	cout<<"please enter the new  pin   : ";
						 	int pin2; 
				 		    cin>>pin2;
					        c[i].pin=pin2;}
					        if(choos==4){ 
						 	cout<<"please enter the new  address   : ";
						 	string address2; 
				 		    cin>>address2;
					        c[i].address=address2;	
							
							}
			 				cout<<"_______________________________________________________________________________________________________\n";
					  			 
		  			   		cout <<" the process  editing has been   successfully \n ";
							cout <<"\t\t\t\t\t------\n";
							cout <<"\t\t\t\t\t= OK =\n";
							cout <<"\t\t\t\t\t------\n";
							cout<<"_______________________________________________________________________________________________________\n";
					  			
							    	
            			
            				    	}customerfile<<c[i].id_costomer<<"\t"
									  			<<c[i].name.first_name<<"\t"
							    				<<c[i].name.second_name<<"\t"
							    				<<c[i].name.last_name<<"\t"
							    				<<c[i].gender<<"\t"
							    				<<c[i].age<<"\t"
							    				<<c[i].address<<"\t"
							    				<<c[i].phone_number<<"\t"
							    				<<c[i].account_number<<"\t"
							    				<<c[i].account<<"\t"
							    				<<c[i].pin<<"\t"
							    				<<"\n";
							    				
							    				
						}customerfile.close();
								
								cout<<"\t\t\t\t--------------------------------------------------\n";
						    	cout<<"\t\t\t\t- are you want to edite  anther costomer (y/n) : -\n";
						    	cout<<"\t\t\t\t--------------------------------------------------\n";
					  		char add;
					  		cin>>add;
					  		if (add=='y'||add=='Y'){editc();}
							 else list();
							  	
				}			
	
  }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++     ATM  system     ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	void atm_systemc(){
		
		system("cls");
		cout<<"\n\n\n";
		cout<<"\t\t\t\t===================================\n";
  		cout<<"\t\t\t\t=  wlcome  to  in   ATM  system   =\n";
  		cout<<"\t\t\t\t===================================\n\n";
  		
		cout<<"-------------------------------------------------------------------------------------------------------------\n";
		
		cout<<"please enter your pin to login  :    ";
		int pass;
		cin>>pass;
		ifstream reader("customer.txt");
		int counter=0;
		int test=0;
		for(int i=0;i<20;i++)
			{   
			    reader>>c[i].id_costomer;
			    
				reader.ignore(1000,'\t');
				
			    getline(reader,c[i].name.first_name,'\t');
			    getline(reader,c[i].name.second_name,'\t');
			    getline(reader,c[i].name.last_name,'\t');
			    getline(reader,c[i].gender,'\t');
				reader>>c[i].age;
				reader.ignore(1000,'\t');
				getline(reader,c[i].address,'\t');
				reader>>c[i].phone_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account;
				reader.ignore(1000,'\t');
				reader>>c[i].pin;
				reader.ignore(1000,'\t');
				
				if(pass==c[i].pin)
				{
	 					test=1;
				}
				if(reader.eof())
				{
				break;
				}
				counter++;
				
			}
		if(test==0)
				{
						cout<<"not fond \n";
				}
				else
				{
						ofstream customerfile("customer.txt");
		 				for(int i=0;i<counter;i++)
						{
				               if (pass==c[i].pin||pass!=c[i].pin)

			 					   customerfile<<c[i].id_costomer<<"\t"
									  			<<c[i].name.first_name<<"\t"
							    				<<c[i].name.second_name<<"\t"
							    				<<c[i].name.last_name<<"\t"
							    				<<c[i].gender<<"\t"
							    				<<c[i].age<<"\t"
							    				<<c[i].address<<"\t"
							    				<<c[i].phone_number<<"\t"
							    				<<c[i].account_number<<"\t"
							    				<<c[i].account<<"\t"
							    				<<c[i].pin<<"\t"
							    				<<"\n";	
      	 							// 		   customerfile.close();
      	 										pass++;
							    	  		}
							    	  		customerfile.close();
							    	  		lest2();
							    	  
						
				}
				
				
				 
	}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void lest2(){
	
	
		system("cls");
		system("color f0");
		cout<<"\n\n\n";
		cout<<"\t\t\t\t===================================\n";
  		cout<<"\t\t\t\t=  THE  LIST   OF  ATM   system   =\n";
  		cout<<"\t\t\t\t===================================\n";
	           
		cout<<"--------------------------------------------------------------------------------------------------------------------\n";
		cout<<"please enter the number of choose :\t\t  ";
		cout<<"1_Check Account\n\t\t\t \t\t\t  " ;
	 	cout<<"2_Draw Cash\n\t\t\t\t\t\t  " ;
		cout<<"3_Deposit Cash\n\t\t\t\t\t\t  " ;
		cout<<"4_Exchange Account\n\t\t\t\t\t\t  " ;
		cout<<"5_Back\n \n";
		cout<<"--------------------------------------------------------------------------------------------------------------------\n";
			int v;
			cin>>v;
			getchar();
		switch (v){
		case 1: 
	    check();    break;
	    case 2:
        drow();	 break;
	    case 3:
	    Deposit();	 break;
	   case 4:
	   exchang();	 break;
       case 5:
       list();	
        	default:{
					cout << "You entered wrong choices ,please Try again \n";
					}
					}

			
			

}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++  the  fanction of check the accuunt   ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++	
void check(){
	 	
	 	system("cls"); 
	 	cout<<"\n\n\n";
		cout<<"\t\t\t\t=========================================\n";
  		cout<<"\t\t\t\t=  welcome  to  check  the your account  =\n";
  		cout<<"\t\t\t\t=========================================\n\n";
  		cout<<"-------------------------------------------------------------------------------------------------------------\n";
		
		cout<<"please enter your number account  to check it   :    ";
		int check1;
		cin>>check1;
		
	     	ifstream reader("customer.txt");
	     	int accountck;
		int counter=0;
		int test=0;
		for(int i=0;i<20;i++)
			{   
			    reader>>c[i].id_costomer;
			    
				reader.ignore(1000,'\t');
				
			    getline(reader,c[i].name.first_name,'\t');
			    getline(reader,c[i].name.second_name,'\t');
			    getline(reader,c[i].name.last_name,'\t');
			    getline(reader,c[i].gender,'\t');
				reader>>c[i].age;
				reader.ignore(1000,'\t');
				getline(reader,c[i].address,'\t');
				reader>>c[i].phone_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account;
				reader.ignore(1000,'\t');
				reader>>c[i].pin;
				reader.ignore(1000,'\t');
				
				if(check1==c[i].account_number)
				{   
	 					test=1;
				}
				if(reader.eof())
				{
				break;
				}
				counter++;
				
			}
		if(test==0)
				{
						cout<<"don't have any account  \n";
				}
				else
				{
					
						ofstream customerfile("customer.txt");
		 				for(int i=0;i<counter;i++)
						{
			 				 if(check1==c[i].account_number)
 				 				
 				 			
			 					
			 					 { accountck=c[i].account;
								   
			                      }
			                      customerfile<<c[i].id_costomer<<"\t"
									  			<<c[i].name.first_name<<"\t"
							    				<<c[i].name.second_name<<"\t"
							    				<<c[i].name.last_name<<"\t"
							    				<<c[i].gender<<"\t"
							    				<<c[i].age<<"\t"
							    				<<c[i].address<<"\t"
							    				<<c[i].phone_number<<"\t"
							    				<<c[i].account_number<<"\t"
							    				<<c[i].account<<"\t"
							    				<<c[i].pin<<"\t"
							    				<<"\n";	
						    				
							    	 
						}customerfile.close();
						//customerfile.close();*/
			cout<<"your account (  "<<accountck<<"  )  \n";
			cout<<"_______________________________________________________________________________________________________\n";
					  		
			cout<<"\t\t\t\t-------------------------------------------------------------\n";
	    	cout<<"\t\t\t\t- are you want to check  anther account the costomer (y/n) : -\n";
	    	cout<<"\t\t\t\t--------------------------------------------------------------\n";
  		char add;
  		cin>>add;
  		if (add=='y'||add=='Y') check();
  		else 
  		{	system("cls");      lest2();  }

				
							
						
				}
			
			
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++  the  fanction of drow the accuunt   ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++	
void drow(){
	
		system("cls"); 
		cout<<"\n\n\n";
		cout<<"\t\t\t\t============================================\n";
  		cout<<"\t\t\t\t=  welcome  to  the drow list  of account  =\n";
  		cout<<"\t\t\t\t============================================\n\n";
		cout<<"-------------------------------------------------------------------------------------------------------------\n";
		
		cout<<"please enter your number account  to drow it   :    ";
		int check1;
		cin>>check1;
		
	     	ifstream reader("customer.txt");
	     	int accountdrow;
	     	int drow1;
		int counter=0;
		int test=0;
		for(int i=0;i<20;i++)
			{   
			    reader>>c[i].id_costomer;
			    
				reader.ignore(1000,'\t');
				
			    getline(reader,c[i].name.first_name,'\t');
			    getline(reader,c[i].name.second_name,'\t');
			    getline(reader,c[i].name.last_name,'\t');
			    getline(reader,c[i].gender,'\t');
				reader>>c[i].age;
				reader.ignore(1000,'\t');
				getline(reader,c[i].address,'\t');
				reader>>c[i].phone_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account;
				reader.ignore(1000,'\t');
				reader>>c[i].pin;
				reader.ignore(1000,'\t');
				
				if(check1==c[i].account_number)
				{   
	 					test=1;
				}
				if(reader.eof())
				{
				break;
				}
				counter++;
				
			}
		if(test==0)
				{
						cout<<"don't have any account  \n";
				}
				else
				{
					
						ofstream customerfile("customer.txt");
		 				for(int i=0;i<counter;i++)
						{
			 				 if(check1==c[i].account_number)
 				 				
 				 			
			 					
			 					 {
	 					 	
					  		cout<<"how mutch do you want withdrow your accunt :\t";
					  		cin>>accountdrow;
					  		int cooot=3;
								      while(cooot<=3&&cooot>0){
								      	--cooot;
								      if(c[i].account<accountdrow){
								      cout<<"don't allowed to drow larger than your account \n";
								      cout<<"your accuont (  "<<c[i].account<<"  ) \n";
							         cout<<"how mutch do you want withdrow your accunt :\t";
								      cin>>accountdrow;}
									  }
									  
									  c[i].account-=accountdrow;
				   				      drow1=c[i].account;
									  		
						   
						   cout<<"_______________________________________________________________________________________________________\n";
					  		
						   cout <<"the process  drow has been   successfully  \n ";
							cout <<"\t\t\t\t\t------\n";
							cout <<"\t\t\t\t\t= OK =\n";
							cout <<"\t\t\t\t\t------\n";
								   
			                      }
			                      customerfile<<c[i].id_costomer<<"\t"
									  			<<c[i].name.first_name<<"\t"
							    				<<c[i].name.second_name<<"\t"
							    				<<c[i].name.last_name<<"\t"
							    				<<c[i].gender<<"\t"
							    				<<c[i].age<<"\t"
							    				<<c[i].address<<"\t"
							    				<<c[i].phone_number<<"\t"
							    				<<c[i].account_number<<"\t"
							    				<<c[i].account<<"\t"
							    				<<c[i].pin<<"\t"
							    				<<"\n";	
						    				
							    	 
						}customerfile.close();
			cout<<"_______________________________________________________________________________________________________\n";		
			cout<<"your account (  "<<drow1<<"  )  \n";
			cout<<"_______________________________________________________________________________________________________\n";
			cout<<"\t\t\t\t--------------------------------------\n";
	    	cout<<"\t\t\t\t- are you want to drow again (y/n) : -\n";
	    	cout<<"\t\t\t\t--------------------------------------\n";
  		char add;
  		cin>>add;
  		if (add=='y'||add=='Y') drow();
  		else 
  		{	system("cls");      lest2();  }

				
							
						
				}
	
	
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++  the  fanction of Deposit the accuunt   ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++	
void Deposit(){
	
		system("cls"); 
		cout<<"\n\n\n";
		cout<<"\t\t\t\t====================================================\n";
  		cout<<"\t\t\t\t=  welcome  to  the Deposit  cash list  of account  =\n";
  		cout<<"\t\t\t\t====================================================\n\n";
		cout<<"-------------------------------------------------------------------------------------------------------------\n";
		
		cout<<"please enter  number account  to Deposit it   :    ";
		int check1;
		cin>>check1;
		
	     	ifstream reader("customer.txt");
	     	int accountdep;
	     	int drow1;
		int counter=0;
		int test=0;
		for(int i=0;i<20;i++)
			{   
			    reader>>c[i].id_costomer;
			    
				reader.ignore(1000,'\t');
				
			    getline(reader,c[i].name.first_name,'\t');
			    getline(reader,c[i].name.second_name,'\t');
			    getline(reader,c[i].name.last_name,'\t');
			    getline(reader,c[i].gender,'\t');
				reader>>c[i].age;
				reader.ignore(1000,'\t');
				getline(reader,c[i].address,'\t');
				reader>>c[i].phone_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account;
				reader.ignore(1000,'\t');
				reader>>c[i].pin;
				reader.ignore(1000,'\t');
				
				if(check1==c[i].account_number)
				{   
	 					test=1;
				}
				if(reader.eof())
				{
				break;
				}
				counter++;
				
			}
		if(test==0)
				{
						cout<<"do not any account  with this number  \n";
				}
				else
				{
					
						ofstream customerfile("customer.txt");
		 				for(int i=0;i<counter;i++)
						{
			 				 if(check1==c[i].account_number)
 				 				
 				 			
			 					
			 					 {
	 					 	
					  		cout<<"how mutch do you want with deposit your account :\t";
					  		cin>>accountdep;
						   c[i].account+=accountdep;
						   drow1=c[i].account;
						   cout<<"_______________________________________________________________________________________________________\n";
					  		
						   cout <<" the process  deposit has been   successfully \n ";
							cout <<"\t\t\t\t\t------\n";
							cout <<"\t\t\t\t\t= OK =\n";
							cout <<"\t\t\t\t\t------\n";
								   
			                      }
			                      customerfile<<c[i].id_costomer<<"\t"
									  			<<c[i].name.first_name<<"\t"
							    				<<c[i].name.second_name<<"\t"
							    				<<c[i].name.last_name<<"\t"
							    				<<c[i].gender<<"\t"
							    				<<c[i].age<<"\t"
							    				<<c[i].address<<"\t"
							    				<<c[i].phone_number<<"\t"
							    				<<c[i].account_number<<"\t"
							    				<<c[i].account<<"\t"
							    				<<c[i].pin<<"\t"
							    				<<"\n";	
						    				
							    	 
						}customerfile.close();
						//customerfile.close();*/
			cout<<"_______________________________________________________________________________________________________\n";			
			cout<<"   your account (  "<<drow1<<"   )  \n";
			cout<<"_______________________________________________________________________________________________________\n";
			cout<<"\t\t\t\t----------------------------------------------\n";
	    	cout<<"\t\t\t\t- are you want to deposit  again ( y / n ) : -\n";
	    	cout<<"\t\t\t\t----------------------------------------------\n";
  		char add;
  		cin>>add;
  		if (add=='y'||add=='Y') Deposit();
  		else 
  		{	system("cls");     lest2();  }

				
							
						
				}
	
	

}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++  the  fanction of exchang the accuunt   ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++	
void exchang(){
		system("cls"); 
	 	cout<<"\n\n\n";
		cout<<"\t\t\t\t============================================\n";
  		cout<<"\t\t\t\t=  welcome  to  exchang  list  =\n";
  		cout<<"\t\t\t\t============================================\n\n";
  		cout<<"-------------------------------------------------------------------------------------------------------------\n";
		 
		 cout <<"please enter  your  number accounte   :  ";
	   	 cin>>ex;
	   	 int conter4=1;
		
	     	ifstream reader("customer.txt");
	    
		int counter=0;
		int test=0;
		
		p:
		
		for(int i=0;i<20;i++)
			{   
			    reader>>c[i].id_costomer;
			    
				reader.ignore(1000,'\t');
				
			    getline(reader,c[i].name.first_name,'\t');
			    getline(reader,c[i].name.second_name,'\t');
			    getline(reader,c[i].name.last_name,'\t');
			    getline(reader,c[i].gender,'\t');
				reader>>c[i].age;
				reader.ignore(1000,'\t');
				getline(reader,c[i].address,'\t');
				reader>>c[i].phone_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account_number;
				reader.ignore(1000,'\t');
				reader>>c[i].account;
				reader.ignore(1000,'\t');
				reader>>c[i].pin;
				reader.ignore(1000,'\t');
				
				
				
				if(ex==c[i].account_number)
				{   
	 					test=1;
				}
				if(reader.eof())
				{
				break;
				}
				counter++;
				
			}
		if(test==0)
				{
						cout<<"do not  any account with the numder account \n"; 
						cout <<"     accure  error     \n\n ";
						ofstream customerfile("customer.txt");
		 				for(int i=0;i<counter;i++)
						{
			 				
 				 				    
			                      customerfile<<c[i].id_costomer<<"\t"
									  			<<c[i].name.first_name<<"\t"
							    				<<c[i].name.second_name<<"\t"
							    				<<c[i].name.last_name<<"\t"
							    				<<c[i].gender<<"\t"
							    				<<c[i].age<<"\t"
							    				<<c[i].address<<"\t"
							    				<<c[i].phone_number<<"\t"
							    				<<c[i].account_number<<"\t"
							    				<<c[i].account<<"\t"
							    				<<c[i].pin<<"\t"
							    				<<"\n";	
							    				
						    				
						}customerfile.close();
						
						while(conter4<=3)
						{
						conter4++;
						cout<<" please try agian \n\n ";
					    cin>>ex;
						goto p;
						
						} 
						lest2();
						
										
				}
				else
				{
					
						ofstream customerfile("customer.txt");
		 				for(int i=0;i<counter;i++)
						{
			 				 if(ex==c[i].account_number)
 				 				
 				 			
			 					
			 					 {
			 					 	  cout<<"please enter how mutch do you want exchang  it   : " ;
								      cin>>exchaing;
									  int cooot=3;
								      while(cooot<=3&&cooot>0){
								      	--cooot;
								      if(c[i].account<exchaing){
								      cout<<"don't allowed to exchang larger than your account \n";
								      cout<<"your accuont (  "<<c[i].account<<"  ) \n";
							         cout<<"please enter how mutch do you want exchang  it   : " ;
								      cin>>exchaing;}
									  
									  		}
      									
								      c[i].account-=exchaing;
								  
								  		}
  
								     	  
			 					 
								   
			                      
			                      customerfile<<c[i].id_costomer<<"\t"
									  			<<c[i].name.first_name<<"\t"
							    				<<c[i].name.second_name<<"\t"
							    				<<c[i].name.last_name<<"\t"
							    				<<c[i].gender<<"\t"
							    				<<c[i].age<<"\t"
							    				<<c[i].address<<"\t"
							    				<<c[i].phone_number<<"\t"
							    				<<c[i].account_number<<"\t"
							    				<<c[i].account<<"\t"
							    				<<c[i].pin<<"\t"
							    				<<"\n";	
							    				
						    				
						}customerfile.close();
							    	 
						}
						//customerfile.close();*/
			
							

		 
		 
		 
		 
     	cout<<"please enter number account  to exchang  to him   :    ";
		int check1;
		cin>>check1;
		
 	 ifstream reader2("customer.txt");
	    
		int counter2=0;
		int test2=0;
		for(int i=0;i<20;i++)
			{   
			    reader2>>c[i].id_costomer;
			    
				reader2.ignore(1000,'\t');
				
			    getline(reader2,c[i].name.first_name,'\t');
			    getline(reader2,c[i].name.second_name,'\t');
			    getline(reader2,c[i].name.last_name,'\t');
			    getline(reader2,c[i].gender,'\t');
				reader2>>c[i].age;
				reader2.ignore(1000,'\t');
				getline(reader2,c[i].address,'\t');
				reader2>>c[i].phone_number;
				reader2.ignore(1000,'\t');
				reader2>>c[i].account_number;
				reader2.ignore(1000,'\t');
				reader2>>c[i].account;
				reader2.ignore(1000,'\t');
				reader2>>c[i].pin;
				reader2.ignore(1000,'\t');
				
				if(check1==c[i].account_number)
				{   
	 					test2=1;
				}
				if(reader2.eof())
				{
				break;
				}
				counter2++;
				
			}
		if(test2==0)
				{
						cout<<"do not  any account with the numder account  \n";
				}
				else
				{
					
						ofstream customerfile2("customer.txt");
		 				for(int i=0;i<counter2;i++)
						{
			 				 if(check1==c[i].account_number)
							  	 {
								  
								  cout<<"are you want to exchang to ?  \t"
								      <<c[i].name.first_name<<"\t"
								       <<c[i].name.second_name<<"\t"
								       <<c[i].name.last_name<<"\n";
								   cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n ";    
							       cout<<"~  choose        (  y or  n  )  : ~\n";
							       cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n ";   
								    char add2;
					  	        	cin>>add2;
					  		if (add2=='y'||add2=='Y') {
		  						
		  					c[i].account+=exchaing;	
		  					cout<<"_______________________________________________________________________________________________________\n";
							cout <<" the process  exchang has been   successfully \n ";
							cout <<"\t\t\t\t\t------\n";
							cout <<"\t\t\t\t\t= OK =\n";
							cout <<"\t\t\t\t\t------\n";
							cout<<"_______________________________________________________________________________________________________\n";
					  		
							  }
		  					else 
		  					{
							  cout<<"_______________________________________________________________________________________________________\n";
					  		
							  cout <<" the process  exchang  hasn't been   successfully \n";
		  					  cout <<"\t\t\t\t\t------\n";
							  cout <<"\t\t\t\t\t= NO =\n";
							  cout <<"\t\t\t\t\t------\n";
							  cout<<"_______________________________________________________________________________________________________\n";
					  		
							  c[i].account=c[i].account; 
							  for(int i=0;i<20;i++){
  							  if(ex==c[i].account_number) 
							  c[i].account+=exchaing;	
  							}
							  
							  
							   }
							  
							  }
							  
		  					 customerfile2<<c[i].id_costomer<<"\t"
									  			<<c[i].name.first_name<<"\t"
							    				<<c[i].name.second_name<<"\t"
							    				<<c[i].name.last_name<<"\t"
							    				<<c[i].gender<<"\t"
							    				<<c[i].age<<"\t"
							    				<<c[i].address<<"\t"
							    				<<c[i].phone_number<<"\t"
							    				<<c[i].account_number<<"\t"
							    				<<c[i].account<<"\t"
							    				<<c[i].pin<<"\t"
							    				<<"\n";	
						    			    	
						    			
									
						} customerfile2.close();
						}
			cout<<"\t\t\t\t----------------------------------------------------\n";
	    	cout<<"\t\t\t\t- are you want to exchaing anther again ( y  /n) : -\n";
	    	cout<<"\t\t\t\t----------------------------------------------------\n";
  		char add5;
  		cin>>add5;
  		if (add5=='y'||add5=='Y') exchang();
  		else 
  		{
		  system("cls");
  		list();  }

			
	}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++  the lest main of  ATM choosing   ++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void list(){
		system("cls");
		system("color e0");
		int v;
		cout<<"\n\n\n";
		cout<<"\t\t\t\t===================================\n";
  		cout<<"\t\t\t\t=  wlcome to in sevice of   ATM   =\n";
  		cout<<"\t\t\t\t===================================\n";  			


  		cout<<"--------------------------------------------------------------------------------------------------------------------\n";
		cout<<"please enter the number of choose :\t\t  ";
		cout<<"1_Add customer\n\t\t\t \t\t\t  " ;
	 	cout<<"2_Delete custome\n\t\t\t\t\t\t  " ;
		cout<<"3_Edit customer\n\t\t\t\t\t\t  " ;
		cout<<"4_ATM system\n\t\t\t\t\t\t  " ;
		cout<<"5_Show information about customer\n\t\t\t\t\t\t";
		cout<<"  6_Exit \n \n";
		cout<<"--------------------------------------------------------------------------------------------------------------------\n";
		cin>>v;
		getchar();
		switch (v){
		case 1: 
	    insert_customer();    break;
	    case 2:
        deletc();	 break;
	    case 3:
	   editc();	 break;
	   case 4:
       atm_systemc();	 break;
       case 5:
       show();     break;
       case 6:
       exit(0);	
        	default:{Sleep(1);
					cout << "You entered wrong choices ,please Try again\n";
					
					}
					list();
					}
     
	}
