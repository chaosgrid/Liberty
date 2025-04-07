#include "FLServer-PCH.h"

PROC_DECLARE(0x418cd2, internal_418cd2, public_418cd2);
extern "C" NAKED register_t __cdecl internal_418cd2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b534]
        UNREACHABLE_TRAP(0x418cd2)
    }
}
