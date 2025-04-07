#include "FLServer-PCH.h"

PROC_DECLARE(0x4193d2, internal_4193d2, public_4193d2);
extern "C" NAKED register_t __cdecl internal_4193d2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b960]
        UNREACHABLE_TRAP(0x4193d2)
    }
}
