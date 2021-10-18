#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "college.h"

struct college *make_college(char *n, char *place,int body, int div) {
  struct college *u = malloc(sizeof(struct college));
  u->name = malloc(strlen(n)+1);
  strcpy(u->name,n);
  u->location = malloc(strlen(place)+1);
  strcpy(u->location,place);
  u->student_population = body; 
  u->ncaa_div = div;
  u->next = NULL;
  return u;
}
void free_college(struct college *c) {
  free(c->name);
  free(c->location);
  free(c);
}
void print_college(struct college *uni) {
  printf("%s:\n\tLocation: %s\n\tStudent Body: %d\nNCAA Division: %d\n",uni->name,uni->location,uni->student_population,uni->ncaa_div);
}
void print_list(struct college *c) {
  while (c) {
    print_college(c); 
    c = c->next;
  }
}
struct college *insert_front(struct college *head, char *n, char *place,int body, int div) {
  struct college *new = make_college(n,place,body,div);
  new->next = head;
  return new;
}
struct college *free_list(struct college *c) {
  if (c->next) {
    free_list(c->next);
  }
  free_college(c);
  
  return c;
}
