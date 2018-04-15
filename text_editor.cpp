#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

class TextEditor{
    string input, output, file_name;
    fstream f;

    public :
    TextEditor(){input = "NULL", output = "NULL";}

    TextEditor(string, string);
    void make_file();
    void show_file();
};

TextEditor::TextEditor(string file_name, string mode)
{
    this->file_name = file_name;
    char file_name_c[file_name.length()+1];
    strcpy(file_name_c, file_name.c_str());

    if( mode == "-w")
        f.open(file_name_c, ios::app);
    else if(mode == "-wt")
        f.open(file_name_c, ios::trunc|ios::out);
    else
        f.open(file_name_c, ios::in);
    if(!f)
    {
        cout<<"\nERROR OPENING IN FILE..."<<endl;
        exit(0);
    }
    if( mode != "-r")
        make_file();
    else
        show_file();
}

void TextEditor::make_file()
{
    string input("Enter");

    cout<<"\nEnter your content from here on :";
    cout<<"\ntype 'exit' to save and exit";
    cout<<"\ntype 'quit' to exit without saving : "<<endl;
    cout<<"***************************************************************\n";

    while(1)// input != "exit" || input != "quit" )
    {
        input.empty();
        getline(cin, input);

        if(input == "exit" || input == "quit")  break;

        // f.write(input.c_str(), input.length());
        f<<input;
        f<<endl;
    }

    if( input == "exit")
        f.close();

    else
    {
        f.close();
        f.open(file_name.c_str(), ios::trunc);
        f.close();
    }
    
}


void TextEditor::show_file()
{
    string output;
    cout<<file_name<<":\n";
    cout<<"*********************************************************"<<endl;
    while(getline(f, output))
    {
        cout<<output<<endl;
    }
    cout<<"*********************************************************"<<endl;
}


int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        cout<<"\nImproper usage...";
        cout<<"\nExpected : text_editor [-r or -w or -wt] filename"<<endl;
        exit(0);
    }
    string mode(argv[1]);
    string filename(argv[2]);

    TextEditor text_editor(filename, mode);
    return 0;
}
