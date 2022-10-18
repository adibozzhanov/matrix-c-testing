// testing framework done in 4 lines of code
typedef struct _test {int ret;const char *name;} test;
#define assertEQ(x, y)test _t;_t.ret = x == y;_t.name = __func__;return _t
#define TESTS(...) test (*f[])() = {__VA_ARGS__, NULL}
#define RUN_ALL int _i=0;while(f[_i]!=NULL){test _t=f[_i]();if(_t.ret){printf("├── %s : \033[0;32mPASS\n\033[0m",_t.name);}else{printf("├── %s : \033[0;31mFAIL\n\033[0m",_t.name);}_i++;}
