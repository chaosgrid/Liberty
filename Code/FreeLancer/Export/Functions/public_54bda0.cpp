#include "FreeLancer-PCH.h"

PROC_DECLARE(0x54bda0, internal_54bda0, public_54bda0);
extern "C" NAKED register_t __cdecl internal_54bda0()
{
    __asm
    {
        mov ecx, offset public_679794
        jmp dword ptr ds : [public_5c69a0]
        UNREACHABLE_TRAP(0x54bda0)
    }
}
