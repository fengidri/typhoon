/**
 *   author       :   丁雪峰
 *   time         :   2015-07-13 09:48:36
 *   email        :   fengidri@yeah.net
 *   version      :   1.0.1
 *   description  :
 */
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include "list.h"

#include <malloc.h>
#include <stdbool.h>

#define  Malloc malloc
#define  Free  free

list_t *list_new()
{

    list_t *l;
    l = Malloc(sizeof(list_t));
    l->head = NULL;
    l->tail = NULL;
    l->len = 0;
    return  l;
}

bool list_append(list_t *l, void *data)
{
    list_node_t *node;
    node = Malloc(sizeof(list_node_t));
    if (NULL == node) return false;

    l->len += 1;
    node->data = data;

    if (NULL == l->tail && NULL == l->head)
    {
        l->head = l->tail = node;
        return true;
    }

    node->pre = l->tail;
    node->next = NULL;
    l->tail->next = node;
    l->tail = node;

    return true;

}

void *list_rpop(list_t *l)
{
    void *data;
    if (!l->tail)
        return NULL;

    data = l->tail->data;
    if (l->tail->pre)
        l->tail->pre->next = NULL;
    l->tail = l->tail->pre;
    Free(l->tail);
    return data;
}
