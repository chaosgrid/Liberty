#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);

PROC_DECLARE(0x6f55ec0, internal_6f55ec0, public_6f55ec0);
extern "C" NAKED register_t __cdecl internal_6f55ec0()
{
    __asm
    {
        push 0
        call dword ptr ds : [public_6f5a118]
        push eax
        call public_6f4b790
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f55ec0)
    }
}
