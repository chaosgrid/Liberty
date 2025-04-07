#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77900);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b77923 _public_6b77923

PROC_DECLARE(0x6b77900, internal_6b77900, public_6b77900);
extern "C" NAKED register_t __cdecl internal_6b77900()
{
    __asm
    {
        push 0xC
        call public_6b782ac
        add esp, 4
        test eax, eax
        je public_6b77923
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_6b7a028
        mov dword ptr ds : [eax], offset public_6b792d0
        ret 
        public_6b77923 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6b77900)
    }
}

#undef public_6b77923
