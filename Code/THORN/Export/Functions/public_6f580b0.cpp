#include "THORN-PCH.h"

PROC_DECLARE(0x6f580b0, internal_6f580b0, public_6f580b0);
extern "C" NAKED register_t __cdecl internal_6f580b0()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a080]
        UNREACHABLE_TRAP(0x6f580b0)
    }
}
