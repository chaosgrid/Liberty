#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62c2ad0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3d10);
CLANG_FORWARD_PROC_SYMBOL(public_62c56d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d29a0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4b90);
CLANG_FORWARD_PROC_SYMBOL(public_62d5840);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a80);
CLANG_FORWARD_PROC_SYMBOL(public_62d7560);
CLANG_FORWARD_PROC_SYMBOL(public_62d7590);
CLANG_FORWARD_PROC_SYMBOL(public_62d75c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d93c0);
CLANG_FORWARD_PROC_SYMBOL(public_62da400);
CLANG_FORWARD_PROC_SYMBOL(public_62dae20);
CLANG_FORWARD_PROC_SYMBOL(public_62e6010);
CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9a60);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

#define public_62c3d6f _public_62c3d6f
#define public_62c3d71 _public_62c3d71
#define public_62c3d95 _public_62c3d95
#define public_62c3de1 _public_62c3de1
#define public_62c3de8 _public_62c3de8
#define public_62c3e2d _public_62c3e2d
#define public_62c3e40 _public_62c3e40
#define public_62c3e42 _public_62c3e42
#define public_62c3e4b _public_62c3e4b
#define public_62c3e80 _public_62c3e80
#define public_62c3ec0 _public_62c3ec0
#define public_62c3ef6 _public_62c3ef6
#define public_62c3ef8 _public_62c3ef8
#define public_62c3f07 _public_62c3f07
#define public_62c3f09 _public_62c3f09
#define public_62c3fdc _public_62c3fdc
#define public_62c4018 _public_62c4018
#define public_62c401a _public_62c401a
#define public_62c4117 _public_62c4117
#define public_62c4127 _public_62c4127
#define public_62c413a _public_62c413a
#define public_62c413c _public_62c413c
#define public_62c4148 _public_62c4148
#define public_62c4151 _public_62c4151
#define public_62c419a _public_62c419a
#define public_62c41c8 _public_62c41c8
#define public_62c4229 _public_62c4229
#define public_62c4291 _public_62c4291
#define public_62c42fd _public_62c42fd
#define public_62c4345 _public_62c4345
#define public_62c4370 _public_62c4370
#define public_62c43e2 _public_62c43e2
#define public_62c4427 _public_62c4427
#define public_62c4465 _public_62c4465
#define public_62c44ab _public_62c44ab
#define public_62c44be _public_62c44be
#define public_62c44d1 _public_62c44d1
#define public_62c44dc _public_62c44dc
#define public_62c44ef _public_62c44ef

PROC_DECLARE(0x62c3d10, internal_62c3d10, public_62c3d10);
extern "C" NAKED register_t __cdecl internal_62c3d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x9C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xB0]
        mov ebx, 1
        cmp edi, ebx
        mov esi, ecx
        je public_62c3d6f
        cmp dword ptr ds : [esi+0x320], ebx
        jne public_62c3d6f
        mov ecx, dword ptr ds : [esi+0x2F0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x2F0]
        call public_62d21c0
        mov ecx, dword ptr ds : [esi+0x24]
        xor ebp, ebp
        push ebp
        add ecx, 0x18
        mov dword ptr ds : [esi+0x2F0], ebp
        call public_62e90a0
        mov edx, dword ptr ds : [esi+0x2DC]
        lea ecx, ds:[esi+0x2DC]
        call dword ptr ds : [edx+0x10]
        jmp public_62c3d71
        public_62c3d6f : nop
        xor ebp, ebp
        public_62c3d71 : nop
        mov eax, dword ptr ds : [public_639f47c]
        mov dword ptr ds : [esi+0x46C], eax
        lea eax, ds:[edi-1]
        cmp eax, 0xC
        mov dword ptr ds : [esi+0x320], edi
        ja public_62c44ef
