#include "THORN-PCH.h"

PROC_DECLARE(0x6f5821c, internal_6f5821c, public_6f5821c);
extern "C" NAKED register_t __cdecl internal_6f5821c()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a098]
        UNREACHABLE_TRAP(0x6f5821c)
    }
}
