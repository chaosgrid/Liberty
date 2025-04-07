#include "FLServer-PCH.h"

PROC_DECLARE(0x4193d8, internal_4193d8, public_4193d8);
extern "C" NAKED register_t __cdecl internal_4193d8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b964]
        UNREACHABLE_TRAP(0x4193d8)
    }
}
