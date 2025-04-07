#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad602a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6402);

#define public_6ad641d _public_6ad641d

PROC_DECLARE(0x6ad6402, internal_6ad6402, public_6ad6402);
extern "C" NAKED register_t __cdecl internal_6ad6402()
{
    __asm
    {
        cmp dword ptr ds : [public_6ae2590], 0
        jne public_6ad641d
        push 0xFFFFFFFD
        call public_6ad602a
        pop ecx
        mov dword ptr ds : [public_6ae2590], 1
        public_6ad641d : nop
        ret 
        UNREACHABLE_TRAP(0x6ad6402)
    }
}

#undef public_6ad641d
