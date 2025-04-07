#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

#define public_6d0a00e _public_6d0a00e
#define public_6d0a079 _public_6d0a079
#define public_6d0a0e7 _public_6d0a0e7
#define public_6d0a107 _public_6d0a107
#define public_6d0a1dd _public_6d0a1dd
#define public_6d0a1e8 _public_6d0a1e8
#define public_6d0a225 _public_6d0a225
#define public_6d0a26e _public_6d0a26e
#define public_6d0a27a _public_6d0a27a
#define public_6d0a2a8 _public_6d0a2a8
#define public_6d0a2b4 _public_6d0a2b4
#define public_6d0a2df _public_6d0a2df
#define public_6d0a34b _public_6d0a34b
#define public_6d0a42b _public_6d0a42b
#define public_6d0a436 _public_6d0a436
#define public_6d0a50b _public_6d0a50b
#define public_6d0a60b _public_6d0a60b
#define public_6d0a652 _public_6d0a652
#define public_6d0a693 _public_6d0a693
#define public_6d0a6b5 _public_6d0a6b5
#define public_6d0a6bb _public_6d0a6bb

PROC_DECLARE(0x6d09f96, internal_6d09f96, public_6d09f96);
extern "C" NAKED register_t __cdecl internal_6d09f96()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x8098
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0a00e
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x38]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x38]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x38], eax
/*FIXUP push offset public_6d65a20 @0x6d09fe3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65a20
        push 0x9AE
/*FIXUP push offset public_6d65a60 @0x6d09fed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65a60
/*FIXUP push offset public_6d65aac @0x6d09ff2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65aac
        mov ecx, dword ptr ss : [ebp-0x38]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0a6bb
        public_6d0a00e : nop
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x128]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0a079
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x3C]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x3C], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x3C]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x3C], eax
/*FIXUP push offset public_6d65ac8 @0x6d0a04e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65ac8
        push 0x9B2
/*FIXUP push offset public_6d65b28 @0x6d0a058*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65b28
/*FIXUP push offset public_6d65b74 @0x6d0a05d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65b74
        mov ecx, dword ptr ss : [ebp-0x3C]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0a6bb
        public_6d0a079 : nop
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        cmp dword ptr ds : [eax+0x134], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d0a0e7
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x40]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x40]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x40], eax
/*FIXUP push offset public_6d65b90 @0x6d0a0bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65b90
        push 0x9B8
/*FIXUP push offset public_6d65bb8 @0x6d0a0c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65bb8
/*FIXUP push offset public_6d65c04 @0x6d0a0cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65c04
        mov ecx, dword ptr ss : [ebp-0x40]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0a6bb
        public_6d0a0e7 : nop
        mov dword ptr ss : [ebp-4], 0
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0a107
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d0a107 : nop
        lea eax, ss:[ebp-4]
        push eax
        push 0
        push 0
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d0a1e8
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65c20 @0x6d0a141*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65c20
        lea ecx, ss:[ebp-0x2040]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x8064], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x2044]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x2044], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x2044]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x2044], edx
        mov eax, dword ptr ss : [ebp-0x8064]
        push eax
        push 0x9BF
/*FIXUP push offset public_6d65c40 @0x6d0a19f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65c40
/*FIXUP push offset public_6d65c8c @0x6d0a1a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65c8c
        mov ecx, dword ptr ss : [ebp-0x2044]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x2048], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0a1dd
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d0a1dd : nop
        mov eax, dword ptr ss : [ebp-0x2048]
        jmp public_6d0a6bb
        public_6d0a1e8 : nop
        mov dword ptr ss : [ebp-0x8068], 0
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x274], 0
        jne public_6d0a225
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x244]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x240]
        push edx
        push 0
        push 0
        lea eax, ss:[ebp-0x28]
        push eax
        call dword ptr ds : [public_6d5e164]
        jmp public_6d0a2df
        public_6d0a225 : nop
        lea ecx, ss:[ebp-0x28]
        mov dword ptr ss : [ebp-0x8068], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x240]
        mov dword ptr ss : [ebp-0x806C], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x244]
        mov dword ptr ss : [ebp-0x8070], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x26C]
        cmp ecx, dword ptr ss : [ebp-0x806C]
        jae public_6d0a26e
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x26C]
        mov dword ptr ss : [ebp-0x8090], eax
        jmp public_6d0a27a
        public_6d0a26e : nop
        mov ecx, dword ptr ss : [ebp-0x806C]
        mov dword ptr ss : [ebp-0x8090], ecx
        public_6d0a27a : nop
        mov edx, dword ptr ss : [ebp-0x8090]
        mov dword ptr ss : [ebp-0x806C], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x270]
        cmp ecx, dword ptr ss : [ebp-0x8070]
        jae public_6d0a2a8
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x270]
        mov dword ptr ss : [ebp-0x8094], eax
        jmp public_6d0a2b4
        public_6d0a2a8 : nop
        mov ecx, dword ptr ss : [ebp-0x8070]
        mov dword ptr ss : [ebp-0x8094], ecx
        public_6d0a2b4 : nop
        mov edx, dword ptr ss : [ebp-0x8094]
        mov dword ptr ss : [ebp-0x8070], edx
        mov eax, dword ptr ss : [ebp-0x8070]
        push eax
        mov ecx, dword ptr ss : [ebp-0x806C]
        push ecx
        push 0
        push 0
        mov edx, dword ptr ss : [ebp-0x8068]
        push edx
        call dword ptr ds : [public_6d5e164]
        public_6d0a2df : nop
        mov eax, dword ptr ss : [ebp-0x8068]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x234]
        push edx
        call public_6d5cbb0
        add esp, 4
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp-0x20]
        sub eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        sub ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x134
        mov dword ptr ss : [ebp-0x8074], edx
        mov eax, dword ptr ss : [ebp-0x8074]
        cmp dword ptr ds : [eax], 0
        je public_6d0a34b
        mov ecx, dword ptr ss : [ebp-0x8074]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x8074]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x8074]
        mov dword ptr ds : [eax], 0
        public_6d0a34b : nop
        mov ecx, dword ptr ss : [ebp-0x8074]
        push ecx
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x6C]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d0a436
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65ca8 @0x6d0a390*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65ca8
        lea edx, ss:[ebp-0x4048]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x8078], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x404C]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x404C], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x404C]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x404C], eax
        mov ecx, dword ptr ss : [ebp-0x8078]
        push ecx
        push 0x9CA
/*FIXUP push offset public_6d65cc8 @0x6d0a3ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65cc8
/*FIXUP push offset public_6d65d14 @0x6d0a3f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65d14
        mov edx, dword ptr ss : [ebp-0x404C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x4050], ecx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0a42b
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d0a42b : nop
        mov eax, dword ptr ss : [ebp-0x4050]
        jmp public_6d0a6bb
        public_6d0a436 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x134]
        mov dword ptr ss : [ebp-0x807C], eax
        push 0
        mov ecx, dword ptr ss : [ebp-0x807C]
        push ecx
        xor edx, edx
        cmp dword ptr ss : [ebp-0x10], 0
        setne dl
        push edx
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x70]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d0a50b
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65d30 @0x6d0a492*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65d30
        lea edx, ss:[ebp-0x6050]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x8080], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x6054]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x6054], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x6054]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x6054], eax
        mov ecx, dword ptr ss : [ebp-0x8080]
        push ecx
        push 0x9CD
/*FIXUP push offset public_6d65d48 @0x6d0a4f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65d48
/*FIXUP push offset public_6d65d94 @0x6d0a4f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65d94
        mov edx, dword ptr ss : [ebp-0x6054]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d0a50b : nop
        cmp dword ptr ss : [ebp-0x18], 0
        jl public_6d0a652
        mov ecx, dword ptr ss : [ebp+8]
        mov dl, byte ptr ds : [ecx+0x128]
        shr dl, 1
        and dl, 1
        xor eax, eax
        mov al, dl
        neg eax
        sbb eax, eax
        and eax, 0xFFFFF800
        add eax, 0x800
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        or ecx, 0x10
        mov dword ptr ss : [ebp-0x2C], ecx
        mov edx, dword ptr ss : [ebp-0x8084]
        mov dword ptr ss : [ebp-0x8098], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x134]
        mov dword ptr ss : [ebp-0x8098], ecx
        mov edx, dword ptr ss : [ebp-0x2C]
        push edx
        push 0
        lea eax, ss:[ebp-0x34]
        push eax
        mov ecx, dword ptr ss : [ebp-0x8098]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x8098]
        push eax
        call dword ptr ds : [edx+0x24]
        mov dword ptr ss : [ebp-0x18], eax
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d0a60b
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d65db0 @0x6d0a592*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65db0
        lea edx, ss:[ebp-0x8054]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x8088], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x8058]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x8058], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x8058]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x8058], eax
        mov ecx, dword ptr ss : [ebp-0x8088]
        push ecx
        push 0x9D7
/*FIXUP push offset public_6d65dd0 @0x6d0a5f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65dd0
/*FIXUP push offset public_6d65e1c @0x6d0a5f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65e1c
        mov edx, dword ptr ss : [ebp-0x8058]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d0a60b : nop
        cmp dword ptr ss : [ebp-0x18], 0
        jl public_6d0a652
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x30]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [ebp-8]
        push edx
        call public_6d5cc30
        add esp, 4
        mov dword ptr ss : [ebp-0x805C], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x805C]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+4], edx
        public_6d0a652 : nop
        cmp dword ptr ss : [ebp-0x18], 0
        jge public_6d0a693
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x134
        mov dword ptr ss : [ebp-0x808C], eax
        mov ecx, dword ptr ss : [ebp-0x808C]
        cmp dword ptr ds : [ecx], 0
        je public_6d0a693
        mov edx, dword ptr ss : [ebp-0x808C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x808C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-0x808C]
        mov dword ptr ds : [ecx], 0
        public_6d0a693 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x8060], edx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0a6b5
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-4], 0
        public_6d0a6b5 : nop
        mov eax, dword ptr ss : [ebp-0x8060]
        public_6d0a6bb : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d09f96)
    }
}

#undef public_6d0a00e
#undef public_6d0a079
#undef public_6d0a0e7
#undef public_6d0a107
#undef public_6d0a1dd
#undef public_6d0a1e8
#undef public_6d0a225
#undef public_6d0a26e
#undef public_6d0a27a
#undef public_6d0a2a8
#undef public_6d0a2b4
#undef public_6d0a2df
#undef public_6d0a34b
#undef public_6d0a42b
#undef public_6d0a436
#undef public_6d0a50b
#undef public_6d0a60b
#undef public_6d0a652
#undef public_6d0a693
#undef public_6d0a6b5
#undef public_6d0a6bb
