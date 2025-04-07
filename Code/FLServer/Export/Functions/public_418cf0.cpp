#include "FLServer-PCH.h"

PROC_DECLARE(0x418cf0, internal_418cf0, public_418cf0);
extern "C" NAKED register_t __cdecl internal_418cf0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b548]
        UNREACHABLE_TRAP(0x418cf0)
    }
}
