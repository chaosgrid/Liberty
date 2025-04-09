#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7670);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae650);
CLANG_FORWARD_PROC_SYMBOL(public_4aeab0);
CLANG_FORWARD_PROC_SYMBOL(public_4aebb0);
CLANG_FORWARD_PROC_SYMBOL(public_4aeca0);
CLANG_FORWARD_PROC_SYMBOL(public_4aed70);
CLANG_FORWARD_PROC_SYMBOL(public_4af230);
CLANG_FORWARD_PROC_SYMBOL(public_4af900);
CLANG_FORWARD_PROC_SYMBOL(public_4afe30);
CLANG_FORWARD_PROC_SYMBOL(public_4b2440);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_55bfc0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a0fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bce68);

#define public_4a98a3 _public_4a98a3
#define public_4a98c6 _public_4a98c6
#define public_4a9918 _public_4a9918
#define public_4a9a38 _public_4a9a38
#define public_4a9a94 _public_4a9a94
#define public_4a9ac6 _public_4a9ac6
#define public_4a9acd _public_4a9acd
#define public_4a9af5 _public_4a9af5
#define public_4a9b7b _public_4a9b7b
#define public_4a9b83 _public_4a9b83
#define public_4a9c07 _public_4a9c07
#define public_4a9ea1 _public_4a9ea1
#define public_4aa116 _public_4aa116
#define public_4aa138 _public_4aa138
#define public_4aa196 _public_4aa196
#define public_4aa1c0 _public_4aa1c0
#define public_4aaa5a _public_4aaa5a
#define public_4aaa73 _public_4aaa73
#define public_4aaac0 _public_4aaac0
#define public_4aac50 _public_4aac50
#define public_4aac72 _public_4aac72
#define public_4aaff7 _public_4aaff7
#define public_4ab121 _public_4ab121
#define public_4ab276 _public_4ab276
#define public_4ab5a3 _public_4ab5a3
#define public_4ab636 _public_4ab636
#define public_4ab66b _public_4ab66b
#define public_4ab678 _public_4ab678
#define public_4ab680 _public_4ab680
#define public_4ab6b5 _public_4ab6b5
#define public_4ab6c0 _public_4ab6c0

