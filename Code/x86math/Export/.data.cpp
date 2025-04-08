#ifndef __INTELLISENSE__
#include "..\PCH.h"
// clang-format off

#pragma init_seg(lib)
#pragma section("Xdata", read, write)
#define SECTION __declspec(allocate("Xdata")) __declspec(align(1))

extern "C" {
SECTION char _data_6F74000[0x4] = { /* 0 [0x4] */ };
SECTION void* _off_6F74004 = __ptr_func(0x6F71000, 0);
SECTION char _data_6F74008[0x4] = { /* 0 [0x4] */ };
SECTION char _noop_6F7400C[0x14] = { /* 0 [0x14] */ };
SECTION char _data_6F74020[0xD] = { 0x33i8, 0x44i8, 0x4Di8, 0x61i8, 0x74i8, 0x68i8, 0x45i8, 0x6Ei8, 0x67i8, 0x69i8, 0x6Ei8, 0x65i8, 0x00i8 };
SECTION char _noop_6F7402D[0x3] = { /* 0 [0x3] */ };
SECTION char _data_6F74030[0x400] = { /* 0 [0x1D0]  ?? [0x230] */ };
SECTION char _data_6F74430[0x1] = { /* 0 [0x0]  ?? [0x1] */ };
SECTION char _noop_6F74431[0x7] = { /* 0 [0x0]  ?? [0x7] */ };
SECTION char _data_6F74438[0x4] = { /* 0 [0x0]  ?? [0x4] */ };
SECTION char _data_6F7443C[0x4] = { /* 0 [0x0]  ?? [0x4] */ };
SECTION char _data_6F74440[0x4] = { /* 0 [0x0]  ?? [0x4] */ };
SECTION char _data_6F74444[0x4] = { /* 0 [0x0]  ?? [0x4] */ };
SECTION char _data_6F74448[0x4] = { /* 0 [0x0]  ?? [0x4] */ };
SECTION char _data_6F7444C[0x4] = { /* 0 [0x0]  ?? [0x4] */ };
SECTION char _noop_6F74450[0xBB0] = { /* 0 [0x0]  ?? [0xBB0] */ };
} // extern "C"

// clang-format on
#endif // __INTELLISENSE__
