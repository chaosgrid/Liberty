#include "FLServer-PCH.h"

PROC_DECLARE(0x418882, internal_418882, public_418882);
extern "C" NAKED register_t __cdecl internal_418882()
{
    __asm
    {
        jmp dword ptr ds : [public_41baa0]
        UNREACHABLE_TRAP(0x418882)
    }
}
