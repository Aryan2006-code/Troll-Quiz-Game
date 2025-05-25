#include<iostream>
#include<fstream>

using namespace std;

class temp{
    string question,optA,optB,optC,optD,CorrectAns,userAns;

    public:
    void start();
}obj;

int main(){
    int choice;
    while(true){
        cout<<"enter your choice:"<<endl;
        cout<<"1 start Quiz"<<endl;
        cout<<"2 exit"<<endl;
        cin>>choice;

        if(choice==1){
            obj.start();
        }
        else if(choice==2) {
            cout<<"byeee..."<<endl;
            return 0;
        }
        else cout<<"invalid choice , Please try again"<<endl;
    }    
    return 0;
}

void temp :: start(){

    cout<<"--------------------Quiz--------------------"<<endl;
    cout<<"Welcome to the quiz!!"<<endl;

    cout<<"select the subject"<<endl;
    cout<<"1. C++"<<endl;   
    cout<<"2. Java"<<endl;
    cout<<"3. Python"<<endl;
    cout<<"4. C"<<endl;
    cout<<"5. HTML"<<endl;
    cout<<"6. CSS"<<endl;
    cout<<"7. Gk"<<endl;
    int ch;
    cin>>ch;
    cin.ignore();

    ifstream file;
    switch(ch){
        case 1:
            file.open("cpp.txt");
            break;
        case 2:
            file.open("question/java.txt");
            break;
        case 3:
            file.open("question/python.txt");
            break;
        case 4:
            file.open("question/c.txt");
            break;
        case 5:
            file.open("question/html.txt");
            break;
        case 6:
            file.open("question/css.txt");
            break;
        case 7:
            file.open("question/gk.txt");
            break;
        default:
            cout<<"invalid choice!!"<<endl;
            return;
    }

    int score=0;

    if(!file){
        cout<<"error opening file!!"<<endl;
        return;
    }

    while(getline(file,question)){
        getline(file,optA);
        getline(file,optB);
        getline(file,optC);
        getline(file,optD);
        getline(file,CorrectAns);

        cout<<question<<endl;
        cout<<endl;
        cout<<optA<<endl;
        cout<<optB<<endl;
        cout<<optC<<endl;
        cout<<optD<<endl;
    
        cout<<"enter your answer(A/B/C/D)"<<endl;
        cin.ignore();
        getline(cin,userAns);
        
        if(userAns == CorrectAns){
            score++;
        }

    }
    cout<<"--------------------"<<endl;

    cout<<"Quiz Ended."<<endl<<endl;

    cout<<"your score is: "<<score<<endl;
    
    if(score==0){
        cout<<"Hahahaahh You are a Failure!!....."<<endl<<"Give up on your dreams!!...."<<endl;;
    }else{
        cout<<"well done but you know what it was just a fluke !!..."<<endl;
    }
}
