#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - allocated string
 * @len:lengh of the string
 * @next:point to the next node
 */
typedef struct list {
    char *str;
    unsigned int len;
    struct list *next;

} list_t;
size_t print_list(const list_t *h);
int _putchar(char);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
