#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf050);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15560);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaf8b);

#define public_6ecb85b _public_6ecb85b
#define public_6ecb88e _public_6ecb88e
#define public_6ecb896 _public_6ecb896
#define public_6ecb89b _public_6ecb89b
#define public_6ecb8bc _public_6ecb8bc
#define public_6ecb8e7 _public_6ecb8e7
#define public_6ecb8e9 _public_6ecb8e9
#define public_6ecb90f _public_6ecb90f
#define public_6ecb911 _public_6ecb911
#define public_6ecb91d _public_6ecb91d
#define public_6ecb91f _public_6ecb91f
#define public_6ecb92b _public_6ecb92b
#define public_6ecb930 _public_6ecb930
#define public_6ecb95f _public_6ecb95f
#define public_6ecb968 _public_6ecb968
#define public_6ecb9b8 _public_6ecb9b8
#define public_6ecb9ce _public_6ecb9ce

PROC_DECLARE(0x6ecb800, internal_6ecb800, public_6ecb800);
extern "C" NAKED register_t __cdecl internal_6ecb800()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faaf8b @0x6ecb808*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaf8b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecb9ce
        push ebx
        push ebp
        push esi
        lea ebx, ds:[edi+0x14]
/*FIXUP push offset public_6fb57a0 @0x6ecb838*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push ebx
        xor esi, esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ecb85b
        lea ecx, ds:[edi+0x10]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        call public_6f15560
        mov esi, eax
        public_6ecb85b : nop
        xor ebp, ebp
        test esi, esi
        je public_6ecb89b
        lea ebp, ds:[esi+0x38]
        mov esi, dword ptr ds : [edi+4]
        add esi, 0x184
        push ebp
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6ecb88e
        mov edx, dword ptr ss : [ebp]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6ecb88e
        lea eax, ss:[esp+0x10]
        jmp public_6ecb896
        public_6ecb88e : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6ecb896 : nop
        mov eax, dword ptr ds : [eax]
        lea ebp, ds:[eax+0x10]
        public_6ecb89b : nop
        push 0x70
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6ecb8bc
        mov ecx, eax
        call public_6ecf3a0
        mov esi, eax
/*FIXUP public_6ecb8bc : nop
        push offset public_6fb57a0 @0x6ecb8bc*/
  FIXUP public_6ecb8bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb57a0
        push ebx
        mov ebx, dword ptr ds : [public_6fb3294]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call ebx
        add esp, 8
        test eax, eax
        je public_6ecb8e7
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ds:[edi+0x10]
        push eax
        call public_6f15b90
        jmp public_6ecb8e9
        public_6ecb8e7 : nop
        xor eax, eax
        public_6ecb8e9 : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+8]
        call public_6f478c0
        test ebp, ebp
        mov ecx, dword ptr ds : [eax+0x48]
        mov dword ptr ds : [esi+0xC], ecx
        je public_6ecb90f
        lea eax, ss:[ebp+0x10]
        jmp public_6ecb911
        public_6ecb90f : nop
        xor eax, eax
        public_6ecb911 : nop
        test ebp, ebp
        mov dword ptr ds : [esi+0x10], eax
        je public_6ecb91d
        mov eax, dword ptr ss : [ebp+0x44]
        jmp public_6ecb91f
        public_6ecb91d : nop
        xor eax, eax
        public_6ecb91f : nop
        test ebp, ebp
        mov dword ptr ds : [esi+0x14], eax
        je public_6ecb92b
        mov ebp, dword ptr ss : [ebp+4]
        jmp public_6ecb930
        public_6ecb92b : nop
        mov ebp, 1
        public_6ecb930 : nop
        mov dword ptr ds : [esi+0x1C], ebp
        mov edx, dword ptr ds : [edi+4]
        lea ebp, ds:[edi+0x44]
        mov dword ptr ds : [esi+0x34], edx
        cmp dword ptr ss : [ebp], 0
        je public_6ecb95f
        lea eax, ds:[edi+0x48]
/*FIXUP push offset public_6fb4678 @0x6ecb945*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4678
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_6ecb95f
        mov ecx, dword ptr ds : [edi+4]
        push ebp
        call public_6f15b90
        jmp public_6ecb968
        public_6ecb95f : nop
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [esi+0x63], 1
        public_6ecb968 : nop
        mov dword ptr ds : [esi+0x38], eax
        mov ecx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x3C], ecx
        mov edx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x40], edx
        mov al, byte ptr ds : [edi+0x90]
        mov byte ptr ds : [esi+0x61], al
        mov cl, byte ptr ds : [edi+0x91]
        mov byte ptr ds : [esi+0x62], cl
        mov dl, byte ptr ds : [edi+0x84]
        mov byte ptr ds : [esi+0x60], dl
        mov al, byte ptr ds : [edi+0x84]
        test al, al
        je public_6ecb9b8
        lea eax, ds:[edi+0x78]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x44]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_6ecb9b8 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        push esi
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        add ecx, 0x204
        call public_6ecf050
        pop esi
        pop ebp
        pop ebx
        public_6ecb9ce : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov al, 1
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ecb800)
    }
}

#undef public_6ecb85b
#undef public_6ecb88e
#undef public_6ecb896
#undef public_6ecb89b
#undef public_6ecb8bc
#undef public_6ecb8e7
#undef public_6ecb8e9
#undef public_6ecb90f
#undef public_6ecb911
#undef public_6ecb91d
#undef public_6ecb91f
#undef public_6ecb92b
#undef public_6ecb930
#undef public_6ecb95f
#undef public_6ecb968
#undef public_6ecb9b8
#undef public_6ecb9ce
