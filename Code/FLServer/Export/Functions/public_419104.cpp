#include "FLServer-PCH.h"

PROC_DECLARE(0x419104, internal_419104, public_419104);
extern "C" NAKED register_t __cdecl internal_419104()
{
    __asm
    {
        jmp dword ptr ds : [public_41b814]
        UNREACHABLE_TRAP(0x419104)
    }
}
