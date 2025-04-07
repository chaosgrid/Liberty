#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d95b60);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d95b6e _public_6d95b6e

PROC_DECLARE(0x6d95b60, internal_6d95b60, public_6d95b60);
extern "C" NAKED register_t __cdecl internal_6d95b60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6d95b6e
        push eax
        call public_6db1dc2
        pop ecx
        public_6d95b6e : nop
        ret 
        UNREACHABLE_TRAP(0x6d95b60)
    }
}

#undef public_6d95b6e
