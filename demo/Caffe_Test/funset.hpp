#ifndef FBC_CAFFE_TEST_FUNSET_HPP_
#define FBC_CAFFE_TEST_FUNSET_HPP_

int mnist_train();
int mnist_predict();
int mnist_convert();
int get_layer_type_list();
int test_caffe_common();
int test_caffe_util_mkl_alternate();
int test_caffe_util_math_functions();
int test_caffe_syncedmem();

#endif // FBC_CAFFE_TEST_FUNSET_HPP_