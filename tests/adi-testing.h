#define assertEQ(x, y) return x == y;

#define TEST                                                                   \
  printf(__func__);                                                            \
  printf(": ")

#define TESTS(...) int (*f[])() = {__VA_ARGS__}

#define RUN_ALL                                                                \
  for (int i = 0; i < N_TEST; i++) {                                           \
    if (f[i]()) {                                                              \
      printf("PASSED\n");                                                      \
    } else {                                                                   \
      printf("FAILED\n");                                                      \
    }                                                                          \
  }
