project('Hello Tensorflow', 'c')

cc = meson.get_compiler('c')

tf_root = get_option('tf_root')
#meson.source_root() / '../../libtensorflow-cpu-windows-x86_64-1.14.0'

tf_lib = cc.find_library('tensorflow', dirs: tf_root / 'lib')
tensorflow = declare_dependency(dependencies: tf_lib, include_directories: tf_root / 'include')

hello_exe = executable('hello_tf', 'hello_tf.c',
  dependencies: tensorflow)

test('hello', hello_exe, timeout: 10)