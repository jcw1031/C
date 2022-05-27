
#include "Tower.h"

Tower::Tower(int h){
    height=h;
}

Tower::Tower():Tower(1){}

int Tower::getHeight(){
    return height;
}
