/* Write a program that prompts the user to input the name of a text file and then outputs the number of words in the file.
 You can consider a “word” to be any text that is surrounded by whitespace (for example, a space, carriage return, newline) or 
 borders the beginning or end of the file.*/


#include<iostream>
#include<fstream>

using namespace std;
void word_count(ifstream &input_file);
int main()
{
    ifstream inputfile;
    char filename[20];
    cout<<"enter the name of file";
    cin>>filename;
    inputfile.open(filename);    //I've used a file named 'text.txt' that is saved in same folder
    if(inputfile.fail())
    {
        cout<<"unable to open the file";
    }
    else
    {
        word_count(inputfile);
    }
      inputfile.close();
     return 0;
}
void word_count(ifstream &input_file)
{
    int count=0;
    string str;
    while(input_file>>str)
    {
        count++;
    }
    cout<<endl<<"number of words in filename....text.txt- "<<count<<endl;
}
