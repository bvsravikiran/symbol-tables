#define u64 unsigned long long
struct element {
    u64 key;
    u64 val;
};
extern struct element* lookup_rbtree(u64 key);
extern void insert_rbtree();
extern void delete_rbtree();
