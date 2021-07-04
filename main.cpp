#include <iostream>
#include <string.h>
#include <fstream>
#include <iomanip>
#include <map>
using namespace std;

void load();
void store();
void display(auto itr);
void search();
void insert();
void delete_item();
void update();

struct student{
  string name;
  string address;
  string mail;
  string phone;
  string course;
  string branch;
  string dob;
};

map<string, struct student> data;

//display function
void display(auto itr){
  cout<<"ID: "<<(itr->first)<<endl;
  cout<<"Name: "<<(itr->second).name<<endl;
  cout<<"Address: "<<(itr->second).address<<endl;
  cout<<"Mail: "<<(itr->second).mail<<endl;
  cout<<"Phone: "<<(itr->second).phone<<endl;
  cout<<"Course: "<<(itr->second).course<<endl;
  cout<<"Branch: "<<(itr->second).branch<<endl;
  cout<<"DOB: "<<(itr->second).dob<<endl;
}

//search functions
void search(){
  int choice;
  string temp;
  int flag = 1;

  cout<<"Search using"<<endl<<"1.ID"<<endl<<"2.Name"<<endl<<"3.Address"<<endl;
  cout<<"4.Mail"<<endl<<"5.Phone"<<endl<<"6.Course"<<endl<<"7.Branch"<<endl;
  cout<<"8.DOB"<<endl<<"Enter Choice:"<<endl;

  cin>>choice;

  switch(choice){
    case 1:{
      cout<<"Enter ID"<<endl;
      cin>>temp;
      auto ptr = data.find(temp);
      if(ptr!=data.end()){
        display(ptr);
      }
      else{
        cout<<"ID not present"<<endl;
      }
      break;
    }
    case 2:{
      cout<<"Enter Name"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).name){
          display(itr);
          flag = 0;
        }
      }
      if(flag){
        cout<<"Name not present"<<endl;
      }
      break;
    }
    case 3:{
      cout<<"Enter Address"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).address){
          display(itr);
          flag = 0;
        }
      }
      if(flag){
        cout<<"Address not present"<<endl;
      }
      break;
    }
    case 4:{
      cout<<"Enter Mail"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).mail){
          display(itr);
          flag = 0;
        }
      }
      if(flag){
        cout<<"Mail not present"<<endl;
      }
      break;
    }
    case 5:{
      cout<<"Enter Phone"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).phone){
          display(itr);
          flag = 0;
        }
      }
      if(flag){
        cout<<"Phone not present"<<endl;
      }
      break;
    }
    case 6:{
      cout<<"Enter Course"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).course){
          display(itr);
          flag = 0;
        }
      }
      if(flag){
        cout<<"Course not present"<<endl;
      }
      break;
    }
    case 7:{
      cout<<"Enter Branch"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).branch){
          display(itr);
          flag = 0;
        }
      }
      if(flag){
        cout<<"Branch not present"<<endl;
      }
      break;
    }
    case 8:{
      cout<<"Enter DOB"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).dob){
          display(itr);
          flag = 0;
        }
      }
      if(flag){
        cout<<"DOB not present"<<endl;
      }
      break;
    }
    default: cout<<"Invalid choice"<<endl;
  }
}

//insert function
void insert(){
  struct student std;
  string id;

  cout<<"Enter ID"<<endl;
  cin>>id;

  if(data.count(id)){
    cout<<"Already Exists"<<endl;
    return;
  }

  cout<<"Enter Name"<<endl;
  cin>>std.name;
  cout<<"Enter Address"<<endl;
  cin>>std.address;
  cout<<"Enter Mail"<<endl;
  cin>>std.mail;
  cout<<"Enter Phone"<<endl;
  cin>>std.phone;
  cout<<"Enter Course"<<endl;
  cin>>std.course;
  cout<<"Enter Branch"<<endl;
  cin>>std.branch;
  cout<<"Enter DOB(dd/mm/yyyy)"<<endl;
  cin>>std.dob;
  data.insert({id,std});
}

