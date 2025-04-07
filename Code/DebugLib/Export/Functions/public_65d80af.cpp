#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d80af);

#define public_65d80c4 _public_65d80c4

PROC_DECLARE(0x65d80af, internal_65d80af, public_65d80af);
extern "C" NAKED register_t __cdecl internal_65d80af()
{
    __asm
    {
        cmp dword ptr ds : [ecx+8], 0
        mov dword ptr ds : [ecx], offset public_65e15dc
        je public_65d80c4
        push dword ptr ds : [ecx+4]
        call public_65d6cb8
        pop ecx
        public_65d80c4 : nop
        ret 
        UNREACHABLE_TRAP(0x65d80af)
    }
}

#undef public_65d80c4
