#include "FLServer-PCH.h"

PROC_DECLARE(0x418dc2, internal_418dc2, public_418dc2);
extern "C" NAKED register_t __cdecl internal_418dc2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5d4]
        UNREACHABLE_TRAP(0x418dc2)
    }
}
