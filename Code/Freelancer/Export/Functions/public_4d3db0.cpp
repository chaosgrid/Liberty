#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4d3dc4 _public_4d3dc4

PROC_DECLARE(0x4d3db0, internal_4d3db0, public_4d3db0);
extern "C" NAKED register_t __cdecl internal_4d3db0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45a740
        test al, al
        jne public_4d3dc4
        mov ecx, esi
        pop esi
        jmp public_5a17b0
        public_4d3dc4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4d3db0)
    }
}

#undef public_4d3dc4
