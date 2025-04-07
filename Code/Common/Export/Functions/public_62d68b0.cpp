#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62d35c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4310);
CLANG_FORWARD_PROC_SYMBOL(public_62d4370);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e1f40);
CLANG_FORWARD_PROC_SYMBOL(public_62e28f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e2c00);
CLANG_FORWARD_PROC_SYMBOL(public_62e2c70);
CLANG_FORWARD_PROC_SYMBOL(public_62e3730);
CLANG_FORWARD_PROC_SYMBOL(public_62e37e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5ba0);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e61a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e61f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62e92e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62d68d5 _public_62d68d5
#define public_62d690f _public_62d690f
#define public_62d6921 _public_62d6921
#define public_62d692f _public_62d692f
#define public_62d6941 _public_62d6941
#define public_62d694d _public_62d694d
#define public_62d694f _public_62d694f
#define public_62d699d _public_62d699d
#define public_62d699f _public_62d699f
#define public_62d69e4 _public_62d69e4
#define public_62d69f0 _public_62d69f0
#define public_62d69f2 _public_62d69f2
#define public_62d6a4a _public_62d6a4a
#define public_62d6a84 _public_62d6a84
#define public_62d6a90 _public_62d6a90
#define public_62d6a92 _public_62d6a92
#define public_62d6b00 _public_62d6b00
#define public_62d6b06 _public_62d6b06
#define public_62d6b0b _public_62d6b0b
#define public_62d6b16 _public_62d6b16
#define public_62d6b59 _public_62d6b59
#define public_62d6bc2 _public_62d6bc2
#define public_62d6bdd _public_62d6bdd
#define public_62d6be9 _public_62d6be9
#define public_62d6beb _public_62d6beb
#define public_62d6c53 _public_62d6c53
#define public_62d6c9d _public_62d6c9d
#define public_62d6cfe _public_62d6cfe
#define public_62d6d38 _public_62d6d38
#define public_62d6da1 _public_62d6da1
#define public_62d6dbc _public_62d6dbc
#define public_62d6e17 _public_62d6e17
#define public_62d6e5f _public_62d6e5f
#define public_62d6e8a _public_62d6e8a
#define public_62d6e92 _public_62d6e92
#define public_62d6f32 _public_62d6f32
#define public_62d6f77 _public_62d6f77
#define public_62d6fb2 _public_62d6fb2
#define public_62d6fb7 _public_62d6fb7
#define public_62d6fca _public_62d6fca
#define public_62d6fd9 _public_62d6fd9
#define public_62d6ff4 _public_62d6ff4
#define public_62d704a _public_62d704a
#define public_62d705a _public_62d705a
#define public_62d7080 _public_62d7080
#define public_62d70fa _public_62d70fa
#define public_62d7116 _public_62d7116
#define public_62d7141 _public_62d7141
#define public_62d7163 _public_62d7163
#define public_62d7165 _public_62d7165
#define public_62d71a9 _public_62d71a9
#define public_62d71b5 _public_62d71b5
#define public_62d71b7 _public_62d71b7
#define public_62d7209 _public_62d7209
#define public_62d7215 _public_62d7215
#define public_62d7217 _public_62d7217
#define public_62d7223 _public_62d7223
#define public_62d7225 _public_62d7225
#define public_62d731b _public_62d731b
#define public_62d734d _public_62d734d
#define public_62d7408 _public_62d7408
#define public_62d740a _public_62d740a
#define public_62d746c _public_62d746c

