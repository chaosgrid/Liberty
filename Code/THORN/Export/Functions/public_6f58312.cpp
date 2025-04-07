#include "THORN-PCH.h"

PROC_DECLARE(0x6f58312, internal_6f58312, public_6f58312);
extern "C" NAKED register_t __cdecl internal_6f58312()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a148]
        UNREACHABLE_TRAP(0x6f58312)
    }
}
