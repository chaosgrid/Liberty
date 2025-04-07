#include "FLServer-PCH.h"

PROC_DECLARE(0x4187da, internal_4187da, public_4187da);
extern "C" NAKED register_t __cdecl internal_4187da()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba10]
        UNREACHABLE_TRAP(0x4187da)
    }
}
