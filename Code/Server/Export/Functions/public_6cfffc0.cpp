#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfffc0);

#define public_6cfffcd _public_6cfffcd

PROC_DECLARE(0x6cfffc0, internal_6cfffc0, public_6cfffc0);
extern "C" NAKED register_t __cdecl internal_6cfffc0()
{
    __asm
    {
        cmp dword ptr ds : [ecx], 0
        je public_6cfffcd
        push 0
        call dword ptr ds : [public_6d6447c]
        public_6cfffcd : nop
        ret 
        UNREACHABLE_TRAP(0x6cfffc0)
    }
}

#undef public_6cfffcd
