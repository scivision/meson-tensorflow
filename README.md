# meson-tensorflow

example of using Meson build system with Tensorflow

## Usage

1. download the [Tensorflow C library](https://www.tensorflow.org/install/lang_c#download) and extract
   Note: for TF 1.14.0, I noticed that include/tensorflow/c/tf_attrtype.h was missing from Windows--I just copied it over from Linux TF.
2. configure build via Meson, where `tf_root` is the top-level tensorflow directory to use

  ```sh
  meson build -Dtf_root=c:/tensorflow
  ```
3. compile and test

  ```sh
  meson test -C build -v
  ```