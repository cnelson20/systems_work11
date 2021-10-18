#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "college.h"

int main() {
  struct college *head;
  
  srand(time(NULL));
  
  // Construct list 
  head = make_college("Dartmouth College","Hanover, NH",rand(),1);
  head = insert_front(head,"Michigan Technological University","Houghton, MI",rand(),2);
  head = insert_front(head,"University of Chicago","Chicago, IL",rand(),3);

  // Print list 
  print_list(head);

  // Free memory associated to list
  free_list(head);
    
  return 0;
}
