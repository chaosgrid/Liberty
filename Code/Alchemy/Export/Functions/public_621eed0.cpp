#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ee50);
CLANG_FORWARD_PROC_SYMBOL(public_62209e0);
CLANG_FORWARD_PROC_SYMBOL(public_6220ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6220e20);
CLANG_FORWARD_PROC_SYMBOL(public_6220eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6220ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6220ef0);
CLANG_FORWARD_PROC_SYMBOL(public_62211b0);
CLANG_FORWARD_PROC_SYMBOL(public_6221250);
CLANG_FORWARD_PROC_SYMBOL(public_6221280);
CLANG_FORWARD_PROC_SYMBOL(public_62212e0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248b08);

#define public_621ef1d _public_621ef1d
#define public_621ef57 _public_621ef57
#define public_621efac _public_621efac
#define public_621efbc _public_621efbc
#define public_621f04b _public_621f04b
#define public_621f090 _public_621f090
#define public_621f108 _public_621f108
#define public_621f115 _public_621f115
#define public_621f138 _public_621f138
#define public_621f15a _public_621f15a
#define public_621f1ae _public_621f1ae
#define public_621f1b4 _public_621f1b4
#define public_621f1d0 _public_621f1d0
#define public_621f212 _public_621f212
#define public_621f233 _public_621f233
#define public_621f252 _public_621f252
#define public_621f260 _public_621f260
#define public_621f2a1 _public_621f2a1
#define public_621f2b6 _public_621f2b6
#define public_621f2c2 _public_621f2c2
#define public_621f2ce _public_621f2ce
#define public_621f2e6 _public_621f2e6
#define public_621f2fe _public_621f2fe
#define public_621f30a _public_621f30a
#define public_621f30e _public_621f30e
#define public_621f311 _public_621f311
#define public_621f32c _public_621f32c
#define public_621f348 _public_621f348
#define public_621f367 _public_621f367
#define public_621f373 _public_621f373
#define public_621f3c4 _public_621f3c4
#define public_621f3d2 _public_621f3d2
#define public_621f3de _public_621f3de
#define public_621f40f _public_621f40f
#define public_621f420 _public_621f420
#define public_621f450 _public_621f450
#define public_621f45c _public_621f45c
#define public_621f49a _public_621f49a
#define public_621f4bf _public_621f4bf
#define public_621f4df _public_621f4df
#define public_621f502 _public_621f502
#define public_621f517 _public_621f517
#define public_621f52b _public_621f52b
#define public_621f54d _public_621f54d
#define public_621f577 _public_621f577
#define public_621f5aa _public_621f5aa
#define public_621f5b8 _public_621f5b8
#define public_621f5c8 _public_621f5c8
#define public_621f5d7 _public_621f5d7
#define public_621f5d9 _public_621f5d9

PROC_DECLARE(0x621eed0, internal_621eed0, public_621eed0);
extern "C" NAKED register_t __cdecl internal_621eed0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248b08 @0x621eed2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248b08
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        mov eax, dword ptr ss : [esp+0x7C]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+8]
        push edi
        mov edi, dword ptr ss : [esp+0x88]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x24], esi
        mov eax, dword ptr ds : [edi+0x1C]
        lea ebx, ds:[edi+0x1C]
        cmp eax, esi
        je public_621ef1d
        mov ecx, ebx
        call public_62212e0
        cmp esi, ebp
        mov dword ptr ds : [ebx], esi
        je public_621ef1d
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+4]
        public_621ef1d : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0x8000
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [edi+0xC]
        add edi, 8
        mov esi, eax
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x20], esi
        push eax
        push ecx
        mov ecx, edi
        call public_62211b0
        mov ecx, edi
        call public_6220eb0
        cmp eax, esi
        jae public_621efac
        cmp esi, ebp
        mov eax, esi
        jge public_621ef57
        xor eax, eax
        public_621ef57 : nop
        shl eax, 4
        push eax
        call public_624612c
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [edi+8]
        push ebx
        push eax
        push ecx
        mov ecx, edi
        call public_6221280
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        push edx
        push eax
        mov ecx, edi
        call public_6221250
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        mov ecx, esi
        add esp, 4
        shl ecx, 4
        add ecx, ebx
        mov dword ptr ds : [edi+0xC], ecx
        mov ecx, edi
        call public_6220ed0
        shl eax, 4
        add eax, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], eax
        public_621efac : nop
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], ebp
        jle public_621f252
        public_621efbc : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        xor esi, esi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x80], esi
        cmp eax, esi
        lea ecx, ss:[esp+0x10]
        jne public_621f04b
        call public_6220e20
        mov eax, dword ptr ds : [public_6257a38]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        jge public_621f090
