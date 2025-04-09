#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53a900, internal_53a900, public_53a900);
extern "C" NAKED register_t __cdecl internal_53a900()
{
    __asm
    {
        mov eax, 0xFFFFFFF8
        ret 4
        UNREACHABLE_TRAP(0x53a900)
    }
}
