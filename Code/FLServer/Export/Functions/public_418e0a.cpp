#include "FLServer-PCH.h"

PROC_DECLARE(0x418e0a, internal_418e0a, public_418e0a);
extern "C" NAKED register_t __cdecl internal_418e0a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b604]
        UNREACHABLE_TRAP(0x418e0a)
    }
}
