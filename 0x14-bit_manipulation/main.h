#ifndef MAIN_H
#define MAIN_H
unsigned long int _power(unsigned int b, unsigned int p);
unsigned int binary_to_uint(const char *bu);
void print_binary(unsigned long int nb);
int get_bit(unsigned long int n, unsigned int mask);
int set_bit(unsigned long int *n, unsigned int mask);
int clear_bit(unsigned long int *n, unsigned int mask);
unsigned int flip_bits(unsigned long int na, unsigned long int ma);
int get_endianness(void);
int _putchar(char c);
#endif /*MAIN_H*/
