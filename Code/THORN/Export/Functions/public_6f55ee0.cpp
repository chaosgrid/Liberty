#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);

PROC_DECLARE(0x6f55ee0, internal_6f55ee0, public_6f55ee0);
extern "C" NAKED register_t __cdecl internal_6f55ee0()
{
    __asm
    {
        push 0
        push 1
        call public_6f4f5e0
        push eax
        call dword ptr ds : [public_6f5a11c]
        push eax
        call public_6f4b790
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f55ee0)
    }
}