PROC_DECLARE(0x4a9790, internal_4a9790, public_4a9790);
extern "C" NAKED register_t __cdecl internal_4a9790()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bce68 @0x4a9798*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bce68
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x260
        push ebx
        xor ebx, ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov byte ptr ss : [ebp+0x849], 1
        mov byte ptr ss : [ebp+0x32E], 0
        mov dword ptr ss : [ebp+0x890], ebx
        mov dword ptr ss : [ebp+0x894], ebx
        mov dword ptr ss : [ebp+0x898], ebx
        mov dword ptr ss : [ebp+0x89C], 0x40768000
        mov byte ptr ss : [ebp+0x8A0], bl
        mov byte ptr ss : [ebp+0x8A1], bl
        mov byte ptr ss : [ebp+0x8A2], bl
        mov dword ptr ss : [ebp+0x840], ebx
        mov dword ptr ss : [ebp+0x844], 0xC0000000
        mov byte ptr ss : [ebp+0x97C], bl
        mov byte ptr ss : [ebp+0x84C], bl
        mov byte ptr ss : [ebp+0x84D], bl
        mov byte ptr ss : [ebp+0x32C], bl
        mov byte ptr ss : [ebp+0x8C8], bl
        mov byte ptr ss : [ebp+0x848], bl
        mov byte ptr ss : [ebp+0x87E], bl
        mov byte ptr ss : [ebp+0x84A], bl
        mov dword ptr ss : [ebp+0x8CC], 0x320
        mov dword ptr ss : [ebp+0x8D8], 0x400
        mov dword ptr ss : [ebp+0x8E4], 0x480
        mov dword ptr ss : [ebp+0x8F0], 0x500
        mov dword ptr ss : [ebp+0x8FC], 0x640
        mov dword ptr ss : [ebp+0x8D0], 0x258
        mov dword ptr ss : [ebp+0x8DC], 0x300
        mov dword ptr ss : [ebp+0x8E8], 0x360
        mov dword ptr ss : [ebp+0x8F4], 0x3C0
        mov dword ptr ss : [ebp+0x900], 0x4B0
        lea eax, ss:[ebp+0x908]
        mov ecx, 5
        mov edx, 0x10
        public_4a98a3 : nop
        mov esi, dword ptr ds : [eax-0x3C]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [eax-0x38]
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax-0x34], edx
        mov dword ptr ds : [eax+8], 0x20
        add eax, 0xC
        dec ecx
        jne public_4a98a3
        xor eax, eax
        lea ecx, ss:[ebp+0x954]
        public_4a98c6 : nop
        mov byte ptr ds : [eax+ebp+0x944], 0
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        inc eax
        add ecx, 4
        cmp eax, 0xA
        jl public_4a98c6
        push 0xFFFFFFFF
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x950], ebx
        call public_4b2440
        cmp dword ptr ss : [esp+0x284], ebx
        sete al
        test al, al
        mov dword ptr ss : [ebp+0x838], ebx
        mov byte ptr ds : [public_67dcc8], 1
        mov byte ptr ss : [ebp+0x32D], al
        je public_4a9918
        call public_4a7670
        mov byte ptr ss : [ebp+0x84B], al
        public_4a9918 : nop
        mov al, byte ptr ss : [ebp+0x32D]
        test al, al
        mov dword ptr ss : [ebp+0x7F4], ebx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        je public_4a9a38
        lea eax, ss:[esp+0x54]
        push eax
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push 1
        push 1
        push ebx
        push ebx
        push ebx
        push ecx
        push ebx
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d21b0 @0x4a9971*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d21b0
/*FIXUP push offset public_5d5034 @0x4a9976*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5034
        mov ecx, ebp
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x98], 0
        mov dword ptr ss : [esp+0x9C], 0
        mov dword ptr ss : [esp+0x64], 0xBF800000
        call public_5a0db0
        lea eax, ss:[esp+0x1C]
        push eax
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push 1
        push 1
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x6C]
        push ecx
        push ebx
        lea edx, ss:[esp+0x88]
        push edx
/*FIXUP push offset public_5d5000 @0x4a99cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5000
/*FIXUP push offset public_5d4ff4 @0x4a99d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ff4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x98], 0xBD99999A
        mov dword ptr ss : [esp+0x9C], 0xBF800000
        call public_5a0db0
        jmp public_4a9a94
        public_4a9a38 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push 1
        push 1
        push ebx
        push ebx
        push ebx
        push ecx
        push ebx
        lea edx, ss:[esp+0x88]
        push edx
/*FIXUP push offset public_5d4fb8 @0x4a9a54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4fb8
/*FIXUP push offset public_5d4fb0 @0x4a9a59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4fb0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x94], 0x3E19999A
        mov dword ptr ss : [esp+0x98], 0xBD50E560
        mov dword ptr ss : [esp+0x9C], 0xBF800000
        call public_5a0db0
        mov dword ptr ss : [ebp+0x338], eax
        public_4a9a94 : nop
        mov ecx, 0xA
        mov esi, offset public_679bc0
        lea edi, ss:[esp+0x1C8]
        mov dword ptr ss : [ebp+0x330], ebx
        mov dword ptr ss : [ebp+0x8B8], ebx
        rep movsd
        cmp dword ptr ss : [esp+0x1D8], 0x20
        jne public_4a9ac6
        mov byte ptr ss : [ebp+0x8BC], 1
        jmp public_4a9acd
        public_4a9ac6 : nop
        mov byte ptr ss : [ebp+0x8BC], 0
        public_4a9acd : nop
        mov cl, byte ptr ss : [ebp+0x97C]
        test cl, cl
        mov al, byte ptr ss : [ebp+0x8BC]
        mov byte ptr ss : [ebp+0x334], al
        jne public_4a9af5
        cmp al, 1
        jne public_4a9af5
        mov byte ptr ss : [ebp+0x8BC], 0
        mov byte ptr ss : [ebp+0x334], 0
        public_4a9af5 : nop
        mov al, byte ptr ss : [ebp+0x32D]
        test al, al
        mov dword ptr ss : [esp+0x24], 0
        je public_4a9b7b
        push ebx
        push ebx
        push 0x409
        push ebx
        push ebx
        push ebx
        push ebx
        lea eax, ss:[esp+0x38]
        push eax
        push ebx
        lea ecx, ss:[esp+0x64]
        push ecx
        push ebx
/*FIXUP push offset public_5ced30 @0x4a9b1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5cf1f4 @0x4a9b24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf1f4
/*FIXUP push offset public_5d4f98 @0x4a9b29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f98
        mov ecx, ebp
        mov dword ptr ss : [esp+0x58], 0x3CA3D70A
        mov dword ptr ss : [esp+0x5C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x7C], 0x3EDC28F6
        mov dword ptr ss : [esp+0x80], 0x3E6C8B44
        mov dword ptr ss : [esp+0x84], 0
        call public_5a0c90
        mov dword ptr ss : [ebp+0x348], eax
        mov dword ptr ss : [esp+0x20], 0x3E7CED91
        mov dword ptr ss : [esp+0x24], 0
        jmp public_4a9b83
        public_4a9b7b : nop
        mov dword ptr ss : [esp+0x20], 0x3E8ED917
        public_4a9b83 : nop
        push 1
        push ebx
        push 1
        push 0x4F8
        push 0x3FE00000
        push 0x3D75C28F
        push 0x3EF645A2
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
/*FIXUP push offset public_5ce91c @0x4a9ba2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
        mov ecx, ebp
/*FIXUP push offset public_5d4f88 @0x4a9ba9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f88
        mov dword ptr ss : [esp+0x48], 0xBDB851EC
        call public_5a0e30
        mov dword ptr ss : [ebp+0x344], eax
        mov ecx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [eax+0x348], ecx
        mov al, byte ptr ss : [ebp+0x32D]
        test al, al
        mov dword ptr ss : [esp+0x30], 0xBE99999A
        mov dword ptr ss : [esp+0x50], 0x3E51EB85
        mov dword ptr ss : [esp+0x2C], 0x3D9DB22D
        jne public_4a9c07
        mov dword ptr ss : [esp+0x30], 0xBEA8F5C3
        mov dword ptr ss : [esp+0x50], 0x3E570A3D
        mov dword ptr ss : [esp+0x2C], 0x3DAE147B
        public_4a9c07 : nop
        mov edx, dword ptr ss : [esp+0x30]
        push ebx
        push ebx
        push ebx
        mov eax, dword ptr ss : [esp+0x5C]
        push ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x38]
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x64], edx
        lea edx, ss:[esp+0x64]
        push edx
        push ebx
/*FIXUP push offset public_5ced30 @0x4a9c26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5d4f58 @0x4a9c2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f58
/*FIXUP push offset public_5d4f48 @0x4a9c31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f48
        mov ecx, ebp
        mov dword ptr ss : [esp+0x58], 0x3E051EB8
        mov dword ptr ss : [esp+0x5C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x84], 0
        call public_5a0c90
        push 1
        mov ecx, eax
        mov dword ptr ss : [ebp+0x350], eax
        call public_55bfc0
        fld dword ptr ss : [esp+0x50]
        push ebx
        fsub dword ptr ss : [esp+0x30]
        push ebx
        push ebx
        mov eax, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x50]
        push ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x38]
        push ecx
        push ebx
        lea edx, ss:[esp+0x64]
        push edx
        push ebx
/*FIXUP push offset public_5ced30 @0x4a9c99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5d4f58 @0x4a9c9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f58
/*FIXUP push offset public_5d4f38 @0x4a9ca4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f38
        mov ecx, ebp
        mov dword ptr ss : [esp+0x58], 0x3E051EB8
        mov dword ptr ss : [esp+0x5C], 0x3CCCCCCD
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x84], 0
        call public_5a0c90
        push 1
        mov ecx, eax
        mov dword ptr ss : [ebp+0x34C], eax
        call public_55bfc0
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        fadd st(0), st
        push ebx
        push ebx
        fstp dword ptr ss : [esp+0x74]
        push ebx
        fld dword ptr ss : [esp+0x5C]
        push ebx
        fsub dword ptr ss : [esp+0x7C]
        push ebx
        mov dword ptr ss : [esp+0x30], 0x3E051EB8
        mov dword ptr ss : [esp+0x34], 0x3CD4FDF4
        fstp dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x5C], 0
        push ebx
        push ebx
        lea ecx, ss:[esp+0x38]
        push ecx
        push ebx
        lea edx, ss:[esp+0x64]
        push edx
        push ebx
/*FIXUP push offset public_5ced30 @0x4a9d37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5d4f58 @0x4a9d3d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f58
/*FIXUP push offset public_5d4f2c @0x4a9d42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f2c
        mov ecx, ebp
        call public_5a0c90
        push 1
        mov ecx, eax
        mov dword ptr ss : [ebp+0x354], eax
        call public_55bfc0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5d4f28]
        push ebx
        push ebx
        push ebx
        mov eax, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x5C]
        push ebx
        fsub dword ptr ss : [esp+0x38]
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+0x60]
        push ecx
        push ebx
        lea edx, ss:[esp+0x64]
        push edx
        push ebx
/*FIXUP push offset public_5ced30 @0x4a9d8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5d4f58 @0x4a9d94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f58
/*FIXUP push offset public_5d4f1c @0x4a9d99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f1c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x58], 0x3E051EB8
        mov dword ptr ss : [esp+0x5C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x84], 0
        call public_5a0c90
        push 1
        mov ecx, eax
        mov dword ptr ss : [ebp+0x358], eax
        call public_55bfc0
        fld dword ptr ss : [esp+0x2C]
        mov al, byte ptr ss : [ebp+0x32D]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x38]
        push ecx
        push ebx
        lea edx, ss:[esp+0x64]
        push edx
        push ebx
/*FIXUP push offset public_5ced30 @0x4a9df8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        test al, al
        mov eax, dword ptr ss : [esp+0x60]
        push ebx
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x50], 0x3E051EB8
        mov ecx, ebp
/*FIXUP push offset public_5d4f58 @0x4a9e26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f58
        mov dword ptr ss : [esp+0x78], eax
        jne public_4a9ea1
        fmul dword ptr ds : [public_5cfc9c]
/*FIXUP push offset public_5d4f0c @0x4a9e37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f0c
        fsubr dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x80]
        call public_5a0c90
        push ebx
        fld dword ptr ss : [esp+0x30]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x38]
        push ecx
        push ebx
        lea edx, ss:[esp+0x64]
        push edx
        push ebx
/*FIXUP push offset public_5ced30 @0x4a9e66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        mov dword ptr ss : [ebp+0x35C], eax
        mov eax, dword ptr ss : [esp+0x60]
        push ebx
        mov dword ptr ss : [esp+0x50], 0x3E051EB8
        mov dword ptr ss : [esp+0x54], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x7C], 0
/*FIXUP push offset public_5d4f58 @0x4a9e9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4f58
        mov ecx, ebp
        public_4a9ea1 : nop
        fmul dword ptr ds : [public_5d4f08]
/*FIXUP push offset public_5d4ef8 @0x4a9ea7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ef8
        fstp dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+0x8C]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp+0x80]
        call public_5a0c90
        mov ecx, eax
        push 1
        mov dword ptr ss : [ebp+0x360], eax
        call public_55bfc0
        fld dword ptr ss : [esp+0x30]
        fsub qword ptr ds : [public_5d4ef0]
        push 1
        push ebx
        push 1
        push 0x52E
        fst dword ptr ss : [esp+0x40]
        push 0x3FA00000
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x64]
        push 0x3CF5C28F
        fadd qword ptr ds : [public_5d4ee8]
        push 0x3E841893
        push ebx
        lea eax, ss:[esp+0x3C]
        push eax
        fst qword ptr ss : [esp+0x78]
/*FIXUP push offset public_5d0410 @0x4a9f1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        fstp dword ptr ss : [esp+0x48]
/*FIXUP push offset public_5d4ed4 @0x4a9f24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ed4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        push ebx
        push 1
        mov dword ptr ss : [ebp+0x368], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x2C]
        fsubr qword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x30]
        push 1
        push ebx
        push 1
        fstp dword ptr ss : [esp+0x2C]
        push 0x52F
        push 0x3FA00000
        push 0x3CF5C28F
        push 0x3E841893
        push ebx
        lea ecx, ss:[esp+0x3C]
        push ecx
/*FIXUP push offset public_5d0410 @0x4a9f7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d4ec8 @0x4a9f81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ec8
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        push ebx
        push 1
        mov dword ptr ss : [ebp+0x364], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x6C]
        fsubr qword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x30]
        push 1
        push ebx
        push 1
        fstp dword ptr ss : [esp+0x2C]
        push 0x5E2
        push 0x3FA00000
        push 0x3CF5C28F
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x3C], 0
        push 0x3E841893
        push ebx
        lea ecx, ss:[esp+0x3C]
        push ecx
/*FIXUP push offset public_5d0410 @0x4a9fe9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d4ebc @0x4a9fee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ebc
        mov ecx, ebp
        call public_5a0e30
        push ebx
        push 1
        mov dword ptr ss : [ebp+0x36C], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x28]
        fsubr qword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x30]
        push 1
        push ebx
        push 1
        fstp dword ptr ss : [esp+0x2C]
        push 0x5E3
        push 0x3FA00000
        push 0x3CF5C28F
        push 0x3E841893
        push ebx
        lea ecx, ss:[esp+0x3C]
        push ecx
/*FIXUP push offset public_5d0410 @0x4aa03e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d4eb0 @0x4aa043*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4eb0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        push ebx
        push 1
        mov dword ptr ss : [ebp+0x370], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ss : [ebp+0x32D]
        test al, al
        push 1
        push ebx
        mov dword ptr ss : [esp+0x2C], 0
        push 1
        jne public_4aa116
        fld dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_5cfc9c]
        push 0x532
        push 0x3FA00000
        push 0x3CF5C28F
        fsubr qword ptr ss : [esp+0x6C]
        push 0x3E841893
        push ebx
        lea ecx, ss:[esp+0x3C]
        push ecx
        fstp dword ptr ss : [esp+0x44]
/*FIXUP push offset public_5d0410 @0x4aa0bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d4ea4 @0x4aa0c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ea4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], eax
        call public_5a0e30
        push ebx
        push 1
        mov dword ptr ss : [ebp+0x374], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x30]
        push 1
        push ebx
        push 1
        push 0x533
        push 0x3FA00000
        push 0x3CF5C28F
        push 0x3E841893
        push ebx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x44], 0
        push ecx
        jmp public_4aa138
        public_4aa116 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        push 0x58B
        push 0x3FA00000
        push 0x3CF5C28F
        push 0x3E841893
        push ebx
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x3C], edx
        push eax
        public_4aa138 : nop
        fld dword ptr ss : [esp+0x70]
/*FIXUP push offset public_5d0410 @0x4aa13c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        fsubr qword ptr ss : [esp+0x7C]
        mov ecx, ebp
/*FIXUP push offset public_5d4e94 @0x4aa147*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e94
        fstp dword ptr ss : [esp+0x4C]
        call public_5a0e30
        push ebx
        mov ecx, eax
        push 1
        mov dword ptr ss : [ebp+0x378], eax
        mov edx, dword ptr ds : [ecx]
        push 0x24
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [ebp+0x378]
        mov ecx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [eax+0x348], ecx
        mov al, byte ptr ss : [ebp+0x32D]
        test al, al
        mov dword ptr ss : [esp+0x50], 0x3E47AE14
        jne public_4aa196
        mov dword ptr ss : [esp+0x50], 0x3E51EB85
/*FIXUP public_4aa196 : nop
        push offset public_5d4a28 @0x4aa196*/
  FIXUP public_4aa196 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4a28
        mov ecx, ebp
        call public_4afe30
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [public_5d4e90]
        mov edi, dword ptr ds : [public_5c71ec]
        mov dword ptr ss : [esp+0x28], ebx
        lea esi, ss:[ebp+0x5AC]
        fstp dword ptr ss : [esp+0x6C]
        public_4aa1c0 : nop
        push ebx
        lea edx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4e7c @0x4aa1c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e7c
        push edx
        call edi
        fild dword ptr ss : [esp+0x34]
        add esp, 0xC
        push 0
        fmul dword ptr ds : [public_5d4e78]
        push 0
        push 0
        push 0
        push 0x3FB70A3D
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x64]
        push 0x3CF5C28F
        fsub dword ptr ss : [esp+0x40]
        push 0x3E5C28F6
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        fst dword ptr ss : [esp+0x50]
/*FIXUP push offset public_5ce91c @0x4aa20b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
        fstp dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0xF0]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], 0xBCF5C28F
        mov dword ptr ss : [esp+0x50], 0
        call public_5a0e30
        push ebx
        lea edx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4e6c @0x4aa23b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e6c
        push edx
        mov dword ptr ds : [esi-0x38], eax
        call edi
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E5C28F6
        push 0
        lea ecx, ss:[esp+0x60]
        push ecx
/*FIXUP push offset public_5d01a8 @0x4aa26b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
        lea edx, ss:[esp+0xF0]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x74], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi]
        push ebx
        lea ecx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4e5c @0x4aa2af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e5c
        push ecx
        mov byte ptr ds : [eax+0x380], 0
        call edi
        mov edx, dword ptr ss : [esp+0x38]
        add esp, 0xC
        push 0x67A
        push 0x65F
        mov dword ptr ss : [esp+0x5C], 0x3C75C28F
        mov dword ptr ss : [esp+0x60], 0x3C75C28F
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0xB8], 0x3ED47AE1
        mov dword ptr ss : [esp+0xBC], edx
        mov dword ptr ss : [esp+0xC0], 0
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x6C]
        push eax
        push 0
        lea ecx, ss:[esp+0xD0]
        push ecx
        push 0
/*FIXUP push offset public_5d4e48 @0x4aa31d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e48
/*FIXUP push offset public_5cb0d0 @0x4aa322*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb0d0
/*FIXUP push offset public_5d4e20 @0x4aa327*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e20
        lea edx, ss:[esp+0xFC]
        push edx
        mov ecx, ebp
        call public_5a0fb0
        push 0
        push 1
        mov dword ptr ds : [esi+0x38], eax
        mov edx, dword ptr ds : [eax]
        push 0x35
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [public_679b94]
        push ebx
        lea edx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4e0c @0x4aa35f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4e0c
        push edx
        mov dword ptr ds : [eax+0x370], ecx
        call edi
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [public_5d3e90]
        add esp, 0xC
        push 0
        push 0
        push 2
        fst dword ptr ss : [esp+0x58]
        push 0
        fstp dword ptr ss : [esp+0xD0]
        push 0x3F666666
        push 0x3CF5C28F
        push 0x3E6147AE
        push 0
        lea eax, ss:[esp+0xDC]
        push eax
/*FIXUP push offset public_5d01a8 @0x4aa3a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
        lea ecx, ss:[esp+0xF0]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xE8], 0x3E8F5C29
        mov dword ptr ss : [esp+0xF0], 0
        call public_5a0e30
        push ebx
        lea edx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4dfc @0x4aa3d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4dfc
        push edx
        mov dword ptr ds : [esi+0x70], eax
        call edi
        fld dword ptr ss : [esp+0x78]
        fsub dword ptr ss : [esp+0x34]
        add esp, 0xC
        push 1
        push 1
        push 0x64
        fstp dword ptr ss : [esp+0xB4]
        push 0
        push 0x3C656042
        push 0x3E75C28F
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0xE4]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xC4], 0x3E428F5C
        mov dword ptr ss : [esp+0xCC], 0xBF800000
        call public_5a17e0
        push 0x64
        mov dword ptr ds : [esi+0xA8], eax
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x37
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0xA8]
        push ebx
        mov byte ptr ds : [eax+0x3B4], 1
        mov dword ptr ds : [eax+0x3CC], 0x3F800000
        lea eax, ss:[esp+0xCC]
/*FIXUP push offset public_5d4de8 @0x4aa469*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4de8
        push eax
        call edi
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 0xC
        push 0
        push 0
        push 2
        push 0
        push 0x3F4CCCCD
        push 0x3CA3D70A
        push 0x3DE147AE
        push 0
        lea edx, ss:[esp+0xAC]
        push edx
/*FIXUP push offset public_5d4ddc @0x4aa499*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        lea eax, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0xB8], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0xB8], 0x3E083127
        mov dword ptr ss : [esp+0xC0], 0
        call public_5a0e30
        push ebx
        lea ecx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4dc4 @0x4aa4d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4dc4
        push ecx
        mov dword ptr ds : [esi+0x150], eax
        call edi
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [public_5d2a08]
        add esp, 0xC
        push 0
        push 0
        push 0
        fst dword ptr ss : [esp+0x34]
        push 0
        fstp dword ptr ss : [esp+0x94]
        push 0x3F4CCCCD
        push 0x3CA3D70A
        push 0x3DE147AE
        push 0
        lea edx, ss:[esp+0xA0]
        push edx
/*FIXUP push offset public_5d4dbc @0x4aa519*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4dbc
        lea eax, ss:[esp+0xF0]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0xAC], 0x3E851EB8
        mov dword ptr ss : [esp+0xB4], 0
        call public_5a0e30
        push ebx
        lea ecx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4da4 @0x4aa54b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4da4
        push ecx
        mov dword ptr ds : [esi+0xE0], eax
        call edi
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 0xC
        push 0
        push 0
        push 2
        push 0
        push 0x3F4CCCCD
        push 0x3CA3D70A
        push 0x3DE147AE
        push 0
        lea eax, ss:[esp+0xB8]
        push eax
        mov dword ptr ss : [esp+0xBC], 0x3EB7CED9
        mov dword ptr ss : [esp+0xC0], edx
        mov dword ptr ss : [esp+0xC4], 0
/*FIXUP push offset public_5d4dbc @0x4aa59e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4dbc
        lea ecx, ss:[esp+0xF0]
        push ecx
        mov ecx, ebp
        call public_5a0e30
        push ebx
        lea edx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4d94 @0x4aa5ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4d94
        push edx
        mov dword ptr ds : [esi+0x118], eax
        call edi
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        mov dword ptr ss : [esp+0x54], eax
/*FIXUP push offset public_5ced30 @0x4aa5ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea eax, ss:[esp+0xE8]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x98], 0x3DB851EC
        mov dword ptr ss : [esp+0x9C], 0x3C343958
        mov dword ptr ss : [esp+0xA0], 0
        mov dword ptr ss : [esp+0x58], 0x3EA3D70A
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0d00
        mov dword ptr ds : [esi+0x188], eax
        mov ecx, dword ptr ds : [public_679b94]
        mov dword ptr ds : [eax+0x378], ecx
        mov eax, dword ptr ds : [esi+0x188]
        mov cl, byte ptr ds : [eax+0x35D]
        push ebx
        lea edx, ss:[esp+0xCC]
        or cl, 1
/*FIXUP push offset public_5d4d80 @0x4aa658*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4d80
        push edx
        mov byte ptr ds : [eax+0x35D], cl
        call edi
        mov eax, dword ptr ss : [esp+0x58]
        add esp, 0xC
        push 0
        push 0
        push 1
        push 0
        push 0x3F666666
        push 0x3CF5C28F
        push 0x3E3851EC
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d010c @0x4aa68b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea edx, ss:[esp+0xF0]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0x3EA3D70A
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        inc ebx
        mov dword ptr ds : [esi+0x1C0], eax
        add esi, 4
        cmp ebx, 0xE
        mov dword ptr ss : [esp+0x28], ebx
        jl public_4aa1c0
        push 1
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
/*FIXUP push offset public_5d4d70 @0x4aa6dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4d70
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 0x3F07AE14
        mov dword ptr ss : [esp+0x30], 0x3CF1A9FC
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x50], 0x3E9EB852
        mov dword ptr ss : [esp+0x54], 0x3E9EB852
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call public_5a0d60
        push 0
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        mov dword ptr ss : [ebp+0x7A4], eax
        lea eax, ss:[esp+0x4C]
        push eax
/*FIXUP push offset public_5ced30 @0x4aa732*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d4d60 @0x4aa737*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4d60
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0x3D8F5C29
        mov dword ptr ss : [esp+0x38], 0x3C75C28F
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x58], 0x3E9A1CAC
        mov dword ptr ss : [esp+0x5C], 0xBE970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0d00
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
/*FIXUP push offset public_5ced30 @0x4aa787*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d4d48 @0x4aa78c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4d48
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x7A8], eax
        mov dword ptr ss : [esp+0x34], 0x3D8F5C29
        mov dword ptr ss : [esp+0x38], 0x3C75C28F
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x58], 0xBC75C28F
        mov dword ptr ss : [esp+0x5C], 0xBE970A3D
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0d00
        push 0
        push 0
        push 1
        push 0x2148
        push 0x3F800000
        mov dword ptr ss : [ebp+0x7B0], eax
        mov eax, dword ptr ss : [ebp+0x7A8]
        mov ecx, dword ptr ds : [public_679b94]
        push 0x3CF5C28F
        mov dword ptr ds : [eax+0x378], ecx
        mov edx, dword ptr ss : [ebp+0x7B0]
        mov eax, dword ptr ds : [public_679b94]
        push 0x3E8A3D71
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d010c @0x4aa812*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d4d38 @0x4aa817*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4d38
        mov ecx, ebp
        mov dword ptr ds : [edx+0x378], eax
        mov dword ptr ss : [esp+0x3C], 0x3E9A1CAC
        mov dword ptr ss : [esp+0x40], 0xBE981062
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 0
        push 1
        push 0x5E4
        push 0x3F800000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d010c @0x4aa862*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d4d20 @0x4aa867*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4d20
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x7AC], eax
        mov dword ptr ss : [esp+0x3C], 0xBC75C28F
        mov dword ptr ss : [esp+0x40], 0xBE981062
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 0
        push 0
        push 0
        push 0x3CCCCCCD
        mov dword ptr ss : [ebp+0x7B4], eax
        push 0x3C449BA6
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_5d4d0c @0x4aa8ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4d0c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], 0x3ED47AE1
        mov dword ptr ss : [esp+0x34], 0x3E604189
        mov dword ptr ss : [esp+0x38], 0xBF800000
        call public_5a1870
        push 0xF
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
/*FIXUP push offset public_5d4cfc @0x4aa8e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4cfc
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x564], eax
        mov dword ptr ss : [esp+0x2C], 0x3E6147AE
        mov dword ptr ss : [esp+0x30], 0x3CCCCCCD
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x50], 0x3F1A9FBE
        mov dword ptr ss : [esp+0x54], 0x3ED2F1AA
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call public_5a0d60
        push 0xF
        push 0
        push 0
        push 0
        mov dword ptr ss : [ebp+0x568], eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
/*FIXUP push offset public_5d4cec @0x4aa93e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4cec
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 0x3C54FDF4
        mov dword ptr ss : [esp+0x30], 0x3CCCCCCD
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x50], 0x3F578D50
        mov dword ptr ss : [esp+0x54], 0x3ED2F1AA
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call public_5a0d60
        push 0
        push 0
        push 1
        push 0
        push 0x3F666666
        push 0x3CF5C28F
        push 0x3E604189
        mov dword ptr ss : [ebp+0x56C], eax
        mov dword ptr ss : [esp+0x2C], 0x3E9A1CAC
        mov dword ptr ss : [esp+0x30], 0x3E4ED917
        mov dword ptr ss : [esp+0x34], 0
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d010c @0x4aa9b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d4cdc @0x4aa9bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4cdc
        mov ecx, ebp
        call public_5a0e30
        mov dword ptr ss : [ebp+0x570], eax
        mov eax, dword ptr ss : [ebp+0x564]
        push 0
        mov byte ptr ds : [eax+0x3B4], 1
        mov dword ptr ds : [eax+0x3CC], 0x3F800000
        mov ecx, dword ptr ss : [ebp+0x570]
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0x24
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [ebp+0x7AC]
        mov byte ptr ss : [ebp+0x848], 0
        mov eax, dword ptr ds : [public_679b94]
        mov dword ptr ds : [ecx+0x348], eax
        mov edx, dword ptr ss : [ebp+0x7A8]
        mov byte ptr ds : [edx+0x37C], 1
        mov eax, dword ptr ss : [ebp+0x7A8]
        mov bl, byte ptr ds : [eax+0x388]
        and bl, 0xFB
        mov ecx, ebp
        mov byte ptr ds : [eax+0x388], bl
        call public_4aed70
        mov ecx, ebp
        call public_4aeca0
/*FIXUP push offset public_5d4cbc @0x4aaa40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4cbc
        mov ecx, ebp
        call public_4af230
        mov eax, dword ptr ss : [ebp+0x800]
        test eax, eax
        jne public_4aaa5a
        xor edx, edx
        jmp public_4aaa73
        public_4aaa5a : nop
        mov ecx, dword ptr ss : [ebp+0x804]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_4aaa73 : nop
        push 0
        push 0xD
        push edx
        push 0
        push 0x3EC7AE14
        push 0x3C75C28F
        lea ecx, ss:[esp+0x28]
        push ecx
/*FIXUP push offset public_5d4cac @0x4aaa89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4cac
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], 0x3ED47AE1
        mov dword ptr ss : [esp+0x34], 0x3E0A3D71
        mov dword ptr ss : [esp+0x38], 0xBF800000
        call public_5a17e0
        xor esi, esi
        mov dword ptr ss : [ebp+0x4B8], eax
        mov dword ptr ss : [esp+0x4C], esi
        lea ebx, ss:[ebp+0x4C4]
        nop 
        public_4aaac0 : nop
        push esi
        lea edx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4c98 @0x4aaac8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4c98
        push edx
        call edi
        fild dword ptr ss : [esp+0x58]
        add esp, 0xC
        push 0xF
        fmul qword ptr ds : [public_5d4c90]
        push 0
        push 0
        push 0
        fsub qword ptr ds : [public_5d4c88]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+0x4C]
        push ecx
/*FIXUP push offset public_5ced30 @0x4aaafb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea edx, ss:[esp+0xE8]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0x3D8F5C29
        mov dword ptr ss : [esp+0x38], 0x3C75C28F
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x5C], 0x3E428F5C
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0d00
        mov dword ptr ds : [ebx], eax
        mov cl, byte ptr ds : [eax+0x35C]
        and cl, 0xBF
        inc esi
        add ebx, 4
        cmp esi, 3
        mov byte ptr ds : [eax+0x35C], cl
        mov dword ptr ss : [esp+0x4C], esi
        jl public_4aaac0
        push 0
        push 0
        push 1
        push 0x76E
        push 0x3F666666
        push 0x3CF1A9FC
        push 0x3E000000
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d010c @0x4aab7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d4c74 @0x4aab7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4c74
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBCE56042
        mov dword ptr ss : [esp+0x40], 0x3E400000
        mov dword ptr ss : [esp+0x44], 0
        lea esi, ss:[ebp+0x4D4]
        call public_5a0e30
        push 0
        push 0
        push 1
        push 0x76F
        push 0x3F666666
        push 0x3CF1A9FC
        push 0x3E000000
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d010c @0x4aabca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d4c64 @0x4aabcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4c64
        mov ecx, ebp
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [esp+0x3C], 0x3E178D50
        mov dword ptr ss : [esp+0x40], 0x3E400000
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 0
        push 1
        push 0x770
        push 0x3F666666
        push 0x3CF1A9FC
        push 0x3E000000
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d010c @0x4aac16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d4c54 @0x4aac1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4c54
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x4D8], eax
        mov dword ptr ss : [esp+0x3C], 0x3EA5E354
        mov dword ptr ss : [esp+0x40], 0x3E400000
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ss : [ebp+0x4DC], eax
        mov ebx, 3
        public_4aac50 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x24
        call dword ptr ds : [eax+0xA8]
        add esi, 4
        dec ebx
        jne public_4aac50
        xor ebx, ebx
        mov dword ptr ss : [esp+0x4C], ebx
        lea esi, ss:[ebp+0x37C]
        public_4aac72 : nop
        push ebx
        lea ecx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4c48 @0x4aac7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4c48
        push ecx
        call edi
        add esp, 0xC
        push 0xA
        push 0
        push 0
        lea edx, ds:[ebx-1]
        mov dword ptr ss : [esp+0x34], edx
        fild dword ptr ss : [esp+0x34]
        push 0
        push 0
        fmul qword ptr ds : [public_5d4c40]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        fsubr qword ptr ds : [public_5d4c38]
/*FIXUP push offset public_5ced30 @0x4aacb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea edx, ss:[esp+0xE8]
        fst dword ptr ss : [esp+0x48]
        push edx
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x34], 0x3E19999A
        mov dword ptr ss : [esp+0x38], 0x3CF1A9FC
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x58], 0x3EAE147B
        mov dword ptr ss : [esp+0x60], 0xBF800000
        call public_5a0d00
        mov dword ptr ds : [esi+0xD4], eax
        mov cl, byte ptr ds : [eax+0x35C]
        and cl, 0xBF
        push ebx
        mov byte ptr ds : [eax+0x35C], cl
        lea eax, ss:[esp+0xCC]
/*FIXUP push offset public_5d4c28 @0x4aad11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4c28
        push eax
        call edi
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x88]
        push edx
        lea eax, ss:[esp+0xB0]
        push eax
        mov dword ptr ss : [esp+0xB8], ecx
/*FIXUP push offset public_5ced30 @0x4aad41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea ecx, ss:[esp+0xE8]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x98], 0x3E19999A
        mov dword ptr ss : [esp+0x9C], 0x3CF1A9FC
        mov dword ptr ss : [esp+0xA0], 0
        mov dword ptr ss : [esp+0xBC], 0x3F23D70A
        mov dword ptr ss : [esp+0xC4], 0xBF800000
        call public_5a0d00
        push ebx
        lea edx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4c18 @0x4aad94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4c18
        mov dword ptr ds : [esi+0x108], eax
        push edx
        mov dword ptr ds : [eax+0x384], 0
        call edi
        fild dword ptr ss : [esp+0x58]
        add esp, 0xC
        mov dword ptr ss : [esp+0x80], 0xBC656042
        fadd qword ptr ds : [public_5c75e8]
        fmul qword ptr ds : [public_5d4c10]
        fstp qword ptr ss : [esp+0x54]
        fld qword ptr ds : [public_5d4c08]
        fsub qword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x84]
        push 0
        push 0
        push 0
        push 0
        push 0x3F8CCCCD
        push 0x3CF5C28F
        push 0x3E48B439
        push 0
        lea eax, ss:[esp+0xA0]
        push eax
/*FIXUP push offset public_5d010c @0x4aae00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea ecx, ss:[esp+0xF0]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xB4], 0
        call public_5a0e30
        push 0
        push 1
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax]
        push 0x24
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi]
        push ebx
        lea ecx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4bf8 @0x4aae3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4bf8
        push ecx
        mov byte ptr ds : [eax+0x380], 0
        call edi
        fld qword ptr ds : [public_5d4bf0]
        fsub qword ptr ss : [esp+0x60]
        add esp, 0xC
        push 0
        push 0
        push 1
        fst dword ptr ss : [esp+0x34]
        push 0
        fstp dword ptr ss : [esp+0xA0]
        push 0x3F8CCCCD
        push 0x3C8B4396
        push 0x3E147AE1
        push 0
        lea edx, ss:[esp+0xAC]
        push edx
/*FIXUP push offset public_5d010c @0x4aae83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0xF0]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0xB8], 0x3E2E147B
        mov dword ptr ss : [esp+0xC0], 0
        call public_5a0e30
        push ebx
        lea ecx, ss:[esp+0xCC]
/*FIXUP push offset public_5d4be0 @0x4aaeb5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4be0
        push ecx
        mov dword ptr ds : [esi+0x34], eax
        call edi
        add esp, 0xC
        mov edx, dword ptr ss : [esp+0x28]
        push 0
        push 0
        push 1
        push 0
        push 0x3F8CCCCD
        push 0x3C8B4396
        push 0x3E147AE1
        push 0
        lea eax, ss:[esp+0xC4]
        push eax
/*FIXUP push offset public_5d010c @0x4aaee8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea ecx, ss:[esp+0xF0]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xD0], 0x3EA1CAC1
        mov dword ptr ss : [esp+0xD4], edx
        mov dword ptr ss : [esp+0xD8], 0
        call public_5a0e30
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x68], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x24
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x68]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x24
        call dword ptr ds : [eax+0xA8]
        inc ebx
        add esi, 4
        cmp ebx, 0xD
        mov dword ptr ss : [esp+0x4C], ebx
        jl public_4aac72
        push 0
        push 0
        push 1
        push 0x763
        push 0x3F8CCCCD
        push 0x3C8B4396
        push 0x3E147AE1
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d010c @0x4aaf70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d4bd4 @0x4aaf75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4bd4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0x3E2E147B
        mov dword ptr ss : [esp+0x40], 0x3E1CAC08
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0
        push 0
        push 1
        push 0x764
        push 0x3F8CCCCD
        push 0x3C8B4396
        push 0x3E147AE1
        push 0
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d010c @0x4aafba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d4bc8 @0x4aafbf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4bc8
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x4BC], eax
        mov dword ptr ss : [esp+0x3C], 0x3EA1CAC1
        mov dword ptr ss : [esp+0x40], 0x3E1CAC08
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ss : [ebp+0x4C0], eax
        xor ebx, ebx
        lea esi, ss:[ebp+0x418]
        public_4aaff7 : nop
        push ebx
        lea eax, ss:[esp+0xCC]
/*FIXUP push offset public_5d4bb8 @0x4aafff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4bb8
        push eax
        call edi
        add esp, 0xC
        push 1
        lea ecx, ds:[ebx-1]
        mov dword ptr ss : [esp+0x2C], ecx
        fild dword ptr ss : [esp+0x2C]
        push 0
        push 0
        fmul qword ptr ds : [public_5d4c40]
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x48]
        fsubr qword ptr ds : [public_5d4c38]
        push eax
        lea ecx, ss:[esp+0xE0]
        push ecx
        fstp dword ptr ss : [esp+0x54]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 0x3F07AE14
        mov dword ptr ss : [esp+0x30], 0x3CF1A9FC
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x50], 0x3E92F1AA
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call public_5a0d60
        mov dword ptr ds : [esi], eax
        inc ebx
        add esi, 4
        cmp ebx, 0xE
        jl public_4aaff7
        mov eax, dword ptr ss : [ebp+0x44C]
        mov bl, byte ptr ds : [eax+0x35D]
        xor edi, edi
        or bl, 1
        push edi
        mov ecx, ebp
        mov byte ptr ds : [eax+0x35D], bl
        call public_4af900
        mov ecx, ebp
        call public_4aeab0
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        push 0x3EE147AE
        push 0x3F000000
/*FIXUP push offset public_5d4ba4 @0x4ab0b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ba4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], 0xBDE76C8B
        mov dword ptr ss : [esp+0x28], 0x3E54FDF4
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        call public_5a10e0
        mov esi, eax
        mov ecx, esi
        mov dword ptr ss : [ebp+0x7F0], esi
        call public_57b370
        mov al, byte ptr ss : [esp+0x73]
        push 0xC
        mov dword ptr ss : [ebp+0x8B0], edi
        mov dword ptr ss : [ebp+0x8B4], 0x40340000
        mov byte ptr ss : [esp+0x64], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], edi
        mov dword ptr ss : [esp+0x278], edi
        mov ebx, 0x14
        public_4ab121 : nop
        mov ecx, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x28], ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x27C], 1
        call public_57b470
        dec ebx
        mov byte ptr ss : [esp+0x278], 0
        jne public_4ab121
        lea eax, ss:[esp+0x60]
        push eax
        push 0x6003F
        call public_57da40
        lea ecx, ss:[esp+0x68]
        push ecx
        push 0x60040
        call public_57da40
        lea edx, ss:[esp+0x70]
        push edx
        push 0x60041
        call public_57da40
        lea eax, ss:[esp+0x78]
        push eax
        push 0x60042
        call public_57da40
        lea ecx, ss:[esp+0x80]
        push ecx
        push 0x60043
        call public_57da40
        lea edx, ss:[esp+0x88]
        push edx
        push 0x60044
        call public_57da40
        lea eax, ss:[esp+0x90]
        push eax
        push 0x60045
        call public_57da40
        lea ecx, ss:[esp+0x98]
        push ecx
        push 0x60046
        call public_57da40
        add esp, 0x40
        lea edx, ss:[esp+0x60]
        push edx
        push 0x60047
        call public_57da40
        lea eax, ss:[esp+0x68]
        push eax
        push 0x60048
        call public_57da40
        add esp, 0x10
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, esi
        call public_57b3e0
        mov al, byte ptr ss : [ebp+0x32D]
        test al, al
        mov bl, 0xFC
        jne public_4ab276
        mov eax, dword ptr ss : [ebp+0x7F0]
        and byte ptr ds : [eax+0x6C], bl
        mov edx, dword ptr ss : [ebp+0x374]
        mov eax, dword ptr ds : [public_679bb0]
        push 0x40
        lea ecx, ss:[esp+0x1F4]
        push ecx
        mov dword ptr ds : [edx+0x348], eax
        mov edx, dword ptr ds : [public_67eca8]
        push 0x5E4
        push edx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x7B4]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push edi
        lea edx, ss:[esp+0x1F4]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [ebp+0x7B0]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x7B4]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x344]
        and byte ptr ds : [eax+0x6C], bl
        public_4ab276 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        push edi
        push edi
        push 1
        push edi
        push 1
        push 1
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x60]
        push ecx
        push edi
        lea edx, ss:[esp+0xA8]
        push edx
/*FIXUP push offset public_5d04a8 @0x4ab296*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d04a8
/*FIXUP push offset public_5d4b98 @0x4ab29b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4b98
        mov ecx, ebp
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0xB4], 0
        mov dword ptr ss : [esp+0xB8], 0
        mov dword ptr ss : [esp+0xBC], 0xBF800000
        call public_5a0db0
        push edi
        push edi
        push 1
        push 0x5E6
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push edi
        mov dword ptr ss : [ebp+0x4E4], eax
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d2254 @0x4ab31c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2254
/*FIXUP push offset public_5d4b84 @0x4ab321*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4b84
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBC343958
        mov dword ptr ss : [esp+0x40], 0x3DA3D70A
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push edi
        push edi
        push 1
        push edi
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d2254 @0x4ab35f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2254
/*FIXUP push offset public_5d4b70 @0x4ab364*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4b70
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x4E8], eax
        mov dword ptr ss : [esp+0x3C], 0xBC343958
        mov dword ptr ss : [esp+0x40], 0x3D23D70A
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push edi
        push edi
        push 1
        push edi
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [ebp+0x4EC], eax
        mov dword ptr ss : [esp+0x34], 0xBC343958
        mov dword ptr ss : [esp+0x38], 0xBBC49BA6
        mov dword ptr ss : [esp+0x3C], 0
/*FIXUP push offset public_5d2254 @0x4ab3c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2254
/*FIXUP push offset public_5d4b5c @0x4ab3cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4b5c
        mov ecx, ebp
        call public_5a0e30
        push edi
        push edi
        push edi
        push edi
        push edi
        mov dword ptr ss : [ebp+0x4F0], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
/*FIXUP push offset public_5ced30 @0x4ab3ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d4b48 @0x4ab3f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4b48
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0x3DCCCCCD
        mov dword ptr ss : [esp+0x38], 0x3CAC0831
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x58], 0xBDE56042
        mov dword ptr ss : [esp+0x5C], 0xBD8F5C29
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0d00
        push edi
        push edi
        push edi
        push edi
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        mov dword ptr ss : [ebp+0x4F4], eax
        lea eax, ss:[esp+0x4C]
        push eax
/*FIXUP push offset public_5ced30 @0x4ab442*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d4b38 @0x4ab447*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4b38
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], 0x3DCCCCCD
        mov dword ptr ss : [esp+0x38], 0x3CAC0831
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x58], 0x3DE56042
        mov dword ptr ss : [esp+0x5C], 0xBD8F5C29
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0d00
        push edi
        push edi
        push 1
        push 0x5E8
        push 0x3FC00000
        push 0x3CF5C28F
        mov dword ptr ss : [ebp+0x4F8], eax
        mov cl, byte ptr ds : [eax+0x35D]
        or cl, 1
        push 0x3E8A3D71
        mov byte ptr ds : [eax+0x35D], cl
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0410 @0x4ab4b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d4b24 @0x4ab4bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4b24
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0xBDE56042
        mov dword ptr ss : [esp+0x40], 0xBD8F5C29
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push edi
        push edi
        push 1
        push 0x2148
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push edi
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0410 @0x4ab4fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        mov dword ptr ss : [ebp+0x4FC], eax
        mov dword ptr ss : [esp+0x38], 0x3DE56042
        mov dword ptr ss : [esp+0x3C], 0xBD8F5C29
        mov dword ptr ss : [esp+0x40], 0
/*FIXUP push offset public_5d4b10 @0x4ab520*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4b10
        mov ecx, ebp
        call public_5a0e30
        mov dword ptr ss : [ebp+0x500], eax
        mov eax, dword ptr ss : [ebp+0x4E8]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x4EC]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x4F0]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x4FC]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x500]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x4F4]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x4F8]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ss : [ebp+0x4E4]
        and byte ptr ds : [eax+0x6C], bl
        push edi
        mov ecx, ebp
        call public_4abdf0
        push 1
        mov ecx, ebp
        call public_4abdf0
        mov ecx, ebp
        call public_4aebb0
        mov al, byte ptr ss : [ebp+0x32D]
        test al, al
        je public_4ab5a3
        mov ecx, ebp
        call public_4ae650
        public_4ab5a3 : nop
        mov eax, dword ptr ss : [ebp]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x60], 0
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x64], 0
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x68], 0xBF800000
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, ebp
        call dword ptr ds : [eax+0x7C]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[ebp+0x60]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x284]
        mov eax, dword ptr ss : [esp+0x280]
        push edx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x70], 0x64
        mov dword ptr ss : [ebp+0x78], 6
        mov byte ptr ss : [ebp+0x849], 0
        call public_4b5060
        test al, al
        mov eax, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x278], 0xFFFFFFFF
        mov ebx, eax
        jne public_4ab678
        mov byte ptr ss : [ebp+0x32C], 1
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_4ab66b
        public_4ab636 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x6C]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x68], ecx
        jne public_4ab636
        mov eax, dword ptr ss : [esp+0x64]
        public_4ab66b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor al, al
        jmp public_4ab6c0
        public_4ab678 : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_4ab6b5
        mov edi, edi
        public_4ab680 : nop
        mov esi, edi
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[esi+8]
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x6C]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x68], ecx
        jne public_4ab680
        mov eax, dword ptr ss : [esp+0x64]
        public_4ab6b5 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        mov al, 1
        public_4ab6c0 : nop
        mov ecx, dword ptr ss : [esp+0x270]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x26C
        ret 8
        UNREACHABLE_TRAP(0x4a9790)
    }
}

#undef public_4a98a3
#undef public_4a98c6
#undef public_4a9918
#undef public_4a9a38
#undef public_4a9a94
#undef public_4a9ac6
#undef public_4a9acd
#undef public_4a9af5
#undef public_4a9b7b
#undef public_4a9b83
#undef public_4a9c07
#undef public_4a9ea1
#undef public_4aa116
#undef public_4aa138
#undef public_4aa196
#undef public_4aa1c0
#undef public_4aaa5a
#undef public_4aaa73
#undef public_4aaac0
#undef public_4aac50
#undef public_4aac72
#undef public_4aaff7
#undef public_4ab121
#undef public_4ab276
#undef public_4ab5a3
#undef public_4ab636
#undef public_4ab66b
#undef public_4ab678
#undef public_4ab680
#undef public_4ab6b5
#undef public_4ab6c0
