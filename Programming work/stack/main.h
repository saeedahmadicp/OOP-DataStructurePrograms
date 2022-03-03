#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
enum status_t {FAILURE, SUCCESS};

static bool is_empty(void);
static bool is_full(void);
extern status_t push(int data);
extern status_t pull(int *data);
extern int size(void);



#endif // MAIN_H_INCLUDED