/*FIXUP jmp dword ptr ds : [eax*4+public_62c44fc] @0x62c3d8e*/
  JMPTB cmp eax, 0
  JMPTB je public_62c3d95
  JMPTB cmp eax, 1
  JMPTB je public_62c3e80
  JMPTB cmp eax, 2
  JMPTB je public_62c44ef
  JMPTB cmp eax, 3
  JMPTB je public_62c419a
  JMPTB cmp eax, 4
  JMPTB je public_62c44ef
  JMPTB cmp eax, 5
  JMPTB je public_62c41c8
  JMPTB cmp eax, 6
  JMPTB je public_62c4291
  JMPTB cmp eax, 7
  JMPTB je public_62c4345
  JMPTB cmp eax, 8
  JMPTB je public_62c4370
  JMPTB cmp eax, 9
  JMPTB je public_62c44ef
  JMPTB cmp eax, 0xA
  JMPTB je public_62c44ab
  JMPTB cmp eax, 0xB
  JMPTB je public_62c44d1
  JMPTB cmp eax, 0xC
  JMPTB je public_62c44be
  JMPTB int 3
        public_62c3d95 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx+0x17C]
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ds : [esi+0x2F0], edx
        call public_62dae20
        mov eax, dword ptr ds : [public_63ebdb4]
        lea edi, ds:[esi+0x450]
        mov dword ptr ss : [esp+0x8C], eax
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x94], bl
        je public_62c3de1
        lea ecx, ds:[eax-8]
        cmp ecx, ebp
        je public_62c3de1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x98], eax
        jmp public_62c3de8
        public_62c3de1 : nop
        mov dword ptr ss : [esp+0x98], ebp
        public_62c3de8 : nop
        fld dword ptr ds : [esi+0x458]
        push ebp
        fstp dword ptr ss : [esp+0xA0]
        mov ecx, edi
        call public_62c2ad0
        fstp dword ptr ss : [esp+0xA0]
        test byte ptr ds : [esi+0x32C], 0xC0
        je public_62c3e2d
        lea eax, ds:[esi+0x3CC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], eax
        jmp public_62c3e4b
        public_62c3e2d : nop
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x48], ebp
        je public_62c3e40
        lea ecx, ds:[eax-8]
        jmp public_62c3e42
        public_62c3e40 : nop
        xor ecx, ecx
        public_62c3e42 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x58], eax
        public_62c3e4b : nop
        mov ecx, dword ptr ds : [esi+0x2F0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x3C]
        push edx
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [esi+0x2F0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi+0x2F0]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ecx+0x36C], 0
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c3e80 : nop
        push 3
        push ebx
        mov ecx, esi
        call public_62d21d0
        test byte ptr ds : [esi+0x32C], 0xC0
        je public_62c4151
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62c3ec0
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c3ec0 : nop
        fld dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebp
        fsub dword ptr ds : [esi+0x3CC]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ds : [esi+0x3D0]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [edi+0x14]
        fsub dword ptr ds : [esi+0x3D4]
        fstp dword ptr ss : [esp+0x24]
        je public_62c3ef6
        lea edi, ds:[eax-8]
        jmp public_62c3ef8
        public_62c3ef6 : nop
        xor edi, edi
        public_62c3ef8 : nop
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebp
        je public_62c3f07
        lea ecx, ds:[eax-8]
        jmp public_62c3f09
        public_62c3f07 : nop
        xor ecx, ecx
        public_62c3f09 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+0xC]
        push edi
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0x1C]
        call public_62e6010
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        add esp, 4
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x34]
        fadd st(0), st
        fstp st(1)
        fld dword ptr ss : [esp+0x30]
        fadd st(0), st
        fld dword ptr ss : [esp+0x34]
        fadd st(0), st
        fstp dword ptr ss : [esp+0x34]
        fxch 
        fmul dword ptr ds : [public_639f520]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_639f520]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_639f520]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62c3fdc
        fld dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        fchs 
        mov dword ptr ss : [esp+0x10], eax
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        fchs 
        mov dword ptr ss : [esp+0x14], ecx
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], edx
        public_62c3fdc : nop
        fld dword ptr ds : [public_639f490]
        mov eax, dword ptr ds : [public_639f490]
        fchs 
        mov dword ptr ss : [esp+0x38], eax
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [public_6399308]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebp
        fmul dword ptr ds : [public_63997d0]
        fstp qword ptr ss : [esp+0x1C]
        je public_62c4018
        lea ecx, ds:[eax-8]
        jmp public_62c401a
        public_62c4018 : nop
        xor ecx, ecx
        public_62c401a : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x1C]
        lea eax, ds:[esi+0x39C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x28]
        fmul qword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_639f480]
        fsub dword ptr ds : [public_639f488]
        fld st(0)
        fmul dword ptr ds : [esi+0x38C]
        fld st(1)
        fmul dword ptr ds : [esi+0x390]
        fstp dword ptr ss : [esp+0x30]
        fxch 
        fmul dword ptr ds : [esi+0x394]
        fstp dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0x3CC]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi+0x3D0]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0x3D4]
        fstp dword ptr ss : [esp+0x34]
        fxch 
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x20]
        fadd st, st(1)
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        fstp st(0)
        mov eax, dword ptr ds : [esi+0x32C]
        test al, al
        jns public_62c4127
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebp
        je public_62c4117
        add eax, 0xFFFFFFF8
        push eax
        call public_62e6010
        fmul dword ptr ds : [public_639c13c]
        jmp public_62c4148
        public_62c4117 : nop
        xor eax, eax
        push eax
        call public_62e6010
        fmul dword ptr ds : [public_639c13c]
        jmp public_62c4148
        public_62c4127 : nop
        test al, 0x40
        je public_62c4151
        mov eax, dword ptr ds : [esi+0x324]
        cmp eax, ebp
        je public_62c413a
        add eax, 0xFFFFFFF8
        jmp public_62c413c
        public_62c413a : nop
        xor eax, eax
        public_62c413c : nop
        push eax
        call public_62e6010
        fmul dword ptr ds : [public_639f520]
        public_62c4148 : nop
        fstp dword ptr ds : [esi+0x338]
        add esp, 4
        public_62c4151 : nop
        lea edi, ds:[esi+0x30]
        push ebp
        mov ecx, edi
        call public_62d5980
        mov edx, dword ptr ds : [public_639f480]
        push edx
        mov ecx, edi
        call public_62a66b0
        lea ebp, ds:[esi+0x39C]
        push ebp
        mov ecx, edi
        call public_62d5840
        push ebp
        lea ecx, ds:[esi+0xA8]
        call public_62d7560
        push 0
        mov ecx, edi
        call public_62d88b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c419a : nop
        lea edi, ds:[esi+0x30]
        push ebp
        mov ecx, edi
        call public_62d88b0
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0xA8]
        lea ecx, ds:[esi+0xA8]
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c41c8 : nop
        mov eax, dword ptr ds : [esi+0x32C]
        test al, 0xC0
        je public_62c4229
        lea edi, ds:[esi+0xA8]
        push 0x3EC90FDB
        mov ecx, edi
        call public_62d93c0
        lea ebx, ds:[esi+0x3CC]
        push ebx
        mov ecx, edi
        call public_62d7560
        lea edi, ds:[esi+0x30]
        push ebx
        mov ecx, edi
        call public_62d5840
        push 0x41200000
        mov ecx, edi
        call public_62a66b0
        push 2
        mov ecx, edi
        call public_62d88b0
        pop edi
        mov dword ptr ds : [esi+0x46C], 0x41200000
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c4229 : nop
        test ah, 8
        jne public_62c44ef
        lea eax, ds:[esi+0x3A8]
        push eax
        lea ecx, ds:[esi+0xA8]
        call public_62d75c0
        lea ecx, ds:[esi+0x39C]
        lea edi, ds:[esi+0x30]
        push ecx
        mov ecx, edi
        call public_62d5840
        mov edx, dword ptr ds : [public_63ebdbc]
        push edx
        mov ecx, edi
        call public_62a66b0
        push ebx
        mov ecx, edi
        call public_62d5980
        mov eax, dword ptr ds : [public_63ebdb8]
        mov dword ptr ds : [esi+0x46C], eax
        add esi, 0x430
        push esi
        mov ecx, edi
        call public_62d5a80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c4291 : nop
        push 3
        push ebp
        mov ecx, esi
        call public_62d21d0
        lea edi, ds:[esi+0x30]
        push 2
        mov ecx, edi
        call public_62d88b0
        lea ecx, ds:[esi+0x430]
        push ecx
        mov ecx, edi
        call public_62d5a80
        mov al, byte ptr ds : [esi+0x344]
        test al, al
        lea ecx, ds:[esi+0xA8]
        je public_62c42fd
        lea ebp, ds:[esi+0x3FC]
        push ebp
        call public_62d7560
        push 0
        mov ecx, edi
        call public_62d5980
        push ebp
        mov ecx, edi
        call public_62d5840
        mov edx, dword ptr ds : [public_63ebdc4]
        push edx
        mov ecx, edi
        call public_62a66b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c42fd : nop
        lea eax, ds:[esi+0x3D8]
        push eax
        call public_62d75c0
        lea ecx, ds:[esi+0x3CC]
        push ecx
        mov ecx, edi
        call public_62d5840
        mov edx, dword ptr ds : [public_63ebdc0]
        push edx
        mov ecx, edi
        call public_62a66b0
        push ebx
        mov ecx, edi
        call public_62d5980
        mov eax, dword ptr ds : [public_63ebdb8]
        pop edi
        mov dword ptr ds : [esi+0x46C], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c4345 : nop
        mov ecx, esi
        call public_62c56d0
        push 3
        push ebp
        mov ecx, esi
        call public_62d21d0
        push 2
        lea ecx, ds:[esi+0x168]
        call public_62da400
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c4370 : nop
        push 3
        push ebp
        mov ecx, esi
        call public_62d21d0
        lea ebp, ds:[esi+0x3FC]
        lea edi, ds:[esi+0x30]
        push ebp
        mov ecx, edi
        call public_62d5840
        lea ecx, ds:[esi+0x430]
        push ecx
        mov ecx, edi
        call public_62d5a80
        fld dword ptr ds : [esi+0x408]
        fmul qword ptr ds : [public_639f518]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call public_62a66b0
        mov eax, dword ptr ds : [esi+0x32C]
        test al, 0xC0
        je public_62c43e2
        lea edx, ds:[esi+0x38C]
        push edx
        lea ecx, ds:[esi+0xA8]
        call public_62d7590
        push 2
        mov ecx, edi
        call public_62d88b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c43e2 : nop
        test ah, 8
        je public_62c4427
        push 0
        mov ecx, edi
        call public_62d5980
        push 0
        mov ecx, edi
        call public_62d5a70
        push 0x3EB2B8C3
        mov ecx, edi
        call public_63275f0
        push 2
        mov ecx, edi
        call public_62d88b0
        push ebp
        lea ecx, ds:[esi+0xA8]
        call public_62d7560
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c4427 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        push ebx
        call public_62d4b90
        push 0
        mov ecx, edi
        call public_62d88b0
        mov al, byte ptr ds : [esi+0x344]
        test al, al
        lea ecx, ds:[esi+0xA8]
        je public_62c4465
        push ebp
        call public_62d7560
        push 0
        mov ecx, edi
        call public_62d5980
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c4465 : nop
        lea eax, ds:[esi+0x40C]
        push eax
        call public_62d75c0
        push ebx
        mov ecx, edi
        call public_62d5980
        test byte ptr ds : [esi+0x32C], 0x20
        mov ecx, dword ptr ds : [public_63ebdb8]
        mov dword ptr ds : [esi+0x46C], ecx
        jne public_62c44ef
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        add ecx, 0x12C
        call public_62e9a60
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c44ab : nop
        pop edi
        mov dword ptr ds : [esi+0x340], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        public_62c44be : nop
        mov al, byte ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi]
        or al, bl
        mov ecx, esi
        mov byte ptr ds : [esi+0x28], al
        call dword ptr ds : [edx+0x10]
        push 2
        jmp public_62c44dc
        public_62c44d1 : nop
        or byte ptr ds : [esi+0x28], bl
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        push ebp
        public_62c44dc : nop
        mov dl, byte ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        and dl, 0xFD
        push 7
        mov byte ptr ds : [esi+0x28], dl
        call public_62d29a0
        public_62c44ef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 4
        UNREACHABLE_TRAP(0x62c3d10)
        ASM_EXPORT_ENTRY_FIRST(0x62c3d95, public_62c3d95)
        ASM_EXPORT_ENTRY(0x62c3e80, public_62c3e80)
        ASM_EXPORT_ENTRY(0x62c419a, public_62c419a)
        ASM_EXPORT_ENTRY(0x62c41c8, public_62c41c8)
        ASM_EXPORT_ENTRY(0x62c4291, public_62c4291)
        ASM_EXPORT_ENTRY(0x62c4345, public_62c4345)
        ASM_EXPORT_ENTRY(0x62c4370, public_62c4370)
        ASM_EXPORT_ENTRY(0x62c44ab, public_62c44ab)
        ASM_EXPORT_ENTRY(0x62c44be, public_62c44be)
        ASM_EXPORT_ENTRY(0x62c44d1, public_62c44d1)
        ASM_EXPORT_ENTRY_LAST(0x62c44ef, public_62c44ef)
    }
}

