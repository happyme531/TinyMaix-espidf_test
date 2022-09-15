#pragma once
/*
Test Models
mnist

mnist: 28x28x1 input,4->8->16, pad valid
mnist_q_valid.h 2.4KB Flash 1.4KB RAM
suit for MCU have >=16KB Flash, >=2KB RAM
cifar

cifar: 32x32x3 input, 32->32->64->1024->10, 5x5 conv
cifar10_q.h 89KB Flash 11KB RAM
suit for MCU have >=128KB Flash, >=20KB RAM
vww96

vww96: vww model based on mobile net v1 0.25 96x96x3 input
vww96_q.tmdl 227KB Flash 54KB RAM
suit for MCU have >=256KB Flash, >=64KB RAM
https://mlcommons.org/en/inference-tiny-07/
mbnet128

mbnet128: mobile net v1 0.25 128x128x3 input
mbnet128_0.25_q.tmdl 485KB Flash 96KB RAM
suit for MCU have >=512KB Flash, >=128KB RAM
https://github.com/fchollet/deep-learning-models/releases

*/
extern "C" int test_mnist(int argc, char** argv);
extern "C" int test_cifar(int argc, char** argv);
extern "C" int test_vww96(int argc, char** argv);
extern "C" int test_mbnet128(int argc, char** argv);
