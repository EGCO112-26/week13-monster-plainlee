//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster x[5]={{"Glurch",5},{"Ghorm",5,20},{"KingSlime",5,10}};
    monster m1("TheHiveMother",500,3);
    monster m2("Malugez"),m4("Azeos",30);

    monster *p;
    p=new monster{"Lulu",10,50};
    delete p; //destructer p
    //monster m3;
    return 0; //destructer x,m4,m2,m1
}