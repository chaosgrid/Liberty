#include "FreeLancer-PCH.h"

PROC_DECLARE(0x44fce0, internal_44fce0, public_44fce0);
extern "C" NAKED register_t __cdecl internal_44fce0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 0xC
        UNREACHABLE_TRAP(0x44fce0)
    }
}
