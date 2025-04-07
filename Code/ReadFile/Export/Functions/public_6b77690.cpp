#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b77690, internal_6b77690, public_6b77690);
extern "C" NAKED register_t __cdecl internal_6b77690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x6b77690)
    }
}
