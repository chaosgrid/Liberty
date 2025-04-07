#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d30c72);
CLANG_FORWARD_PROC_SYMBOL(public_6d30ccb);

#define public_6d30ce1 _public_6d30ce1

PROC_DECLARE(0x6d30ccb, internal_6d30ccb, public_6d30ccb);
extern "C" NAKED register_t __cdecl internal_6d30ccb()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d30c72
        test byte ptr ss : [esp+8], 1
        je public_6d30ce1
        push esi
        call public_6d2f249
        pop ecx
        public_6d30ce1 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d30ccb)
    }
}

#undef public_6d30ce1
