#include "FLServer-PCH.h"

PROC_DECLARE(0x4191f4, internal_4191f4, public_4191f4);
extern "C" NAKED register_t __cdecl internal_4191f4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b258]
        UNREACHABLE_TRAP(0x4191f4)
    }
}
