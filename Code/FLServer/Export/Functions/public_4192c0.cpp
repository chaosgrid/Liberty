#include "FLServer-PCH.h"

PROC_DECLARE(0x4192c0, internal_4192c0, public_4192c0);
extern "C" NAKED register_t __cdecl internal_4192c0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b94c]
        UNREACHABLE_TRAP(0x4192c0)
    }
}
