#include "FLServer-PCH.h"

PROC_DECLARE(0x4190c8, internal_4190c8, public_4190c8);
extern "C" NAKED register_t __cdecl internal_4190c8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7ec]
        UNREACHABLE_TRAP(0x4190c8)
    }
}
