#include <iostream>

using namespace std;

string *addEntry(string *dynamicArray , int&the_size ,string newEntry)
{
   string* new_array=new string[the_size+1];
   for(int i=0;i<the_size;i++){
       new_array[i]=dynamicArray[i];
}
      new_array[the_size]=newEntry;
       the_size++;

      delete[]dynamicArray;
       return new_array;

}


string *deleteEntry(string *dynamicArray , int&the_size ,string entryToDelete)
{
string*new2_array=new string[the_size-1];


   for(int i=0;i<the_size-1;i++){
    new2_array[i]=dynamicArray[i];

}
if(entryToDelete==new2_array[0]){
      cout<<"{";
for(int i=1;i<the_size;i++){
cout<<new2_array[i]<<" "<<",";
}
cout<<"}";
}

if(entryToDelete==new2_array[1]){

        cout<<"{";
    for(int i=0;i<1;i++){
        cout<<new2_array[i]<<" "<<",";

    }
   for(int i=2;i<the_size;i++){
        cout<<new2_array[i]<<" "<<",";
    }
    cout<<"}";
}
if(entryToDelete==new2_array[2]){

        cout<<"{";
    for(int i=0;i<2;i++){
        cout<<new2_array[i]<<",";
    }

    for(int i=3;i<the_size;i++){
        cout<<new2_array[i]<<",";
  }
    cout<<"}";
}
if(entryToDelete==new2_array[3]){

        cout<<"{";
        for(int i=0;i<3;i++){
            cout<<new2_array[i]<<",";
            }

for(int i=4;i<the_size;i++){
    cout<<new2_array[i];
}
cout<<"}";
}
if(entryToDelete==new2_array[4]){
    cout<<"{";
        for(int i=0;i<4;i++){
            cout<<new2_array[i]<<",";
        }

cout<<"}";
}
cout<<endl;



delete[]dynamicArray;
return new2_array;
}


int main()
{
    int the_size=5;
    string*dynamicArray=new string[the_size]{"Marwa","Tarek","Esmail","Ahmed","Afifi"};


     string*new1_array=addEntry(dynamicArray,the_size,"maro");
     cout<<"{";
       for(int i=0;i<the_size;i++){
           cout<<"  "<<new1_array[i]<<" "<<",";
        }
        cout<<"}";
cout<<endl;

        string*new2_array=deleteEntry(new1_array,the_size,"Ahmed");

        return 0;


}
