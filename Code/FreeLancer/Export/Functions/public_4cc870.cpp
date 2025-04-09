#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cc870);
CLANG_FORWARD_PROC_SYMBOL(public_4cf010);

PROC_DECLARE(0x4cc870, internal_4cc870, public_4cc870);
extern "C" NAKED register_t __cdecl internal_4cc870()
{
    __asm
    {
        mov ecx, offset public_673578
        jmp public_4cf010
        UNREACHABLE_TRAP(0x4cc870)
    }
}
