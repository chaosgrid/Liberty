#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f24a50);

PROC_DECLARE(0x6f24a20, internal_6f24a20, public_6f24a20);
extern "C" NAKED register_t __cdecl internal_6f24a20()
{
    __asm
    {
        call public_6f24a30
        jmp public_6f24a50
        UNREACHABLE_TRAP(0x6f24a20)
    }
}
