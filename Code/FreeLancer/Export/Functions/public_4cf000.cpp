#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cf000);
CLANG_FORWARD_PROC_SYMBOL(public_4cf010);

PROC_DECLARE(0x4cf000, internal_4cf000, public_4cf000);
extern "C" NAKED register_t __cdecl internal_4cf000()
{
    __asm
    {
        mov ecx, offset public_674910
        jmp public_4cf010
        UNREACHABLE_TRAP(0x4cf000)
    }
}
