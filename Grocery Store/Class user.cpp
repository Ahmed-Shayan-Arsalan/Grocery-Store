#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
class User{
public:
void ddisplay(){
cout<<"WELCOME TO MY HUMBLE STORE !!!"<<endl;
cout<<"1. Are you a Customer?"<<endl;
cout<<"2. Are you a manager?"<<endl;
cout<<"3. Are you an Admin?"<<endl;
cout<<"4. Exit Program?"<<endl;

}
/*
int ALL_IN_1(){
    int dec;
    int cnic;
    int pass;
    int repass;
    int address;
    int T;
    string name;
    registration U1;
    User Q1;
    
    int temp;
    Q1.ddisplay();
    cin>>temp;

    if(temp ==1 ){
    U1.fdis();
    cin>>T;

    if(T == 1){
     cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Your name is = " <<name<<endl;
    
    cout<<"Enter CNIC"<<endl;
    cin>>cnic;
    
    cout<<"Enter password"<<endl;
    cin>>pass;
   
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

    customer C1;
    int term;
    C1.VV();
    cin>>term;


    if(term == 1){

        dddddretrieveAll();

        cout<<"1. If You Want To Buy Something Enter Its Serial Number"<<endl;
        cout<<"2. Exit"<<endl;
        int Buy;
        cin>>Buy;
        if(Buy == 1){



        }

        else if(Buy == 2){
            return 0;
        }
    return 0;
    }

    if(term == 2){

        cout<<"here"<<endl;
    }
    } 
    
   else if(T == 2){

    cout<<"Logging in now"<<endl;
    
    cout<<"Enter password"<<endl;//da vinci?
    cin>>pass;
   

    Login L1;
    L1.sete(pass);
    L1.setcnic(pass);
    if(L1.check_pass(pass)==true)
    {
    cout<<"Re-enter Password"<<endl;
    cin>>repass;
    L1.check_ppass(pass, repass);
    }
    else 
    {
        cout<<"Wrong password"<<endl;
        return 0;
    }

    }
    
    

    if(T == 1){
        
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Your name is = " <<name<<endl;;
    
    cout<<"Enter CNIC"<<endl;
    cin>>cnic;
    
    cout<<"Enter password"<<endl;
    cin>>pass;
   

    
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

    //cout<<"Enter Name"<<endl;
   // cin>>name;
   // cout<<"Your name is = " <<name<<endl;;
    
    //cout<<"Enter CNIC"<<endl;
    //cin>>cnic;
    
    cout<<"Enter password"<<endl;
    cin>>pass;
   

    Login L1;
    L1.sete(pass);
    L1.setcnic(pass);
    if(L1.check_pass(pass)==true)
    {
    cout<<"Re-enter Password"<<endl;
    cin>>repass;
    L1.check_ppass(pass, repass);
    }
    else 
    {
        cout<<"Wrong password"<<endl;
        return 0;
    }
    
    //insertObject(U1);

    retrieveObject(pass);


    }
}
else if (temp == 2){
Manager M1;
int yt;
M1.dfdis(); //Manager
cin>>yt;

cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Your name is = " <<name<<endl;
    
    cout<<"Enter CNIC"<<endl;
    cin>>cnic;
    
    cout<<"Enter password"<<endl;
    cin>>pass;
   
    M1.dsetevery(name, pass, cnic);
    M1.dsetcnic(cnic);
    if(M1.check_pass(pass)==true)
    {
    cout<<"Re-enter Password"<<endl;
    cin>>repass;
    M1.check_ppass(pass, repass);
    }
    else 
    {
        cout<<"Wrong password"<<endl;
        return 0;
    }
    
    dinsertObject(M1);

    dretrieveObject(cnic);


    Product PI1;
    int RE;
    PI1.OVdisplay();
    cin>>RE;

    
    int T1;
    int T3;
    string T2;
    

    if(RE == 1){
        
        cout<<"Enter Product Name"<<endl;
        cin>>T2;
        cout<<"Enter Product Price"<<endl;
        cin>>T1;
        cout<<"Enter Serial Number For Product"<<endl;
        cin>>T3;
        PI1.Seteveryprod(T2, T1, T3);
        PI1.SetSerP(T3);
        PI1.ddsetpassP(T1);
    ddddddinsertObject(PI1);

    ddddddretrieveObject(T3);
    
    }
    else if(RE == 3){

        dddddretrieveAll();

    }

}

else if (temp == 3){
Admin A1;
int temp;
A1.dFD();  //Admin 
cin>>temp;


if(temp ==1 ){
    A1.ddfdis();
    cin>>T;

    if(T == 1){
     cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Your name is = " <<name<<endl;
    
    cout<<"Enter CNIC"<<endl;
    cin>>cnic;
    
    cout<<"Enter password"<<endl;
    cin>>pass;
   
    A1.ddsetevery(name, pass, cnic);
    A1.ddsetcnic(cnic);
    if(A1.check_pass(pass)==true)
    {
    cout<<"Re-enter Password"<<endl;
    cin>>repass;
    A1.check_ppass(pass, repass);
    }
    else 
    {
        cout<<"Wrong password"<<endl;
        return 0;
    }
    
    ddinsertObject(A1);

    ddretrieveObject(cnic);

    Catalog C1;
    int T1;
    int T3;
    string T2;
    int Ran;
    A1.ddFD();
    cin>>Ran;

    if(Ran == 1){
        
        cout<<"Enter Product Name"<<endl;
        cin>>T2;
        cout<<"Enter Product Price"<<endl;
        cin>>T1;
        cout<<"Enter Serial Number For Product"<<endl;
        cin>>T3;
        C1.SeteveryCat(T2, T1, T3);
        C1.SetSer(T3);
        C1.ddsetpass(T1);
    dddddinsertObject(C1);

    dddddretrieveObject(T3);
    
    }
    else if(Ran == 3){

        dddddretrieveAll();

    }
}

}

}

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





};
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
