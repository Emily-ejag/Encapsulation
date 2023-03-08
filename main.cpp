#include <iostream>

using namespace std;

class House{
    public:
        void setNumStories(int numStories){
            this->numStories = numStories;
        }

        void setNumWindows(int numWindows){
            this->numWindows = numWindows;
        }

        void setColor(string color){
            this->color = color;
        }

        int getNumStories(){
            return numStories;
        }

        int getNumWindows(){
            return numWindows;
        }

        string getColor(){
            return color;
        }

    private:
        int numStories;
        int numWindows;
        string color;

};

int main(){
    House myhouse;
    House yourHouse;

    myhouse.setNumStories(2);
    myhouse.setNumWindows(6);
    myhouse.setColor("red");

    yourHouse.setNumStories(5);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    cout<<"My house is "<<myhouse.getColor()
    <<" and has "<<myhouse.getNumStories() 
    <<" stories and "<<myhouse.getNumWindows()<<endl;

    cout<<"Your house is "<<yourHouse.getColor()
    <<" and has "<<yourHouse.getNumStories() 
    <<" stories and "<<yourHouse.getNumWindows()<<endl;

    return 0;
}