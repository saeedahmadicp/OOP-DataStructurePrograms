#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

void general_data_acces(int *serial_no,int *account_no);
void create_account(void);
void open_account(void);
void bank_domain(void);
void bank_personal(void);
long long bank_data_read(void);
void bank_data_change(long long bank_amount);

#endif // MAIN_H_INCLUDED
