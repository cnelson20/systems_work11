#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "college.h"

int main() {
  struct college *uc;
  struct college *michtech;
  struct college *dartmouth;
  
  srand(time(NULL));
  
  // Construct list 
  dartmouth = generate_college("Dartmouth College","Hanover, NH",rand(),1);
  michtech = insert_front(dartmouth,"Michigan Technological University","Houghton, MI",rand(),2);
  uc = insert_front(michtech,"University of Chicago","Chicago, IL",rand(),3);

  // Print list 
  print_list(uc);

  // Free memory associated to list
  free_list(uc);
    
  return 0;
}
