#define assertEQ(x, y) return x == y;

#define TEST                                                                   \
  printf(__func__);                                                            \
  printf(": ")

#define TESTS(...) int (*f[])() = {__VA_ARGS__}

#define RUN_ALL                                                                \
  for (int i = 0; i < N_TEST; i++) {                                           \
    if (f[i]()) {                                                              \
      printf("\033[0;32mPASSED\n\033[0m");                                     \
    } else {                                                                   \
      printf("\033[0;31mFAILED\n\033[0m");                                     \
    }                                                                          \
  }
