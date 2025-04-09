#include "FreeLancer-PCH.h"

PROC_DECLARE(0x44fcd0, internal_44fcd0, public_44fcd0);
extern "C" NAKED register_t __cdecl internal_44fcd0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 0x10
        UNREACHABLE_TRAP(0x44fcd0)
    }
}
