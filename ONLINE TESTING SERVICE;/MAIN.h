#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

void student_login(void);
void teacher_login(void);
void math_games(void);
void online_test(void);
void quick_brain_game(void);
void mcqs_writting(void);
void create_account(void);
void test_result(void);
void store_record(char filename[],int marks, int t_marks);
void show_record(void);
void student_record(void);
void review_the_test(void);
void GetPassword(char* password, int SIZE);
void GetCipher(char *encrypt, char* original, int key);
void GetDecipher(char *decode, char* encrypt, int key);
int GeneratePrimeNumber(int num);
int read_rollno(void);
void store_rollno(int roll_no);
void admin_account(void);
void teacher_account(void);
void open_teacher_account(void);
void open_admin_account(void);
void admin_login(void);
#endif // MAIN_H_INCLUDED
