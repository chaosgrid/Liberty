#include "FLServer-PCH.h"

PROC_DECLARE(0x41978a, internal_41978a, public_41978a);
extern "C" NAKED register_t __cdecl internal_41978a()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc14]
        UNREACHABLE_TRAP(0x41978a)
    }
}
