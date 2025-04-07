#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf910);
CLANG_FORWARD_PROC_SYMBOL(public_6ad078e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23f0);

#define public_6ad07b1 _public_6ad07b1

PROC_DECLARE(0x6ad078e, internal_6ad078e, public_6ad078e);
extern "C" NAKED register_t __cdecl internal_6ad078e()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        je public_6ad07b1
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        call public_6ad23f0
        inc eax
        push eax
        push esi
        add esi, edi
        push esi
        call public_6acf910
        add esp, 0x10
        pop esi
        public_6ad07b1 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ad078e)
    }
}

#undef public_6ad07b1
