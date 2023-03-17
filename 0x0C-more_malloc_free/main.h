#ifndef MAIN_H
#define MAIN_H

char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char *argv[]);
void add_nums(char *final_prod, char *next_prod, int next_len);
void get_prod(char *prod, char *mult, int digit, int zeroes);
int get_digit(char c);
char *iterate_zeroes(char *str);
char *create_xarray(int size);
int find_len(char *str);

#endif /* MAIN_H */
