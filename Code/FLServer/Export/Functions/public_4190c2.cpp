#include "FLServer-PCH.h"

PROC_DECLARE(0x4190c2, internal_4190c2, public_4190c2);
extern "C" NAKED register_t __cdecl internal_4190c2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7e8]
        UNREACHABLE_TRAP(0x4190c2)
    }
}
