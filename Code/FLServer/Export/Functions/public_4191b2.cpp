#include "FLServer-PCH.h"

PROC_DECLARE(0x4191b2, internal_4191b2, public_4191b2);
extern "C" NAKED register_t __cdecl internal_4191b2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b284]
        UNREACHABLE_TRAP(0x4191b2)
    }
}
