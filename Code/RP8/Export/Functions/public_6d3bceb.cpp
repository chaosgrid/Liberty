#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ae81);

#define public_6d3bd01 _public_6d3bd01

PROC_DECLARE(0x6d3bceb, internal_6d3bceb, public_6d3bceb);
extern "C" NAKED register_t __cdecl internal_6d3bceb()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3ae81
        test byte ptr ss : [esp+8], 1
        je public_6d3bd01
        push esi
        call public_6d2f249
        pop ecx
        public_6d3bd01 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3bceb)
    }
}

#undef public_6d3bd01