#undef public_62c3d6f
#undef public_62c3d71
#undef public_62c3d95
#undef public_62c3de1
#undef public_62c3de8
#undef public_62c3e2d
#undef public_62c3e40
#undef public_62c3e42
#undef public_62c3e4b
#undef public_62c3e80
#undef public_62c3ec0
#undef public_62c3ef6
#undef public_62c3ef8
#undef public_62c3f07
#undef public_62c3f09
#undef public_62c3fdc
#undef public_62c4018
#undef public_62c401a
#undef public_62c4117
#undef public_62c4127
#undef public_62c413a
#undef public_62c413c
#undef public_62c4148
#undef public_62c4151
#undef public_62c419a
#undef public_62c41c8
#undef public_62c4229
#undef public_62c4291
#undef public_62c42fd
#undef public_62c4345
#undef public_62c4370
#undef public_62c43e2
#undef public_62c4427
#undef public_62c4465
#undef public_62c44ab
#undef public_62c44be
#undef public_62c44d1
#undef public_62c44dc
#undef public_62c44ef

#pragma init_seg(compiler)
extern "C" void const* const public_62c3d95 = __AsmFindLabelExport(&internal_62c3d10, 0x62c3d95);
extern "C" void const* const public_62c3e80 = __AsmFindLabelExport(&internal_62c3d10, 0x62c3e80);
extern "C" void const* const public_62c419a = __AsmFindLabelExport(&internal_62c3d10, 0x62c419a);
extern "C" void const* const public_62c41c8 = __AsmFindLabelExport(&internal_62c3d10, 0x62c41c8);
extern "C" void const* const public_62c4291 = __AsmFindLabelExport(&internal_62c3d10, 0x62c4291);
extern "C" void const* const public_62c4345 = __AsmFindLabelExport(&internal_62c3d10, 0x62c4345);
extern "C" void const* const public_62c4370 = __AsmFindLabelExport(&internal_62c3d10, 0x62c4370);
extern "C" void const* const public_62c44ab = __AsmFindLabelExport(&internal_62c3d10, 0x62c44ab);
extern "C" void const* const public_62c44be = __AsmFindLabelExport(&internal_62c3d10, 0x62c44be);
extern "C" void const* const public_62c44d1 = __AsmFindLabelExport(&internal_62c3d10, 0x62c44d1);
extern "C" void const* const public_62c44ef = __AsmFindLabelExport(&internal_62c3d10, 0x62c44ef);
