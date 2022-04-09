#include "Tower.h"
Tower::Tower():Tower(1){}
Tower::Tower(int h){
    height=h;
}
int Tower::getHeight(){
    return height;
}
