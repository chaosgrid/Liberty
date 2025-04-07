#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4213a);
CLANG_FORWARD_PROC_SYMBOL(public_6d42abc);
CLANG_FORWARD_PROC_SYMBOL(public_6d48c6c);

#define public_6d4214c _public_6d4214c

PROC_DECLARE(0x6d4213a, internal_6d4213a, public_6d4213a);
extern "C" NAKED register_t __cdecl internal_6d4213a()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test byte ptr ds : [esi+0x5C], 0x40
        jne public_6d4214c
        push esi
        call public_6d48c6c
        pop ecx
        public_6d4214c : nop
        push dword ptr ss : [esp+0xC]
        push esi
        call public_6d42abc
        pop ecx
        pop ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d4213a)
    }
}

#undef public_6d4214c
