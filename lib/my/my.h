/*
** EPITECH PROJECT, 2023
** MY_ISNEG
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#ifndef PROTO
    #define PROTO
    #include <stdarg.h>
    #define UP(str, maj) (maj == 1) ? (my_strupcase(my_strdup(str))) : (str)
void ls_flag_alphar1(char **dir, int i);
int my_compute_power_rec(int n, int p);
int my_compute_square_root(int n);
int my_find_prime_sup(int nb);
int my_getnbr_str(char *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int n);
void my_putchar(char c);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strstr(char *str, char const *to_find);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_printf(const char *format, ...);
int flag_d_i(const char *format, va_list list, int *i);
int flag_s(const char *format, va_list list, int *i);
int flag_c(const char *format, va_list list, int *i);
int flag_percent(const char *format, va_list list, int *i);
int flag_o(const char *format, va_list list, int *i);
int flag_u(const char *format, va_list list, int *i);
int flag_x(const char *format, va_list list, int *i);
int flag_alphax(const char *format, va_list list, int *i);
int flag_e(const char *format, va_list list, int *i);
int flag_alphae(const char *format, va_list list, int *i);
int flag_f(const char *format, va_list list, int *i);
int flag_alphaf(const char *format, va_list list, int *i);
int flag_p(const char *format, va_list list, int *i);
int flag_point(const char *format, va_list list, int *i);
int flag_a(const char *format, va_list list, int *i);
int flag_alphaa(const char *format, va_list list, int *i);
int flag_g(const char *format, va_list list, int *i);
int mod_h(const char *format, va_list list, int *i);
int mod_hh(const char *format, int nb2, int *i);
int mod_l(const char *format, va_list list, int *i);
int mod_ll(const char *format, unsigned long long nb2, int *i);
int mod_alphal(const char *format, va_list list, int *i);
char *my_strdup(char const *src);
int my_putnbr_base(unsigned long long nbr, int base, int maj);
char *my_nbr_to_str(int n);
int my_intlen(int n);
int my_double_to_scient(double nb, int maj, int precision);
int my_double_f(double nb, int maj, int precision);
int my_pointer(void *pointeur);
int my_precision(const char *format, double nb, int *i);
int my_double_to_hex(double nb, int maj, int precision);
int my_f_or_e(double nb, int maj, int precision);
char *my_strcatchar(char *dest, char const src);
char *my_sort_str(char *str);
char *my_strdouble_to_str(char *str);
typedef void (*Ls)(char **, int);
int ls_color(char *name);
void ls_default(char **dir, int i);
void ls_flag_a(char **dir, int i);
void ls_flag_r(char **dir, int i);
void ls_flag_alphar(char **dir, int i);
void ls_flag_t(char **dir, int i);
void ls_flag_d(char **dir, int i);
void ls_flag_l(char **dir, int i);
void ls_flag_ar(char **dir, int i);
void ls_printdirs(char **dirstab);
int my_tablen(char **tab);
char *my_path_to_filename(char *file);
char **my_sort_tab(char **tab);
void my_tabcatstr(char *str, char **tab);
char **my_revtab(char **tab);
void my_sort_tab_edit_date(char **dir);
char *ls_octal(unsigned int nbr, char *str);
void ls_perm(char *str);
char **my_tabcpy(char **dest, char **src);
char **my_rm_str_to_tab(char **tab, char *str);
#endif
