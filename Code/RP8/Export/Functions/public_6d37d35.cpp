#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3731f);

#define public_6d37d4b _public_6d37d4b

PROC_DECLARE(0x6d37d35, internal_6d37d35, public_6d37d35);
extern "C" NAKED register_t __cdecl internal_6d37d35()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3731f
        test byte ptr ss : [esp+8], 1
        je public_6d37d4b
        push esi
        call public_6d2f249
        pop ecx
        public_6d37d4b : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d37d35)
    }
}

#undef public_6d37d4b
