/**
 *   author       :   丁雪峰
 *   time         :   2015-07-13 09:53:51
 *   email        :   fengidri@yeah.net
 *   version      :   1.0.1
 *   description  :
 */
#ifndef  __LIST_H__
#define __LIST_H__

struct list_node{
    struct list_node *next;
    struct list_node *pre;
    void *data;
};

struct list{
    struct list_node *head;
    struct list_node *tail;
    int len;
};

typedef list_node list_node_t;
typedef list list_t;

#endif


