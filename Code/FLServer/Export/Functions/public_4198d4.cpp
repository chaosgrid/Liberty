#include "FLServer-PCH.h"

PROC_DECLARE(0x4198d4, internal_4198d4, public_4198d4);
extern "C" NAKED register_t __cdecl internal_4198d4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b840]
        UNREACHABLE_TRAP(0x4198d4)
    }
}
