#include "Common-PCH.h"

PROC_DECLARE(0x629cd10, internal_629cd10, public_629cd10);
extern "C" NAKED register_t __cdecl internal_629cd10()
{
    __asm
    {
        inc dword ptr ds : [ecx+0xC]
        ret 4
        UNREACHABLE_TRAP(0x629cd10)
    }
}
