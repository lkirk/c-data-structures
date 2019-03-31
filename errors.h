#include <stdio.h>
#include <stdlib.h>
typedef enum {
  OK = 0,
  OOM = 1,
} error_t;

static inline char *resolve_error_str(error_t err) {
  switch (err) {
  case OOM:
    return (char *)"out of memory";
  case OK:
    return (char *)"";
  }
};

void die(error_t err) {
  fprintf(stderr, "Error: %s\n", resolve_error_str(err));
  exit(err);
}
