#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631c040);
CLANG_FORWARD_PROC_SYMBOL(public_631cbc0);

PROC_DECLARE(0x631cbc0, internal_631cbc0, public_631cbc0);
extern "C" NAKED register_t __cdecl internal_631cbc0()
{
    __asm
    {
        mov ecx, offset public_6401768
        jmp public_631c040
        UNREACHABLE_TRAP(0x631cbc0)
    }
}
