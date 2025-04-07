#include "FLServer-PCH.h"

PROC_DECLARE(0x4187bc, internal_4187bc, public_4187bc);
extern "C" NAKED register_t __cdecl internal_4187bc()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb50]
        UNREACHABLE_TRAP(0x4187bc)
    }
}
