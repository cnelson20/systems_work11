struct college; 

struct college *make_college(char *name, char *loc, int body, int div);
void print_college(struct college *uni);
void print_list(struct college *c); 
struct college *insert_front(struct college *head, char *n, char *place,int body, int div);
struct college *free_list(struct college *c);


struct college {
  char *name;
  char *location;
  int ncaa_div;
  int student_population;
  struct college *next;
};