/*FIXUP push offset public_62560fc @0x621f00b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62560fc
        push 0x113
        mov eax, 0x100001
/*FIXUP push offset public_62560b8 @0x621f01a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62560b8
/*FIXUP push offset public_625506c @0x621f01f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        call public_6220e20
        or eax, 0xFFFFFFFF
        jmp public_621f5d9
        public_621f04b : nop
        mov dword ptr ss : [esp+0x30], 8
        mov dword ptr ss : [esp+0x34], offset public_625510c
        call public_6220e20
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jl public_621f260
        cmp dword ptr ss : [esp+0x3C], 0xEE223B51
        jne public_621f090
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x1C], edx
        public_621f090 : nop
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, 0x8000
        jne public_621f1b4
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        cmp ebp, esi
        push eax
        jne public_621f108
        mov esi, dword ptr ss : [esp+0x48]
        mov ebp, dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x6C]
        call public_62209e0
        mov dword ptr ss : [esp+0x6C], ebp
        mov dword ptr ss : [esp+0x70], esi
        mov dword ptr ss : [esp+0x74], 0x8000
        mov ecx, dword ptr ss : [esp+0x88]
        lea edx, ss:[esp+0x68]
        push edx
        push 1
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, edi
        push eax
        mov byte ptr ss : [esp+0x8C], 1
        call public_6220ef0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x80], 0
        call public_6220e20
        inc dword ptr ss : [esp+0x18]
        jmp public_621f212
        public_621f108 : nop
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x38]
        cmp ebp, esi
        mov ebx, eax
        jle public_621f138
        xor ebp, ebp
        public_621f115 : nop
        mov edx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [eax+ebp]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x38]
        cmp eax, ebx
        jg public_621f138
        mov eax, dword ptr ss : [esp+0x18]
        inc esi
        add ebp, 0x10
        cmp esi, eax
        jl public_621f115
        public_621f138 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ss : [esp+0x44]
        test eax, eax
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x48], eax
        je public_621f15a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_621f15a : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x54], ebp
        mov eax, dword ptr ss : [esp+0x88]
        lea ecx, ss:[esp+0x48]
        shl esi, 4
        mov eax, dword ptr ds : [eax+0xC]
        push ecx
        add esi, eax
        push 1
        push esi
        mov ecx, edi
        mov byte ptr ss : [esp+0x8C], 2
        call public_6220ef0
        mov byte ptr ss : [esp+0x80], 0
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        je public_621f1ae
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x48], 0
        public_621f1ae : nop
        inc dword ptr ss : [esp+0x18]
        jmp public_621f212
        public_621f1b4 : nop
        mov ebp, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ss : [esp+0x38]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x58], eax
        je public_621f1d0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_621f1d0 : nop
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebp
        mov dword ptr ss : [esp+0x64], esi
        mov eax, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x88], 3
        call public_6220ac0
        mov byte ptr ss : [esp+0x80], 0
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        je public_621f212
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x58], 0
        public_621f212 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        test eax, eax
        je public_621f233
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], 0
        public_621f233 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_621efbc
        cmp dword ptr ss : [esp+0x1C], 0x8000
        jne public_621f2a1
        public_621f252 : nop
        mov ebx, dword ptr ss : [esp+0x88]
        xor edi, edi
        mov dword ptr ds : [ebx+0x18], edi
        jmp public_621f2ce
        public_621f260 : nop
        mov ecx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_6256090 @0x621f266*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256090
        push 0x11D
        mov eax, 0x100001
/*FIXUP push offset public_62560b8 @0x621f275*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62560b8
/*FIXUP push offset public_625506c @0x621f27a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        call public_6220e20
        or eax, 0xFFFFFFFF
        jmp public_621f5d9
        public_621f2a1 : nop
        mov edx, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, ecx
        je public_621f2c2
        mov esi, dword ptr ss : [esp+0x1C]
        public_621f2b6 : nop
        cmp dword ptr ds : [eax+8], esi
        je public_621f2c2
        add eax, 0x10
        cmp eax, ecx
        jne public_621f2b6
        public_621f2c2 : nop
        mov ebx, dword ptr ss : [esp+0x88]
        mov dword ptr ds : [edx+0x18], eax
        xor edi, edi
        public_621f2ce : nop
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ebx+0xC]
        cmp esi, eax
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ss : [esp+0x18], eax
        je public_621f32c
        mov edi, dword ptr ss : [esp+0x8C]
        public_621f2e6 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edi+0xC]
        cmp edx, 0x8000
        je public_621f30e
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ecx
        je public_621f30a
        public_621f2fe : nop
        cmp dword ptr ds : [eax+8], edx
        je public_621f30a
        add eax, 0x10
        cmp eax, ecx
        jne public_621f2fe
        public_621f30a : nop
        mov eax, dword ptr ds : [eax]
        jmp public_621f311
        public_621f30e : nop
        inc dword ptr ds : [ebx+4]
        public_621f311 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_6257a3c]
        push ecx
        push eax
        mov ebp, dword ptr ds : [edx]
        push edx
        call dword ptr ss : [ebp+0x50]
        add esi, 0x10
        cmp esi, dword ptr ss : [esp+0x18]
        jne public_621f2e6
        xor edi, edi
        public_621f32c : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, ebp
        mov edx, dword ptr ss : [ebp]
        call dword ptr ds : [edx+0x30]
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x14], edi
        jle public_621f517
        public_621f348 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ecx
        je public_621f373
        mov edx, dword ptr ss : [esp+0x28]
        public_621f367 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_621f373
        add eax, 0x10
        cmp eax, ecx
        jne public_621f367
        public_621f373 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x8C], edi
        mov dword ptr ss : [esp+0x80], 4
        mov dword ptr ss : [esp+0x88], edi
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x8C]
        push ecx
/*FIXUP push offset public_6255f18 @0x621f398*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255f18
        push esi
        mov byte ptr ss : [esp+0x8C], 5
        call dword ptr ds : [eax]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x88]
        jl public_621f40f
        cmp eax, edi
        je public_621f3c4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x88], edi
        public_621f3c4 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ecx
        je public_621f3de
        mov edx, dword ptr ss : [esp+0x2C]
        public_621f3d2 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_621f3de
        add eax, 0x10
        cmp eax, ecx
        jne public_621f3d2
        public_621f3de : nop
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x88]
        push edx
/*FIXUP push offset public_62558e8 @0x621f3e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62558e8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ss : [esp+0x88]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x9C]
        jmp public_621f4bf
        public_621f40f : nop
        cmp eax, edi
        je public_621f420
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x88], edi
        public_621f420 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x88]
        push eax
/*FIXUP push offset public_62558e8 @0x621f42a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62558e8
        push esi
        call dword ptr ds : [edx]
        test eax, eax
        jl public_621f49a
        mov dword ptr ss : [esp+0x1C], edi
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x80], 6
        je public_621f45c
        mov edx, dword ptr ss : [esp+0x2C]
        public_621f450 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_621f45c
        add eax, 0x10
        cmp eax, ecx
        jne public_621f450
        public_621f45c : nop
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
/*FIXUP push offset public_62558fc @0x621f463*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62558fc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xAC]
        mov byte ptr ss : [esp+0x80], 5
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, edi
        je public_621f4bf
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_621f4bf
        public_621f49a : nop
        mov edx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_6256070 @0x621f4a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256070
        push 0x17B
        mov eax, 0x100001
/*FIXUP push offset public_62560b8 @0x621f4af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62560b8
/*FIXUP push offset public_625506c @0x621f4b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_621f4bf : nop
        mov eax, dword ptr ss : [esp+0x88]
        mov byte ptr ss : [esp+0x80], 4
        cmp eax, edi
        je public_621f4df
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x88], edi
        public_621f4df : nop
        mov eax, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        cmp eax, edi
        je public_621f502
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x8C], edi
        public_621f502 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_621f348
        public_621f517 : nop
        mov ebx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        cmp ebx, eax
        je public_621f5d7
        mov ebp, 1
        public_621f52b : nop
        cmp dword ptr ds : [ebx+4], ebp
        jne public_621f5c8
        mov eax, dword ptr ds : [ebx]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x2C]
        mov esi, eax
        cmp esi, edi
        mov dword ptr ss : [esp+0x88], 0
        je public_621f5b8
        public_621f54d : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x24]
        push eax
        push esi
        call dword ptr ds : [edx+0x68]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x88]
        fnstsw ax
        and eax, 0x4100
        jne public_621f577
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x88], ecx
        public_621f577 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x2C]
        mov edi, eax
        test edi, edi
        je public_621f5aa
        push edi
        call public_621ee50
        fcomp dword ptr ss : [esp+0x8C]
        add esp, 4
        fnstsw ax
        test ah, 5
        jnp public_621f5aa
        push edi
        call public_621ee50
        fstp dword ptr ss : [esp+0x8C]
        add esp, 4
        public_621f5aa : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x34]
        mov esi, eax
        xor edi, edi
        cmp esi, edi
        jne public_621f54d
        public_621f5b8 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x88]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x6C]
        public_621f5c8 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add ebx, 0x10
        cmp ebx, eax
        jne public_621f52b
        public_621f5d7 : nop
        xor eax, eax
        public_621f5d9 : nop
        mov ecx, dword ptr ss : [esp+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 8
        UNREACHABLE_TRAP(0x621eed0)
    }
}

#undef public_621ef1d
#undef public_621ef57
#undef public_621efac
#undef public_621efbc
#undef public_621f04b
#undef public_621f090
#undef public_621f108
#undef public_621f115
#undef public_621f138
#undef public_621f15a
#undef public_621f1ae
#undef public_621f1b4
#undef public_621f1d0
#undef public_621f212
#undef public_621f233
#undef public_621f252
#undef public_621f260
#undef public_621f2a1
#undef public_621f2b6
#undef public_621f2c2
#undef public_621f2ce
#undef public_621f2e6
#undef public_621f2fe
#undef public_621f30a
#undef public_621f30e
#undef public_621f311
#undef public_621f32c
#undef public_621f348
#undef public_621f367
#undef public_621f373
#undef public_621f3c4
#undef public_621f3d2
#undef public_621f3de
#undef public_621f40f
#undef public_621f420
#undef public_621f450
#undef public_621f45c
#undef public_621f49a
#undef public_621f4bf
#undef public_621f4df
#undef public_621f502
#undef public_621f517
#undef public_621f52b
#undef public_621f54d
#undef public_621f577
#undef public_621f5aa
#undef public_621f5b8
#undef public_621f5c8
#undef public_621f5d7
#undef public_621f5d9
