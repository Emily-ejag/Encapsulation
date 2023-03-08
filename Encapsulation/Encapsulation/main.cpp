#include <iostream>

using namespace std;



class House {
public:
    void setNumStories(int numStories) {
        this->numStories = numStories;
    }

    void setNumWindows(int numWindows) {
        this->numWindows = numWindows;
    }

    
    void setColor(string color) {
        this->color = color;
    }

    int getNumStories() {
        return numStories;
    }

    int getNumWindows() {
        return numWindows;
    }

    string getColor() {
        return color;
    }

private:
    int numStories;
    int numWindows;
    string color;

};

void printHouse(House house) {
    cout << "The house is " << house.getColor()
        << " and has " << house.getNumStories()
        << " stories and " << house.getNumWindows() << endl;
}


int main() {
    House myhouse;
    House yourHouse;

    myhouse.setNumStories(2);
    myhouse.setNumWindows(6);
    myhouse.setColor("red");

    yourHouse.setNumStories(5);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");


    printHouse(myhouse);

    return 0;
}