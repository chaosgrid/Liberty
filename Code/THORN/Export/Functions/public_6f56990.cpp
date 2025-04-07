#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

PROC_DECLARE(0x6f56990, internal_6f56990, public_6f56990);
extern "C" NAKED register_t __cdecl internal_6f56990()
{
    __asm
    {
        push 1
        call public_6f4f660
        call public_6f57f16
        push eax
        call dword ptr ds : [public_6f5a154]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f56990)
    }
}
