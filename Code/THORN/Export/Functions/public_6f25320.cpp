#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f25320);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);

#define public_6f2533a _public_6f2533a

PROC_DECLARE(0x6f25320, internal_6f25320, public_6f25320);
extern "C" NAKED register_t __cdecl internal_6f25320()
{
    __asm
    {
        push 2
        call public_6f4b090
        push eax
        call public_6f4b440
        add esp, 8
        test eax, eax
        je public_6f2533a
        inc dword ptr ds : [public_6f61e04]
        public_6f2533a : nop
        ret 
        UNREACHABLE_TRAP(0x6f25320)
    }
}

#undef public_6f2533a
