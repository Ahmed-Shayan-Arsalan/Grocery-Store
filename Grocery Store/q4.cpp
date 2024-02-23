#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
const char *FF="registration.bin";
class Login{
private:
   // int rollNumber;
    char studentName[100];
    string name1;
    int pass;
    int cnic;
    string username;
	string password;
public:
        
    void display(){
        cout << "CNIC=  " << cnic << endl;
        cout << "Name: " << name1 << endl;
    }
    int& getRollNumber(){
        return pass;
    }
    char* getStudentName(){
        return studentName;
    }
    int& setpass(int temp){
    pass = temp;    
    }
    int& getpass(){
        return pass;
    }
    int& setcnic(int temp){
    cnic = temp;    
    }
    int& getcnic(){
        return cnic;
    }
    int& setname(string temp){
    name1 = temp;    
    }
    string getName(){
        return name1;
    }
    void sete(int P){
        pass = P;
    }
    bool check_pass(int pass){

    int num;
    int count = 0;

    // Take input from user
    

    // Store to temporary variable.
    num = pass;
    
    while(num != 0) {

        // Increment counter
        count++;

        // Remove last digit of 'temp'
        num /= 10;
    }

    cout << endl << "Total digits in is "  << count<<endl;
    
    if(count == 9){
cout<<"Correct amount of number entered"<<endl;
return true;
}
else{
cout<<"incorrect amount of numbers"<<endl;
return false;
}
}

int check_ppass(int P,int Y){

if(P==Y){
    cout<<"Correct Pass"<<endl;
}
else{
    cout<<"Incorrect pass entered"<<endl;
    return 0;
}
}

Login(string u="aazan",string p="kashif")
	{
		username = u;
		password = p;
		ofstream myFile(fileName, ios::binary | ios::app);
		if (myFile.write((char*)this, sizeof(Login))) {
			cout << "Success! Object Updated." << endl;
			myFile.close();
		}
	}

};
void iinsertObject(Login object){
    ofstream myFile(FF, ios::binary | ios::app);
    if(myFile.write((char *)&object, sizeof(object)))
        cout<<"Object Successfully Inserted!"<<endl;
    else
        cout<<"Object Insertion Failed"<<endl;
    myFile.close();
}/*
void iretrieveObject(int pass){
    Login temp;
    ifstream myFile(FF, ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){  //cnic
        if(temp.getpass() == pass){
            temp.display();
            myFile.close();
        }
    }
}
void iretrieveAll(){
    Login temp;
    ifstream myFile(FF, ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        temp.display();
    }
    myFile.close();
}
void iupdateObject(int rollNumber, string studentName){
    Login temp;
    fstream myFile(FF, ios::in | ios::out | ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        if(temp.getRollNumber() == rollNumber){
            strcpy(temp.getStudentName(), studentName.c_str());
            int current = myFile.tellg();
            int oneblock = sizeof(temp);
            myFile.seekg(current-oneblock);
            myFile.write((char *)&temp, sizeof(temp));
            myFile.close();
        }
    }
}
void ideleteObject(int rollNumber){
    Login temp;
    fstream myFile(FF, ios::in | ios::out | ios::binary);
    ofstream myFile_temp("temp.bin", ios::app | ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        if(temp.getRollNumber() != rollNumber){
            myFile_temp.write((char *)&temp, sizeof(temp));
        }
    }
    myFile.close();
    myFile_temp.close();
    remove(FF);
    rename("temp.bin", FF);
}
/*
int main(){

   
    int dec;
    int cnic;
    int pass;
    int repass;
    int address;
    int T;
    string name;

}

    /*cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Your name is = " <<name<<endl;;
    
    cout<<"Enter CNIC"<<endl;
    cin>>cnic;
    
    cout<<"Enter password"<<endl;
    cin>>pass;
   

    registration U1;
    U1.setevery(name, pass, cnic);
    U1.setcnic(cnic);
    if(U1.check_pass(pass)==true)
    {
    cout<<"Re-enter Password"<<endl;
    cin>>repass;
    U1.check_ppass(pass, repass);
    }
    else 
    {
        cout<<"Wrong password"<<endl;
        return 0;
    }
    
    //insertObject(U1);

    retrieveObject(cnic);


    }

    int cred;
    cout<<"Entering login credentials"<<endl;
    cout<<"Enter password"<<endl;
    cin>>cred;
    U1.setevery(name, cred, cnic);
    U1.setpass(cred);
    retrieveObjectpass(cred);

   retrieveAll();
    
    //Make changes to object 4th's name
    /*
        updateObject(4, "Rahat Usama");
    
    //Retrieve only one object
    /*
        retrieveObject(4);
    
    //Deletes a particular object present at the passed roll number's location
    /*
        deleteObject(4);
    
    //Retrieves all the object present in the file after updation and deletion
    /*
        retrieveAll();
    }
    */