PROC_DECLARE(0x62d68b0, internal_62d68b0, public_62d68b0);
extern "C" NAKED register_t __cdecl internal_62d68b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x22C
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        push esi
        push edi
        jne public_62d68d5
        mov eax, 3
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x22C
        ret 4
        public_62d68d5 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [ebp+0xA0]
        add ebx, 0x214
        cmp eax, 5
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        ja public_62d6b16
/*FIXUP jmp dword ptr ds : [eax*4+public_62d74ac] @0x62d6908*/
  JMPTB cmp eax, 0
  JMPTB je public_62d690f
  JMPTB cmp eax, 1
  JMPTB je public_62d6921
  JMPTB cmp eax, 2
  JMPTB je public_62d6c53
  JMPTB cmp eax, 3
  JMPTB je public_62d6e17
  JMPTB cmp eax, 4
  JMPTB je public_62d6e8a
  JMPTB cmp eax, 5
  JMPTB je public_62d6e92
  JMPTB int 3
        public_62d690f : nop
        mov eax, 3
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x22C
        ret 4
        public_62d6921 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d692f
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62d6941
        public_62d692f : nop
        mov eax, 2
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x22C
        ret 4
        public_62d6941 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d694d
        lea ecx, ds:[eax-8]
        jmp public_62d694f
        public_62d694d : nop
        xor ecx, ecx
        public_62d694f : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+8]
        mov al, byte ptr ss : [ebp+0x64]
        test al, al
        je public_62d6a4a
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 5
        jp public_62d6a4a
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d699d
        add eax, 0xFFFFFFF8
        jmp public_62d699f
        public_62d699d : nop
        xor eax, eax
        public_62d699f : nop
        push eax
        call public_62e61f0
        fld dword ptr ds : [eax+0x1C]
        fld dword ptr ds : [eax+0x10]
        mov esi, dword ptr ss : [ebp+8]
        fld dword ptr ds : [eax+4]
        add esi, 0x14FC
        fstp dword ptr ss : [esp+0x3C]
        add esp, 4
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62d69e4
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d69e4 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d69f0
        add eax, 0xFFFFFFF8
        jmp public_62d69f2
        public_62d69f0 : nop
        xor eax, eax
        public_62d69f2 : nop
        push eax
        lea ecx, ss:[esp+0x120]
        push ecx
        call public_62e60e0
        add esi, 0xC
        push esi
        push eax
        lea edx, ss:[esp+0xC0]
        push edx
        call public_6288800
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x38]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        push ecx
        lea edx, ss:[esp+0xB4]
        push edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x14C]
        push eax
        call public_62e1f40
        jmp public_62d6b06
        public_62d6a4a : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        call public_62e92e0
        mov esi, dword ptr ss : [ebp+8]
        add esi, 0x14FC
        test al, al
        mov al, byte ptr ds : [esi+0x7E]
        je public_62d6bc2
        test al, al
        jne public_62d6a84
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d6a84 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d6a90
        add eax, 0xFFFFFFF8
        jmp public_62d6a92
        public_62d6a90 : nop
        xor eax, eax
        public_62d6a92 : nop
        push eax
        lea ecx, ss:[esp+0xD8]
        push ecx
        call public_62e60e0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ds : [eax]
        lea ecx, ss:[esp+0x8C]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, eax
        lea eax, ss:[esp+0x104]
        push eax
        call public_62d4370
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        push esi
        lea edx, ss:[esp+0x224]
        public_62d6b00 : nop
        push edx
        call public_62e3730
        public_62d6b06 : nop
        add esp, 0x10
        mov esi, eax
        public_62d6b0b : nop
        mov ecx, 9
        lea edi, ss:[esp+0x50]
        rep movsd
        public_62d6b16 : nop
        test byte ptr ds : [ebx], 2
        je public_62d705a
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        call public_62e92e0
        mov esi, dword ptr ss : [ebp+8]
        add esi, 0x14FC
        test al, al
        mov al, byte ptr ds : [esi+0x7E]
        je public_62d6fd9
        test al, al
        jne public_62d6b59
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d6b59 : nop
        fld dword ptr ds : [ebx+0x20]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0x80]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x1C]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0x18]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, eax
        lea eax, ss:[esp+0x2C]
        push eax
        call public_62d4370
        push eax
        lea ecx, ss:[esp+0x78]
        push ecx
        lea edx, ss:[esp+0xE8]
        push esi
        push edx
        call public_62e3730
        jmp public_62d704a
        public_62d6bc2 : nop
        test al, al
        jne public_62d6bdd
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62d6bdd : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d6be9
        add eax, 0xFFFFFFF8
        jmp public_62d6beb
        public_62d6be9 : nop
        xor eax, eax
        public_62d6beb : nop
        push eax
        lea eax, ss:[esp+0xCC]
        push eax
        call public_62e60e0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ds : [eax]
        lea ecx, ss:[esp+0x98]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0x90]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x200]
        push eax
        call public_62e1f40
        jmp public_62d6b06
        public_62d6c53 : nop
        mov al, byte ptr ss : [ebp+0x64]
        test al, al
        je public_62d6cfe
        fld dword ptr ss : [ebp+0x6C]
        mov esi, dword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [ebp+0x78]
        add esi, 0x14FC
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [ebp+0x84]
        fstp dword ptr ss : [esp+0x4C]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62d6c9d
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d6c9d : nop
        fld dword ptr ss : [ebp+0x24]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0xC8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x20]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x1C]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x44]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        push ecx
        lea edx, ss:[esp+0xC0]
        push edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x1B8]
        push eax
        call public_62e1f40
        jmp public_62d6b06
        public_62d6cfe : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        call public_62e92e0
        mov esi, dword ptr ss : [ebp+8]
        add esi, 0x14FC
        test al, al
        mov al, byte ptr ds : [esi+0x7E]
        je public_62d6da1
        test al, al
        jne public_62d6d38
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d6d38 : nop
        fld dword ptr ss : [ebp+0x24]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0xA4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x20]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x1C]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, eax
        lea eax, ss:[esp+0x134]
        push eax
        call public_62d4370
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        push esi
        lea edx, ss:[esp+0x170]
        jmp public_62d6b00
        public_62d6da1 : nop
        test al, al
        jne public_62d6dbc
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62d6dbc : nop
        fld dword ptr ss : [ebp+0x24]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0x80]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x20]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x1C]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0x78]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x194]
        push eax
        call public_62e1f40
        jmp public_62d6b06
        public_62d6e17 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        call public_62e92e0
        test al, al
        mov eax, dword ptr ss : [ebp+8]
        je public_62d6e5f
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, eax
        lea eax, ss:[esp+0x128]
        push eax
        call public_62d4370
        push eax
        lea ecx, ss:[ebp+0x28]
        push ecx
        push esi
        lea edx, ss:[esp+0x1DC]
        jmp public_62d6b00
        public_62d6e5f : nop
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push 0
        lea ecx, ss:[ebp+0x28]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0xEC]
        push eax
        call public_62e1f40
        jmp public_62d6b06
        public_62d6e8a : nop
        lea esi, ss:[ebp+0x34]
        jmp public_62d6b0b
        public_62d6e92 : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, 9
        lea edi, ss:[esp+0x50]
        rep movsd
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62d6f77
        mov ecx, dword ptr ss : [ebp+0xC]
        call public_62d4310
        test al, al
        je public_62d6f32
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        call public_62e92e0
        test al, al
        je public_62d6f32
        lea eax, ss:[ebp+0x58]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x20], eax
        push edx
        lea eax, ss:[esp+0x11C]
        push eax
        call public_62d4370
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        add ecx, 0x14FC
        push ecx
        jmp public_62d6fb2
        public_62d6f32 : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+0x60]
        mov edx, dword ptr ss : [ebp+0x5C]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x58]
        push edx
        push ecx
        push eax
        lea edx, ss:[esp+0xB4]
        push edx
        call public_62e2c00
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_62d6fb7
        public_62d6f77 : nop
        lea ecx, ss:[ebp+0x58]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push 0
        mov dword ptr ss : [esp+0x14], edx
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        call public_62d4370
        mov edx, dword ptr ss : [ebp+8]
        push eax
        add edx, 0x14FC
        push edx
        public_62d6fb2 : nop
        call public_62e37e0
        public_62d6fb7 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, 0x18
        call public_62e8c20
        public_62d6fca : nop
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x22C
        ret 4
        public_62d6fd9 : nop
        test al, al
        jne public_62d6ff4
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62d6ff4 : nop
        fld dword ptr ds : [ebx+0x20]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0x80]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x1C]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0x18]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0x78]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0xEC]
        push eax
        call public_62e1f40
        public_62d704a : nop
        mov esi, eax
        lea edi, ss:[esp+0x60]
        mov ecx, 9
        add esp, 0x10
        rep movsd
        public_62d705a : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62d7080
        mov ecx, dword ptr ss : [ebp+0xC]
        push 1
        call public_62d35c0
        public_62d7080 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[ebp+0xA8]
        push ecx
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        call public_62e28f0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        add esp, 0x10
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62d70fa
        mov ecx, dword ptr ss : [ebp+0xC]
        call public_62d4310
        test al, al
        je public_62d70fa
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        call public_62e92e0
        test al, al
        jne public_62d7116
        public_62d70fa : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62d7141
        public_62d7116 : nop
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        lea edx, ss:[esp+0x38]
        push edx
        call public_62d4370
        push eax
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        push eax
        call public_62e37e0
        add esp, 0x14
        public_62d7141 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d731b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62d731b
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d7163
        add eax, 0xFFFFFFF8
        jmp public_62d7165
        public_62d7163 : nop
        xor eax, eax
        public_62d7165 : nop
        push eax
        call public_62e61a0
        fcomp qword ptr ds : [public_6399410]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jne public_62d731b
        mov esi, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62d71a9
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d71a9 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d71b5
        add eax, 0xFFFFFFF8
        jmp public_62d71b7
        public_62d71b5 : nop
        xor eax, eax
        public_62d71b7 : nop
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_62e60e0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x14]
        add esp, 8
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x10]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi+0xC]
        mov esi, dword ptr ss : [ebp+8]
        add esi, 0x14FC
        fstp dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62d7209
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d7209 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d7215
        lea ebx, ds:[eax-8]
        jmp public_62d7217
        public_62d7215 : nop
        xor ebx, ebx
        public_62d7217 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_62d7223
        add eax, 0xFFFFFFF8
        jmp public_62d7225
        public_62d7223 : nop
        xor eax, eax
        public_62d7225 : nop
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_62e60e0
        mov edx, dword ptr ds : [ebx]
        mov edi, eax
        add esp, 8
        lea eax, ss:[esp+0xA4]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [edi+4]
        push edx
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [edi+8]
        fadd dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x14]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x48]
        call public_62e1680
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ss : [esp+0x34], eax
        call public_62e1680
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x48], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x4C], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x58], eax
        call public_62e1630
        call public_6391fc2
        fstp dword ptr ss : [esp+0x40]
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [ebp+4]
        push esi
        push eax
        call public_62e5ba0
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x20
        push 1
        push 0x3EB33333
        push esi
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        jmp public_62d734d
        public_62d731b : nop
        mov ecx, dword ptr ss : [ebp+0x98]
        push 1
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push 0
        lea edx, ss:[esp+0x5C]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+8], ecx
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        public_62d734d : nop
        call public_62e2c70
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x38], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x3C], eax
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        add esp, 0x24
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [ebp+0x94]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62d7408
        fsqrt 
        mov ecx, dword ptr ss : [ebp+0x94]
        mov dword ptr ss : [esp+0x28], ecx
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        fstp st(0)
        mov dword ptr ss : [esp+0x10], edx
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_62d740a
        public_62d7408 : nop
        fstp st(0)
        public_62d740a : nop
        mov al, byte ptr ss : [ebp+0xAD]
        test al, al
        je public_62d746c
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+0xB8]
        mov edx, dword ptr ss : [ebp+0xB4]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xB0]
        push edx
        push ecx
        push eax
        lea edx, ss:[esp+0x3C]
        push edx
        call public_62e2c00
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax]
        add esp, 0x14
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x18]
        public_62d746c : nop
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, 0x18
        mov byte ptr ss : [ebp+0xAD], 0
        call public_62e8c20
        fld dword ptr ss : [ebp+0xA8]
        fcomp dword ptr ss : [ebp+0x8C]
        fnstsw ax
        test ah, 5
        jp public_62d6fca
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x22C
        ret 4
        UNREACHABLE_TRAP(0x62d68b0)
        ASM_EXPORT_ENTRY_FIRST(0x62d690f, public_62d690f)
        ASM_EXPORT_ENTRY(0x62d6921, public_62d6921)
        ASM_EXPORT_ENTRY(0x62d6c53, public_62d6c53)
        ASM_EXPORT_ENTRY(0x62d6e17, public_62d6e17)
        ASM_EXPORT_ENTRY(0x62d6e8a, public_62d6e8a)
        ASM_EXPORT_ENTRY_LAST(0x62d6e92, public_62d6e92)
    }
}

