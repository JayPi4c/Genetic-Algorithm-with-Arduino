#include "Population.h"

int popsize = 200;
int generation = 1;
int lifetime = 500;
int count;


Population p(popsize);

void setup(){
  count = 0;
}

void loop(){
  count = ++count % lifetime;
  if(count == 0 || p.isDead()){
    count = 0;
    p.evaluate();
    p.selection();
    generation++;
  }
  p.run();
  
  if(generation % 50 == 0){
    //write the DNAs in en external file to save the current DNA state
    //this should allow the user to get an better overview of the generation
  }
}
