#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3bdbc);

#define public_6d3c5a7 _public_6d3c5a7

PROC_DECLARE(0x6d3c591, internal_6d3c591, public_6d3c591);
extern "C" NAKED register_t __cdecl internal_6d3c591()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3bdbc
        test byte ptr ss : [esp+8], 1
        je public_6d3c5a7
        push esi
        call public_6d2f249
        pop ecx
        public_6d3c5a7 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3c591)
    }
}

#undef public_6d3c5a7
