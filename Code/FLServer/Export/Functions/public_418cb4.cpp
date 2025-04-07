#include "FLServer-PCH.h"

PROC_DECLARE(0x418cb4, internal_418cb4, public_418cb4);
extern "C" NAKED register_t __cdecl internal_418cb4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b520]
        UNREACHABLE_TRAP(0x418cb4)
    }
}
