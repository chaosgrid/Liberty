#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4292b);

#define public_6d42940 _public_6d42940

PROC_DECLARE(0x6d4292b, internal_6d4292b, public_6d4292b);
extern "C" NAKED register_t __cdecl internal_6d4292b()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp byte ptr ds : [eax+0x113], 0
        je public_6d42940
        or dword ptr ds : [eax+0x60], 2
        push 7
        pop eax
        ret 
        public_6d42940 : nop
        xor eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x6d4292b)
    }
}

#undef public_6d42940
