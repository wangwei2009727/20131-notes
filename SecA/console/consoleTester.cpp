#include "console.h"
using namespace cio;
void box(){
  console.setPos(10, 20);
  console<<"@@@@@@@@@@@@@@@@@@@@@@";
  console.setPos(11, 20);
  console<<"@@@@@@@@@@@@@@@@@@@@@@";
  console.setPos(12, 20);
  console<<"@@@@@@@@@@@@@@@@@@@@@@";
}
int main(){
  char str[81] = "abcdefghijklmnopqrstuvwxyzABCDEFJGHI";
  bool insert = true;
  int curpos = 5;
  int stroff = 4;
  box();
  console.edit(str, 11, 21, 20, 80, &insert, &stroff, &curpos);
  console.pause();
  return 0;
}