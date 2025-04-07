#include "FLServer-PCH.h"

PROC_DECLARE(0x4190b6, internal_4190b6, public_4190b6);
extern "C" NAKED register_t __cdecl internal_4190b6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7e0]
        UNREACHABLE_TRAP(0x4190b6)
    }
}
