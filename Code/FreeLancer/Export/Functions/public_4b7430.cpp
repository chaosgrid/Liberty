#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b7430);
CLANG_FORWARD_PROC_SYMBOL(public_579380);

PROC_DECLARE(0x4b7430, internal_4b7430, public_4b7430);
extern "C" NAKED register_t __cdecl internal_4b7430()
{
    __asm
    {
        mov ecx, offset public_6722d0
        jmp public_579380
        UNREACHABLE_TRAP(0x4b7430)
    }
}
