#include "FLServer-PCH.h"

PROC_DECLARE(0x41900e, internal_41900e, public_41900e);
extern "C" NAKED register_t __cdecl internal_41900e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b764]
        UNREACHABLE_TRAP(0x41900e)
    }
}
