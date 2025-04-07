#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30620);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f30657 _public_6f30657
#define public_6f306b8 _public_6f306b8
#define public_6f306c0 _public_6f306c0
#define public_6f306e5 _public_6f306e5
#define public_6f30740 _public_6f30740
#define public_6f30748 _public_6f30748
#define public_6f3076d _public_6f3076d
#define public_6f307c9 _public_6f307c9
#define public_6f307d1 _public_6f307d1
#define public_6f307f6 _public_6f307f6
#define public_6f30851 _public_6f30851
#define public_6f30859 _public_6f30859
#define public_6f3087e _public_6f3087e
#define public_6f308da _public_6f308da
#define public_6f308e2 _public_6f308e2
#define public_6f30907 _public_6f30907
#define public_6f30962 _public_6f30962
#define public_6f3096a _public_6f3096a
#define public_6f3098f _public_6f3098f
#define public_6f309eb _public_6f309eb
#define public_6f309f3 _public_6f309f3
#define public_6f30a18 _public_6f30a18
#define public_6f30a73 _public_6f30a73
#define public_6f30a7b _public_6f30a7b
#define public_6f30aa0 _public_6f30aa0
#define public_6f30afc _public_6f30afc
#define public_6f30b04 _public_6f30b04
#define public_6f30b29 _public_6f30b29
#define public_6f30b84 _public_6f30b84
#define public_6f30b8c _public_6f30b8c
#define public_6f30bb1 _public_6f30bb1
#define public_6f30c0d _public_6f30c0d
#define public_6f30c15 _public_6f30c15
#define public_6f30c3a _public_6f30c3a
#define public_6f30c95 _public_6f30c95
#define public_6f30c9f _public_6f30c9f

PROC_DECLARE(0x6f30620, internal_6f30620, public_6f30620);
extern "C" NAKED register_t __cdecl internal_6f30620()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6f5a000]
        call edi
        test eax, eax
        jne public_6f30657
