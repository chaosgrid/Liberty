#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b78020);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b78043 _public_6b78043

PROC_DECLARE(0x6b78020, internal_6b78020, public_6b78020);
extern "C" NAKED register_t __cdecl internal_6b78020()
{
    __asm
    {
        push 0xC
        call public_6b782ac
        add esp, 4
        test eax, eax
        je public_6b78043
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_6b7a1e4
        mov dword ptr ds : [eax], offset public_6b793b0
        ret 
        public_6b78043 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6b78020)
    }
}

#undef public_6b78043
