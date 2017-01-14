/* 类似于一个简单的map。只不过这个map只有PREFIX_HASH_SIZE个桶
 * 冲突的解决方法是使用链表的方法来解决。
 */
/* stats */
void stats_prefix_init(void);
void stats_prefix_clear(void);
void stats_prefix_record_get(const char *key, const size_t nkey, const bool is_hit);
void stats_prefix_record_delete(const char *key, const size_t nkey);
void stats_prefix_record_set(const char *key, const size_t nkey);
/*@null@*/
char *stats_prefix_dump(int *length);
