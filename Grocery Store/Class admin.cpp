#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
const char *FDE="Admin.bin";
class Admin{
private:
    int rollNumber;
    char studentName[100];
    string name1;
    int pass;
    int cnic;
public:
void dFD(){

cout<<"Welcome To Admin Sector, press 1 to continue"<<endl;

}

void ddFD(){

cout<<"What would you like to do?"<<endl;
cout<<"1.  insert new item to catalog "<<endl;
cout<<"2.  Remove item from catalog"<<endl;
cout<<"3.  View Catalog"<<endl;
cout<<"4.  Exit"<<endl;


}


    Admin(int rollNumber=0, int rand = 0, string studentName=""){
        this->rollNumber = rollNumber;
        this->rollNumber = rand;
        strcpy(this->studentName, studentName.c_str()); //Copying in CStyle string-char[]
    }
    void ddddisplay(){
        cout << "CNIC=  " << cnic << endl;
        cout << "Name: " << name1 << endl;
    }
    int& ddgetRollNumber(){
        return rollNumber;
    }
    char* ddgetStudentName(){
        return studentName;
    }
    int& ddsetpass(int temp){
    pass = temp;    
    }
    int& ddgetpass(){
        return pass;
    }
    int& ddsetcnic(int temp){
    cnic = temp;    
    }
    int& ddgetcnic(){
        return cnic;
    }
    int& ddsetname(string temp){
    name1 = temp;    
    }
    string dgetName(){
        return name1;
    }
    void ddsetevery(string N, int C, int P) {
        cnic = C;
        name1 = N;
        pass = P;
    }
    void ddfdis(){
    cout<<"1.  Register for an account"<<endl;
    cout<<"2.  Log into your account"<<endl;
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
};
void ddinsertObject(Admin object){
    ofstream myFile(FDE, ios::binary | ios::app);
    if(myFile.write((char *)&object, sizeof(object)))
        cout<<"Account successfully made!"<<endl;
    else
        cout<<"Your account was not registered"<<endl;
    myFile.close();
}
void ddretrieveObject(int rollNumber){
    Admin temp;
    ifstream myFile(FDE, ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){  //cnic
        if(temp.ddgetcnic() == rollNumber){
            temp.ddddisplay();
            myFile.close();
        }
    }
}
void ddretrieveAll(){
    Admin temp;
    ifstream myFile(FDE, ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        temp.ddddisplay();
    }
    myFile.close();
}
void ddupdateObject(int rollNumber, string studentName){
    Admin temp;
    fstream myFile(FDE, ios::in | ios::out | ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        if(temp.ddgetRollNumber() == rollNumber){
            strcpy(temp.ddgetStudentName(), studentName.c_str());
            int current = myFile.tellg();
            int oneblock = sizeof(temp);
            myFile.seekg(current-oneblock);
            myFile.write((char *)&temp, sizeof(temp));
            myFile.close();
        }
    }
}
void dddeleteObject(int rollNumber){
    Admin temp;
    fstream myFile(FDE, ios::in | ios::out | ios::binary);
    ofstream myFile_temp("temp.bin", ios::app | ios::binary);
    while(myFile.read((char *)&temp, sizeof(temp))){
        if(temp.ddgetRollNumber() != rollNumber){
            myFile_temp.write((char *)&temp, sizeof(temp));
            cout<<"Deleted"<<endl;
        }
    }
    myFile.close();
    myFile_temp.close();
    remove(FDE);
    rename("temp.bin", FDE);
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

    cout<<"1.  Register for an account"<<endl;
    cout<<"2.  Log into your account"<<endl;
    cin>>T;

    if(T == 1){
        
    cout<<"Enter Name"<<endl;
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
    
    insertObject(U1);

    retrieveObject(cnic);

    }

   else if(T == 2){

cout<<"Logging in now"<<endl;

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
/*
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
    */
    //Retrieve only one object
    /*
        retrieveObject(4);
    */
    //Deletes a particular object present at the passed roll number's location
    /*
        deleteObject(4);
    */
    //Retrieves all the object present in the file after updation and deletion
    /*
        retrieveAll();
  
}  */