// delete function
void delete_item(){

  int choice;
  string temp;

  cout<<"Delete using"<<endl<<"1.ID"<<endl<<"2.Name"<<endl<<"3.Address"<<endl;
  cout<<"4.Mail"<<endl<<"5.Phone"<<endl<<"6.Course"<<endl<<"7.Branch"<<endl;
  cout<<"8.DOB"<<endl<<"Enter Choice:"<<endl;

  cin>>choice;

  switch(choice){
    case 1:{
      cout<<"Enter ID"<<endl;
      cin>>temp;
      if(data.erase(temp)){
        cout<<"Successfully deleted"<<endl;
      }
      else{
        cout<<"Invalid ID"<<endl;
      }
      break;
    }
    case 2:{
      cout<<"Enter Name"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).name)
          data.erase(itr);
      }
      cout<<"Successful"<<endl;
      break;
    }
    case 3:{
      cout<<"Enter Address"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).address)
          data.erase(itr);
      }
      cout<<"Successful"<<endl;
      break;
    }
    case 4:{
      cout<<"Enter Mail"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).mail)
          data.erase(itr);
      }
      cout<<"Successful"<<endl;
      break;
    }
    case 5:{
      cout<<"Enter Phone"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).phone)
          data.erase(itr);
      }
      cout<<"Successful"<<endl;
      break;
    }
    case 6:{
      cout<<"Enter Course"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).course)
          data.erase(itr);
      }
      cout<<"Successful"<<endl;
      break;
    }
    case 7:{
      cout<<"Enter Branch"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).branch)
          data.erase(itr);
      }
      cout<<"Successful"<<endl;
      break;
    }
    case 8:{
      cout<<"Enter DOB"<<endl;
      cin>>temp;
      for(auto itr=data.begin();itr!=data.end();++itr){
        if(temp==(itr->second).dob)
          data.erase(itr);
      }
      cout<<"Successful"<<endl;
      break;
    }
    default: cout<<"Invalid choice"<<endl;
  }
}

//load file
void load(){
  ifstream fin;
  string line,id;
  struct student std;


  fin.open("Student_data.txt");

    // Execute a loop until EOF (End of File)
    while (fin) {
        getline(fin, line);
        id= line;
        getline(fin, line);
        std.name=line;
        getline(fin, line);
        std.address=line;
        getline(fin, line);
        std.mail=line;
        getline(fin, line);
        std.phone=line;
        getline(fin, line);
        std.course=line;
        getline(fin, line);
        std.branch=line;
        getline(fin, line);
        std.dob=line;
        data.insert({id,std});
    }

    // Close the file
    fin.close();
    cout<<"Load Successful"<<endl;

}

//Update
void update(){
  string id,temp;
  int choice;
  int flag = 1;

  cout<<"Enter ID of Student to update"<<endl;
  cin>>id;

  auto ptr = data.find(id);
  if(ptr==data.end()){
    cout<<"Student not found"<<endl;
    return;
  }

  while(flag){
    cout<<"Update"<<endl<<"1.Name"<<endl<<"2.Address"<<endl;
    cout<<"3.Mail"<<endl<<"4.Phone"<<endl<<"5.Course"<<endl<<"6.Branch"<<endl;
    cout<<"7.DOB"<<endl<<"8.Done"<<endl<<"Enter Choice:"<<endl;
    cin>>choice;

    switch(choice){
      case 1:{
        cout<<"Enter Name"<<endl;
        cin>>temp;
        (ptr->second).name=temp;
        break;
      }
      case 2:{
        cout<<"Enter Address"<<endl;
        cin>>temp;
        (ptr->second).address=temp;
        break;
      }
      case 3:{
        cout<<"Enter Mail"<<endl;
        cin>>temp;
        (ptr->second).mail=temp;
        break;
      }
      case 4:{
        cout<<"Enter Phone"<<endl;
        cin>>temp;
        (ptr->second).phone=temp;
        break;
      }
      case 5:{
        cout<<"Enter Course"<<endl;
        cin>>temp;
        (ptr->second).course=temp;
        break;
      }
      case 6:{
        cout<<"Enter Branch"<<endl;
        cin>>temp;
        (ptr->second).branch=temp;
        break;
      }
      case 7:{
        cout<<"Enter DOB"<<endl;
        cin>>temp;
        (ptr->second).dob=temp;
        break;
      }
      default: flag =0;
    }
  }
}

//store into File
void store(){
  ofstream fout;
  fout.open("Student_data.txt");
  for(auto itr=data.begin();itr!=data.end();++itr){
    fout<<(itr->first)<<endl;
    fout<<(itr->second).name<<endl;
    fout<<(itr->second).address<<endl;
    fout<<(itr->second).mail<<endl;
    fout<<(itr->second).phone<<endl;
    fout<<(itr->second).course<<endl;
    fout<<(itr->second).branch<<endl;
    fout<<(itr->second).dob<<endl;
  }
  fout.close();

}
int main(){
  cout<<"Student Information Management"<<endl;
  load();
  int choice;
  int flag = 1;
  while(flag){
    cout<<"Enter Choice:"<<endl<<"1.Insert"<<endl<<"2.Delete"<<endl;
    cout<<"3.Search"<<endl<<"4.Update"<<endl;
    cin>>choice;
    switch(choice){
      case 1:{
        insert();
        break;
      }
      case 2:{
        delete_item();
        break;
      }
      case 3:{
        search();
        break;
      }
      case 4:{
        update();
        break;
      }
      default:{
        store();
        flag=0;
       }
    }
  }
}
