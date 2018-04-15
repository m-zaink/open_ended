#include <iostream>
#include <fstream>
#include <string>
#include <cstring>


class TextEditor{
    string input(), output(), file_name();
    fstream f;

    public :
    TextEditor(){input = "NULL", output = "NULL";}

    TextEditor(string&, string&);
    TextEditor(string&);
    void make_file(string);
};

TextEditor::TextEditor(string& file_name, string& mode)
{
    char file_name_c[file_name.length()+1];
    strcpy(file_name_c, file_name.c_str());
    if( mode == "-w")
        f.open(file_name_c, ios::app);
        make_file();
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

void make_file()
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

        fout.write(input.c_str(), input.length());
        fout<<endl;
    }

    if( input == "exit")
    {
        fout.write("\n", 2);
        fout.close();
    }

    else
    {
        fout.close();
        fout.open(file_name_c, ios::trunc);
        fout.close();
    }

}


void show_file()
{
    string output;
    cout<<"\n"<<file_name<<":\n";
    cout<<"*********************************************************"<<endl;
    while(getline(fin, output))
    {
        cout<<output;
        cout<<endl;
    }
    cout<<"*********************************************************"<<endl;
}


int main(int argc, char* argv[])
{
    if(arcg != 3)
    {
        cout<<"\nImproper usage...";
        cout<<"\nExpected : text_editor [-r or -w or -wt] filename";
        exit(0);
    }
    string mode(argv[1]);
    string filename(arv[2]);

    TextEditor text_editor(filename, mode);
    return 0;
}
