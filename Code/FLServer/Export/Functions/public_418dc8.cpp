#include "FLServer-PCH.h"

PROC_DECLARE(0x418dc8, internal_418dc8, public_418dc8);
extern "C" NAKED register_t __cdecl internal_418dc8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5d8]
        UNREACHABLE_TRAP(0x418dc8)
    }
}
