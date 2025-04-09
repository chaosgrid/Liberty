#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cf010);
CLANG_FORWARD_PROC_SYMBOL(public_4f27c0);

PROC_DECLARE(0x4f27c0, internal_4f27c0, public_4f27c0);
extern "C" NAKED register_t __cdecl internal_4f27c0()
{
    __asm
    {
        mov ecx, offset public_674b20
        jmp public_4cf010
        UNREACHABLE_TRAP(0x4f27c0)
    }
}
