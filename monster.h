//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h
class monster{
private:
    string name;
    unsigned hp,potion;

public:
    void Attack(monster &);
    void heal();
    monster(string="Ivy", int=10,int=1);
    //Alt 126
    ~monster();
};

monster::~monster(){
    cout<<"Bye Bye "<<name<< " hp: "<<hp<<" potion: "<<potion<<endl;
}

monster::monster(string n, int h, int p){
    name = n;
    h>100? hp=100:hp=h;
    p>5? potion=5:potion=p;

    cout<<"MONSTER "<<name<< " Bruv"<<endl;
}
#endif /* monster_h */
