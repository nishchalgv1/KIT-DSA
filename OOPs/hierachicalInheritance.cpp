// Student - Boy, Girl
#include <string>
#include <iostream>
using namespace std;

class Student{
    public: 
    string name;
    int marks;

    void study(){
        cout << "I study" << endl;
    }
};

class Boy: public Student{
    public: 
    string favGame;

    Boy(string favGame){
        this -> favGame = favGame;
    }

    void playGame(){
        cout << "Boy plays " << favGame << endl;
    }
};

class Girl: public Student{
    public: 
    string songName;

    Girl(string songName){
        this -> songName = songName;
    }

    void sing(){
        cout << "Girl sings " << songName << endl;
    }
};

int main(){
    Boy boy("GTA SanAndreas");
    Girl girl("Aga Naga");

    boy.playGame();
    girl.sing();
}