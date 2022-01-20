/*
    * Ho Chi Minh City University of Technology
    * Faculty of Computer Science and Engineering
    * Initial code for Assignment 0
    * Programming Fundamentals Spring 2022
    * Author: Tran Huy
    * Date: 06.01.2022
*/

//The library here is concretely set, students are not allowed to include any other libraries.
#ifndef studyInPink_h
#define studyInPink_h

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

////////////////////////////////////////////////////////////////////////
///STUDENT'S ANSWER BEGINS HERE
///Complete the following functions
///DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////

int firstMeet(int& EXP1, int& EXP2, const int& E1){
    //Complete this function to gain point on task 1
    if (EXP1 > 900) EXP1 = 900;
    if (EXP1 < 0) EXP1 = 0;
    if (EXP2 > 900) EXP2 = 900;
    if (EXP2 < 0) EXP2 = 0;
    if (E1 > 999 || E1 < 0) return -999;
    if (E1 <= 399) {
        if (E1 <= 49) {
            EXP2 += 25;
            if (E1 % 2 == 0) {
                EXP1 = ceil(EXP1 - E1 / 5.0);
            }
            else { EXP1 = ceil(EXP1 + E1 / 10.0); };
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 99 && E1 > 49) {
            EXP2 += 50;
            if (E1 % 2 == 0) {
                EXP1 = ceil(EXP1 - E1 / 5.0);
            }
            else { EXP1 = ceil(EXP1 + E1 / 10.0); };
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 149 && E1 > 99) {
            EXP2 += 85;
            if (E1 % 2 == 0) {
                EXP1 = ceil(EXP1 - E1 / 5.0);
            }
            else { EXP1 = ceil(EXP1 + E1 / 10.0); };
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 199 && E1 > 149) {
            EXP2 += 75;
            if (E1 % 2 == 0) {
                EXP1 = ceil(EXP1 - E1 / 5.0);
            }
            else { EXP1 = ceil(EXP1 + E1 / 10.0); };
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 249 && E1 > 199) {
            EXP2 += 110;
            if (E1 % 2 == 0) {
                EXP1 = ceil(EXP1 - E1 / 5.0);
            }
            else { EXP1 = ceil(EXP1 + E1 / 10.0); };
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 299 && E1 > 249) {
            EXP2 += 135;
            if (E1 % 2 == 0) {
                EXP1 = ceil(EXP1 - E1 / 5.0);
            }
            else { EXP1 = ceil(EXP1 + E1 / 10.0); };
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 399 && E1 > 299) {
            EXP2 += 160;
            if (E1 % 2 == 0) {
                EXP1 = ceil(EXP1 - E1 / 5.0);
            }
            else { EXP1 = ceil(EXP1 + E1 / 10.0); };
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
    }
    else {
        if (E1 <= 499 && E1 > 399) {
            EXP2 = ceil(EXP2 + E1 / 7.0 + 9);
            EXP1 = ceil(EXP1 - E1 * 0.1);
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 599 && E1 > 499) {
            EXP2 = ceil(EXP2 + E1 / 9.0 + 11);
            EXP1 = ceil(EXP1 - E1 * 0.1);
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 699 && E1 > 599) {
            EXP2 = ceil(EXP2 + E1 / 5.0 + 6);
            EXP1 = ceil(EXP1 - E1 * 0.1);
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 799 && E1 > 699) {
            EXP2 = ceil(EXP2 + E1 / 7.0 + 9);
            if(EXP2 >200) {
            EXP2 = ceil(EXP2 + E1 / 9.0 + 11);
            }
            EXP1 = ceil(EXP1 - E1 * 0.1);
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
        if (E1 <= 999 && E1 > 799) {
            EXP2 = ceil(EXP2 + E1 / 7.0 + 9 + E1/ 9.0 + 11);
            if (EXP2 > 600) {
            EXP2 = ceil(EXP2 + E1 / 5.0 + 6);
            EXP2 = ceil(EXP2 + 0.15*EXP2);
            }
            EXP1 = ceil(EXP1 - E1 * 0.1);
            if (EXP1 > 900) EXP1 = 900;
            if (EXP1 < 0) EXP1 = 0;
            if (EXP2 > 900) EXP2 = 900;
            if (EXP2 < 0) EXP2 = 0;
            return EXP1 + EXP2;
        }
    }
    return 1;
}

int investigateScene(int& EXP1, int& EXP2, int& HP2, int& M2, const int& E2){
    //Complete this function to gain point on task 2
    if (M2 > 2000) M2 = 2000;
    if (M2 < 0) M2 = 0;
    if (E2 > 999 || E2 < 0) return -999;
    if (E2 <= 299) {
        EXP2 = ceil(EXP2 + E2 / 9.0 + 10);
        EXP1 = ceil(EXP1 + 1 / 3.0 * (E2 / 9.0 + 10));
        if (EXP1 > 900) EXP1 = 900;
        if (EXP2 > 900) EXP2 = 900;
    }
    else if (E2 <= 499) {
        EXP2 = ceil(EXP2 + E2 / 9.0 + 10);
        EXP1 = ceil(EXP1 + 1 / 3.0 * (E2 / 9.0 + 10));
        EXP2 = ceil(EXP2 + 0.35 * E2);
        EXP1 = ceil(EXP1 + (1 / 3.0) * 0.35 * E2);
        if (EXP1 > 900) EXP1 = 900;
        if (EXP2 > 900) EXP2 = 900;
    }
    else if (E2 <= 999) {
        EXP2 = ceil(EXP2 + E2 / 9.0 + 10);
        EXP1 = ceil(EXP1 + 1 / 3.0 * (E2 / 9.0 + 10));
        EXP2 = ceil(EXP2 + 0.35 * E2);
        EXP1 = ceil(EXP1 + (1 / 3.0) * 0.35 * E2);
        EXP2 = ceil(EXP2 + 0.17 * (E2 / 9.0 + 10 + 0.35 * E2));
        EXP1 = ceil(EXP1 + 1 / 3.0 * (0.17 * (E2 / 9.0 + 10 + 0.35 * E2)));
        if (EXP1 > 900) EXP1 = 900;
        if (EXP2 > 900) EXP2 = 900;
    }
    if (HP2 > 999) HP2 = 999;
    if (HP2 < 0) HP2 = 0;
    HP2 = ceil(HP2 - float(pow(E2, 3) / pow(2, 23)));
    if (HP2 < 0) HP2 = 0;
    if (E2 % 2 == 0) {
        M2 = ceil(M2 + pow(E2, 2) / 50.0);
        if (M2 > 2000) M2 = 2000;
    }
    return EXP2 + HP2 + M2 + EXP1;
}

int traceLuggage(int& HP1, int& EXP1, int& M1, const int& E3){
    //Complete this function to gain point on task 3
    if (HP1 > 999) HP1 = 999;
    if (HP1 < 0) HP1 = 0;
    if (M1 > 2000) M1 = 2000;
    if (M1 < 0) M1 = 0;
    if ((E3 > 999) || (E3 < 0)) { return -999; }
    bool luggage = false, found = false;
    //Road 1
    int P1[9] = { 1,3,5,7,9,11,13,15,17 };
    int position;
    for (int i = 0; i < 9; i++) P1[i] = (P1[i] + E3) % 26 + 65;
    for (int j = 0; j < 9; j++) {
        if (P1[j] == 80) {
            luggage = true;
            found = true;
            position = j + 1;
            break;
        }
    }
    if (luggage) {
        HP1 = HP1 - 80 * position * 2;
        EXP1 += (1000 - 80 * position) % 101;
        M1 = ceil(M1 - position * E3 / 9.0);
    }
    else M1 = ceil(M1 - 9 * 9 * E3 / 9.0);
    if (HP1 > 999) HP1 = 999;
    if (HP1 < 0) HP1 = 0;
    if (M1 > 2000) M1 = 2000;
    if (M1 < 0) M1 = 0;
    if (EXP1 > 900) EXP1 = 900;
    if (EXP1 < 0) EXP1 = 0;
    //Road 2
    luggage = false;
    int P2[7] = { 2, 3, 5, 7, 11, 13, 17 };
    int s = 0, m;
    for (int i = 0; i < 7; i++) {
        P2[i] = (P2[i] + E3) % 26;
        s += P2[i];
    };
    m = ceil(s / 7.0);
    for (int j = 0; j < 7; j++) {
        P2[j] = (P2[j] + s + m) % 26 + 65;
        if (P2[j] == 80) {
            luggage = true;
            found = true;
            position = j + 1;
        }
    }
    for (int j = 0; j < 7; j++) {
        if (P2[j] == 80) {
            luggage = true;
            found = true;
            position = j + 1;
            break;
        }
    }
    if (luggage) {
        HP1 = HP1 - 80 * position * 2;
        EXP1 += (1000 - 80 * position) % 101;
        M1 = ceil(M1 - position * E3 / 9.0);
    }
    else M1 = ceil(M1 - 7 * 7 * E3 / 9.0);
    if (HP1 > 999) HP1 = 999;
    if (HP1 < 0) HP1 = 0;
    if (M1 > 2000) M1 = 2000;
    if (M1 < 0) M1 = 0;
    if (EXP1 > 900) EXP1 = 900;
    if (EXP1 < 0) EXP1 = 0;
    //Road 3
    luggage = false;
    int P3[20] = { 2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40 };
    for (int i = 0; i < 20; i++) {
        P3[i] = P3[i] * P3[i];
        P3[i] = (P3[i] + E3 * E3) % 113;
    }
    int max = P3[0];
    for (int k = 0; k < 20; k++) {
        if (P3[k] > max) max = P3[k];
    }
    for (int j = 0; j < 20; j++) {
        P3[j] = int(ceil(float((P3[j] + E3) / max))) % 26 + 65;
    }
    for (int a = 19; a >= 0; a--) {
        if (P3[a] == 80) {
            luggage = true;
            found = true;
            position = 20 - a;
            break;
        }
    }
    if (luggage) {
        HP1 = HP1 - 80 * position * 3;
        EXP1 = ceil(EXP1 + (3500 - 80 * position) % 300);
        M1 = ceil(M1 - position * E3 / 9.0);
    }
    else M1 = ceil(M1 - 20 * 20 * E3 / 9.0);
    if (HP1 > 999) HP1 = 999;
    if (HP1 < 0) HP1 = 0;
    if (M1 > 2000) M1 = 2000;
    if (M1 < 0) M1 = 0;
    if (EXP1 > 900) EXP1 = 900;
    if (EXP1 < 0) EXP1 = 0;
    //Road 4
    luggage = false;
    int P4[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int min, x;
    for (int i = 0; i < 12; i++) {
        P4[i] = int((P4[i] + pow(ceil(E3 / 29.0), 3))) % 9;
    }
    min = P4[0];
    x = 1;
    for (int j = 0; j < 12; j++) {
        if (P4[j] < min) {
            min = P4[j];
            x = j + 1;
        }
    }
    float min_idx = x;
    for (int k = 0; k < 12; k++) {
        P4[k] = int(((P4[k] + E3) * ceil((min / min_idx)))) % 26 + 65;
    }
    for (int a = 11; a >= 0; a--) {
        if (P4[a] == 80) {
            luggage = true;
            found = true;
            position = 12 - a;
            break;
        }
    }
    if (luggage) {
        HP1 = HP1 - 80 * position * 4;
        EXP1 = EXP1 + (4500 - 80 * position) % 400;
        M1 = ceil(M1 - position * E3 / 9.0);
    }
    else M1 = ceil(M1 - 12 * 12 * E3 / 9.0);
    if (HP1 > 999) HP1 = 999;
    if (HP1 < 0) HP1 = 0;
    if (M1 > 2000) M1 = 2000;
    if (M1 < 0) M1 = 0;
    if (EXP1 > 900) EXP1 = 900;
    if (EXP1 < 0) EXP1 = 0;
    //Summary
    if (!found) {
        HP1 = HP1 - (59 * E3) % 900;
        EXP1 = EXP1 - (79 * E3) % 300;
        if (HP1 > 999) HP1 = 999;
        if (HP1 < 0) HP1 = 0;
        if (EXP1 > 900) EXP1 = 900;
        if (EXP1 < 0) EXP1 = 0;
        return -1;
    }
    return HP1 + EXP1 + M1;
}

////////////////////////////////////////////////
///END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* studyInPink_h */
