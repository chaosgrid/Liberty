#include "FLServer-PCH.h"

PROC_DECLARE(0x418ca8, internal_418ca8, public_418ca8);
extern "C" NAKED register_t __cdecl internal_418ca8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b518]
        UNREACHABLE_TRAP(0x418ca8)
    }
}
