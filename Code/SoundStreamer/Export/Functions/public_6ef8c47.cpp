#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8c47);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8db0);
CLANG_FORWARD_PROC_SYMBOL(public_6efa53f);
CLANG_FORWARD_PROC_SYMBOL(public_6efa5d0);

#define public_6ef8c5a _public_6ef8c5a
#define public_6ef8c69 _public_6ef8c69
#define public_6ef8c9a _public_6ef8c9a
#define public_6ef8cd1 _public_6ef8cd1
#define public_6ef8d14 _public_6ef8d14
#define public_6ef8d71 _public_6ef8d71
#define public_6ef8d97 _public_6ef8d97

PROC_DECLARE(0x6ef8c47, internal_6ef8c47, public_6ef8c47);
extern "C" NAKED register_t __cdecl internal_6ef8c47()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1A4
        mov edx, dword ptr ss : [ebp+8]
        xor ecx, ecx
        mov eax, offset public_6f00578
        public_6ef8c5a : nop
        cmp edx, dword ptr ds : [eax]
        je public_6ef8c69
        add eax, 8
        inc ecx
        cmp eax, offset public_6f00608
        jl public_6ef8c5a
        public_6ef8c69 : nop
        push esi
        mov esi, ecx
        shl esi, 3
        cmp edx, dword ptr ds : [esi+public_6f00578]
        jne public_6ef8d97
        mov eax, dword ptr ds : [public_6f010bc]
        cmp eax, 1
        je public_6ef8d71
        test eax, eax
        jne public_6ef8c9a
        cmp dword ptr ds : [public_6f010c0], 1
        je public_6ef8d71
        public_6ef8c9a : nop
        cmp edx, 0xFC
        je public_6ef8d97
        lea eax, ss:[ebp-0x1A4]
        push 0x104
        push eax
        push 0
        call dword ptr ds : [public_6efc00c]
        test eax, eax
        jne public_6ef8cd1
        lea eax, ss:[ebp-0x1A4]
/*FIXUP push offset public_6efc760 @0x6ef8cc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc760
        push eax
        call public_6ef8da0
        pop ecx
        pop ecx
        public_6ef8cd1 : nop
        lea eax, ss:[ebp-0x1A4]
        push edi
        push eax
        lea edi, ss:[ebp-0x1A4]
        call public_6ef5230
        inc eax
        pop ecx
        cmp eax, 0x3C
        jbe public_6ef8d14
        lea eax, ss:[ebp-0x1A4]
        push eax
        call public_6ef5230
        mov edi, eax
        lea eax, ss:[ebp-0x1A4]
        sub eax, 0x3B
        push 3
        add edi, eax
/*FIXUP push offset public_6efc75c @0x6ef8d06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc75c
        push edi
        call public_6efa5d0
        add esp, 0x10
        public_6ef8d14 : nop
        lea eax, ss:[ebp-0xA0]
/*FIXUP push offset public_6efc740 @0x6ef8d1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc740
        push eax
        call public_6ef8da0
        lea eax, ss:[ebp-0xA0]
        push edi
        push eax
        call public_6ef8db0
        lea eax, ss:[ebp-0xA0]
/*FIXUP push offset public_6efc73c @0x6ef8d38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc73c
        push eax
        call public_6ef8db0
        push dword ptr ds : [esi+public_6f0057c]
        lea eax, ss:[ebp-0xA0]
        push eax
        call public_6ef8db0
        push 0x12010
        lea eax, ss:[ebp-0xA0]
/*FIXUP push offset public_6efc714 @0x6ef8d60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc714
        push eax
        call public_6efa53f
        add esp, 0x2C
        pop edi
        jmp public_6ef8d97
        public_6ef8d71 : nop
        lea eax, ss:[ebp+8]
        lea esi, ds : [esi+public_6f0057c]
        push 0
        push eax
        push dword ptr ds : [esi]
        call public_6ef5230
        pop ecx
        push eax
        push dword ptr ds : [esi]
        push 0xFFFFFFF4
        call dword ptr ds : [public_6efc0d4]
        push eax
        call dword ptr ds : [public_6efc0cc]
        public_6ef8d97 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef8c47)
    }
}

#undef public_6ef8c5a
#undef public_6ef8c69
#undef public_6ef8c9a
#undef public_6ef8cd1
#undef public_6ef8d14
#undef public_6ef8d71
#undef public_6ef8d97
