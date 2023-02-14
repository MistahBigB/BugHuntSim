//This is a game pitting the Space Marines against the Bugs
//using classes and methods.

//v0.1 - Creating a soldier class from which the combatants spawn
//  Base class has name, health, armorsave
//  Rounds of combat
//  Run the simulation a number of times
//  Parallelize

//goals:
//  add initiative stat to determine turn order
//  combatants can affect each other's stats (eg reduce health to 0)
//  spawn multiple of each combatants
//  spawn heroes with modified base stats
//  add morale to cause one side to flee if morale gets low (from losing too many soldiers in a round)
//  add strength modifier to determine wounds
//  add toughness modifier to determine wounds
//  add weapon skill to change liklihood of a hit
//  add ability to import armies from external documents
//  vehicles
//  abilities
//  races

#include <ctime>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>

#include "Soldier.h"
#include "Soldier.cpp"
#include "SpaceMarine.h"
#include "SpaceMarine.cpp"
#include "Bug.h"
#include "Bug.cpp"

int main() {
    //Different randomness every time program is executed
    srand(static_cast<unsigned>(time(0)));

    cout << "In the grim darkness of the far future, there is only war....\n\n\n";

    //Run many simulations
    int NUM_OF_SIMS = 10e3;

    //Calculate the total number of wins
    int Marine_wins = 0;
    int Bug_wins = 0;
    int Stalemate = 0;

    for (int i = 1; i <= NUM_OF_SIMS; i++){
        //generate soldiers
        Marine Loken("Loken", 1, 5, false);    //instance created in SpaceMarine.cpp
        Bug ix;                         //attributes set in Bug.cpp

        //fight it out!
        while((Loken.isDead() == false && ix.isDead() == false )){
            Loken.Attack();
            ix.Attack();
        }
        if (Loken.isDead() == true && ix.isDead() == false ){
            Bug_wins++;
        } else if (Loken.isDead() == false && ix.isDead() == true ) {
            Marine_wins++;
        } else {
            Stalemate++;
        }
    }

    double MarinePct = Marine_wins / static_cast<double>(NUM_OF_SIMS) *100;
    double BugPct = Bug_wins / static_cast<double>(NUM_OF_SIMS) *100;
    double StalematePct = Stalemate / static_cast<double>(NUM_OF_SIMS) *100;

    cout << "Marine wins: " << MarinePct << endl;
    cout << "Bug wins: " << BugPct << endl;
    cout << "Stalemate: " << StalematePct << endl;

    return 0;
}
