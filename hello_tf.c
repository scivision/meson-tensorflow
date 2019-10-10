#include <stdio.h>
#include <tensorflow/c/c_api.h>

int main(void) {
  printf("TensorFlow C library version %s\n", TF_Version());
  return 0;
}