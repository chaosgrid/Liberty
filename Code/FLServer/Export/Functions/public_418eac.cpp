#include "FLServer-PCH.h"

PROC_DECLARE(0x418eac, internal_418eac, public_418eac);
extern "C" NAKED register_t __cdecl internal_418eac()
{
    __asm
    {
        jmp dword ptr ds : [public_41b670]
        UNREACHABLE_TRAP(0x418eac)
    }
}
