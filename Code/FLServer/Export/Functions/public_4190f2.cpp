#include "FLServer-PCH.h"

PROC_DECLARE(0x4190f2, internal_4190f2, public_4190f2);
extern "C" NAKED register_t __cdecl internal_4190f2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b808]
        UNREACHABLE_TRAP(0x4190f2)
    }
}
