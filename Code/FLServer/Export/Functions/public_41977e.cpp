#include "FLServer-PCH.h"

PROC_DECLARE(0x41977e, internal_41977e, public_41977e);
extern "C" NAKED register_t __cdecl internal_41977e()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbe8]
        UNREACHABLE_TRAP(0x41977e)
    }
}