#undef public_62d68d5
#undef public_62d690f
#undef public_62d6921
#undef public_62d692f
#undef public_62d6941
#undef public_62d694d
#undef public_62d694f
#undef public_62d699d
#undef public_62d699f
#undef public_62d69e4
#undef public_62d69f0
#undef public_62d69f2
#undef public_62d6a4a
#undef public_62d6a84
#undef public_62d6a90
#undef public_62d6a92
#undef public_62d6b00
#undef public_62d6b06
#undef public_62d6b0b
#undef public_62d6b16
#undef public_62d6b59
#undef public_62d6bc2
#undef public_62d6bdd
#undef public_62d6be9
#undef public_62d6beb
#undef public_62d6c53
#undef public_62d6c9d
#undef public_62d6cfe
#undef public_62d6d38
#undef public_62d6da1
#undef public_62d6dbc
#undef public_62d6e17
#undef public_62d6e5f
#undef public_62d6e8a
#undef public_62d6e92
#undef public_62d6f32
#undef public_62d6f77
#undef public_62d6fb2
#undef public_62d6fb7
#undef public_62d6fca
#undef public_62d6fd9
#undef public_62d6ff4
#undef public_62d704a
#undef public_62d705a
#undef public_62d7080
#undef public_62d70fa
#undef public_62d7116
#undef public_62d7141
#undef public_62d7163
#undef public_62d7165
#undef public_62d71a9
#undef public_62d71b5
#undef public_62d71b7
#undef public_62d7209
#undef public_62d7215
#undef public_62d7217
#undef public_62d7223
#undef public_62d7225
#undef public_62d731b
#undef public_62d734d
#undef public_62d7408
#undef public_62d740a
#undef public_62d746c

#pragma init_seg(compiler)
extern "C" void const* const public_62d690f = __AsmFindLabelExport(&internal_62d68b0, 0x62d690f);
extern "C" void const* const public_62d6921 = __AsmFindLabelExport(&internal_62d68b0, 0x62d6921);
extern "C" void const* const public_62d6c53 = __AsmFindLabelExport(&internal_62d68b0, 0x62d6c53);
extern "C" void const* const public_62d6e17 = __AsmFindLabelExport(&internal_62d68b0, 0x62d6e17);
extern "C" void const* const public_62d6e8a = __AsmFindLabelExport(&internal_62d68b0, 0x62d6e8a);
extern "C" void const* const public_62d6e92 = __AsmFindLabelExport(&internal_62d68b0, 0x62d6e92);
