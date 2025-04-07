#include "FLServer-PCH.h"

PROC_DECLARE(0x41864e, internal_41864e, public_41864e);
extern "C" NAKED register_t __cdecl internal_41864e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b0a0]
        UNREACHABLE_TRAP(0x41864e)
    }
}
