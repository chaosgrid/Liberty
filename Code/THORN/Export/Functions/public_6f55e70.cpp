#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f556c0);

PROC_DECLARE(0x6f55e70, internal_6f55e70, public_6f55e70);
extern "C" NAKED register_t __cdecl internal_6f55e70()
{
    __asm
    {
        push 0
        push 1
        call public_6f4f5e0
        push eax
        call dword ptr ds : [public_6f5a110]
        neg eax
        sbb eax, eax
        inc eax
        push eax
        call public_6f556c0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f55e70)
    }
}
