#ifndef LL_CYCLE_H
#define LL_CYCLE_H
typedef struct node {
    int value;
    struct node *next;
} node;

int ll_has_cycle(node *);
#endif

/**
 * ifdef: 如果宏已经被定义过，那么后面的代码就不会被编译会被忽略
 * ifndef: 如果宏没有被定义，那么后面的代码块就会被编译
 * 本文件这样写的好处在于避免头文件被多次重复包含
 */