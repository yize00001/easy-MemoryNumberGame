// Memory Number Game

#include<iostream>
#include<cstdlib>
#include<string>
#include<windows.h>
#include<time.h>

using namespace std;

void Clear() { cout << "\x1B[2J\x1B[H"; }


int main()
{
    

    int question;
    int user_answer;

    int timeSet = 5000; // default 5 seconds
    // easy: 3 seconds, Medium: 2 seconds, Hard: 1 second

    int game_difficulty;

    cout << "1. Easy: The number disappears after 3 seconds" << endl;
    cout << "2. Medium: The number disappears after 2 seconds" << endl;
    cout << "3. Hard: The number disappears after 1 second" << endl;
    cout << "-----------------------------" << endl;
    cout << "Choose your game difficulty:";
    cin >> game_difficulty; 

    switch (game_difficulty)
    {
    case 1:
        timeSet = 3000;
        // cout << "You chose easy difficulty" << endl;
        break;
    case 2:
        timeSet = 2000;
        // cout << "You chose medium difficulty" << endl;
        break;
    case 3:
        timeSet = 1000;
        // cout << "You chose hard difficulty" << endl;
        break;
    default:
        break;
    }

    srand(time(NULL)); // 讓每次的亂數都不同

    question = rand()%99999 + 10000; //亂數出題99999~10000之間

    cout << "Question:" << question;

    _sleep(timeSet);  // timeSet 秒後題目消失 
    Clear();     // 清除終端機

    cout << "Please answer the question:";
    cin >> user_answer;
    
    if(user_answer == question){
        cout << "Question:" << question << endl << "You are right." << endl;
    }
    else{
        cout << "Question:" << question << endl << "You answered wrong." << endl;
    }

    return 0;
}