/*FIXUP push offset public_6f5fe6c @0x6f3062f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe6c
        push 0x34C
/*FIXUP push offset public_6f5fe28 @0x6f30639*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30643*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        ret 
        public_6f30657 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        mov ebp, 1
        je public_6f306c0
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5fe14
        mov dword ptr ds : [esi], offset public_6f5a60c
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5fe14 @0x6f30685*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe14
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f306b8
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fdd0 @0x6f30699*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fdd0
        push 0x354
/*FIXUP push offset public_6f5fe28 @0x6f306a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f306ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f306b8 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        jmp public_6f306e5
        public_6f306c0 : nop
        mov ecx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fd80 @0x6f306c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fd80
        push 0x35A
/*FIXUP push offset public_6f5fe28 @0x6f306d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f306da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6f306e5 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f30748
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5fd6c
        mov dword ptr ds : [esi], offset public_6f5a5fc
        call edi
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5fd6c @0x6f3070e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fd6c
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f30740
/*FIXUP push offset public_6f5fd20 @0x6f3071c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fd20
        push 0x361
/*FIXUP push offset public_6f5fe28 @0x6f30726*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30730*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6f30740 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        jmp public_6f3076d
        public_6f30748 : nop
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fd80 @0x6f3074e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fd80
        push 0x367
/*FIXUP push offset public_6f5fe28 @0x6f30758*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30762*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f3076d : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f307d1
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5fd10
        mov dword ptr ds : [esi], offset public_6f5a5ec
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5fd10 @0x6f30796*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fd10
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f307c9
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fcc8 @0x6f307aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fcc8
        push 0x36E
/*FIXUP push offset public_6f5fe28 @0x6f307b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f307be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f307c9 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        jmp public_6f307f6
        public_6f307d1 : nop
        mov ecx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fc78 @0x6f307d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fc78
        push 0x374
/*FIXUP push offset public_6f5fe28 @0x6f307e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f307eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6f307f6 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f30859
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5fc68
        mov dword ptr ds : [esi], offset public_6f5a5dc
        call edi
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5fc68 @0x6f3081f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fc68
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f30851
/*FIXUP push offset public_6f5fc20 @0x6f3082d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fc20
        push 0x37B
/*FIXUP push offset public_6f5fe28 @0x6f30837*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30841*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6f30851 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        jmp public_6f3087e
        public_6f30859 : nop
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fc78 @0x6f3085f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fc78
        push 0x381
/*FIXUP push offset public_6f5fe28 @0x6f30869*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30873*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f3087e : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f308e2
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5fc10
        mov dword ptr ds : [esi], offset public_6f5a5cc
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5fc10 @0x6f308a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fc10
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f308da
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fbc8 @0x6f308bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fbc8
        push 0x388
/*FIXUP push offset public_6f5fe28 @0x6f308c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f308cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f308da : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        jmp public_6f30907
        public_6f308e2 : nop
        mov ecx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fb78 @0x6f308e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fb78
        push 0x38E
/*FIXUP push offset public_6f5fe28 @0x6f308f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f308fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6f30907 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f3096a
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5fb68
        mov dword ptr ds : [esi], offset public_6f5a5bc
        call edi
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5fb68 @0x6f30930*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fb68
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f30962
/*FIXUP push offset public_6f5fb20 @0x6f3093e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fb20
        push 0x395
/*FIXUP push offset public_6f5fe28 @0x6f30948*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30952*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6f30962 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        jmp public_6f3098f
        public_6f3096a : nop
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fad0 @0x6f30970*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fad0
        push 0x39B
/*FIXUP push offset public_6f5fe28 @0x6f3097a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30984*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f3098f : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f309f3
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5fd10
        mov dword ptr ds : [esi], offset public_6f5a5ac
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5fd10 @0x6f309b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fd10
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f309eb
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fa88 @0x6f309cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fa88
        push 0x3A2
/*FIXUP push offset public_6f5fe28 @0x6f309d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f309e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f309eb : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        jmp public_6f30a18
        public_6f309f3 : nop
        mov ecx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fa38 @0x6f309f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fa38
        push 0x3A8
/*FIXUP push offset public_6f5fe28 @0x6f30a03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30a0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6f30a18 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f30a7b
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5fa28
        mov dword ptr ds : [esi], offset public_6f5a59c
        call edi
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5fa28 @0x6f30a41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fa28
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f30a73
/*FIXUP push offset public_6f5f9e0 @0x6f30a4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f9e0
        push 0x3AF
/*FIXUP push offset public_6f5fe28 @0x6f30a59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30a63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6f30a73 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        jmp public_6f30aa0
        public_6f30a7b : nop
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5fa38 @0x6f30a81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fa38
        push 0x3B5
/*FIXUP push offset public_6f5fe28 @0x6f30a8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30a95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f30aa0 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f30b04
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5f9cc
        mov dword ptr ds : [esi], offset public_6f5a58c
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5f9cc @0x6f30ac9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f9cc
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f30afc
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5f980 @0x6f30add*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f980
        push 0x3BC
/*FIXUP push offset public_6f5fe28 @0x6f30ae7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30af1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f30afc : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        jmp public_6f30b29
        public_6f30b04 : nop
        mov ecx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5f930 @0x6f30b0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f930
        push 0x3C2
/*FIXUP push offset public_6f5fe28 @0x6f30b14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30b1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6f30b29 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f30b8c
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5f91c
        mov dword ptr ds : [esi], offset public_6f5a57c
        call edi
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5f91c @0x6f30b52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f91c
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f30b84
/*FIXUP push offset public_6f5f8d0 @0x6f30b60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f8d0
        push 0x3C9
/*FIXUP push offset public_6f5fe28 @0x6f30b6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30b74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6f30b84 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        jmp public_6f30bb1
        public_6f30b8c : nop
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5f880 @0x6f30b92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f880
        push 0x3CF
/*FIXUP push offset public_6f5fe28 @0x6f30b9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30ba6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f30bb1 : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f30c15
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5f870
        mov dword ptr ds : [esi], offset public_6f5a56c
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5f870 @0x6f30bda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f870
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f30c0d
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5f828 @0x6f30bee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f828
        push 0x3D6
/*FIXUP push offset public_6f5fe28 @0x6f30bf8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30c02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6f30c0d : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        jmp public_6f30c3a
        public_6f30c15 : nop
        mov ecx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5f7d8 @0x6f30c1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f7d8
        push 0x3DC
/*FIXUP push offset public_6f5fe28 @0x6f30c25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30c2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6f30c3a : nop
        push 0xC
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f30c9f
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], offset public_6f5f7c4
        mov dword ptr ds : [esi], offset public_6f5a55c
        call edi
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f5f7c4 @0x6f30c63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f7c4
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f30c95
/*FIXUP push offset public_6f5f778 @0x6f30c71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f778
        push 0x3E3
/*FIXUP push offset public_6f5fe28 @0x6f30c7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30c85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6f30c95 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        pop edi
        pop esi
        pop ebp
        ret 
        public_6f30c9f : nop
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5f728 @0x6f30ca5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f728
        push 0x3E9
/*FIXUP push offset public_6f5fe28 @0x6f30caf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5fe28
        mov eax, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f30cb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f30620)
    }
}

#undef public_6f30657
#undef public_6f306b8
#undef public_6f306c0
#undef public_6f306e5
#undef public_6f30740
#undef public_6f30748
#undef public_6f3076d
#undef public_6f307c9
#undef public_6f307d1
#undef public_6f307f6
#undef public_6f30851
#undef public_6f30859
#undef public_6f3087e
#undef public_6f308da
#undef public_6f308e2
#undef public_6f30907
#undef public_6f30962
#undef public_6f3096a
#undef public_6f3098f
#undef public_6f309eb
#undef public_6f309f3
#undef public_6f30a18
#undef public_6f30a73
#undef public_6f30a7b
#undef public_6f30aa0
#undef public_6f30afc
#undef public_6f30b04
#undef public_6f30b29
#undef public_6f30b84
#undef public_6f30b8c
#undef public_6f30bb1
#undef public_6f30c0d
#undef public_6f30c15
#undef public_6f30c3a
#undef public_6f30c95
#undef public_6f30c9f
