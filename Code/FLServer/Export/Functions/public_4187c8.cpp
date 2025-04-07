#include "FLServer-PCH.h"

PROC_DECLARE(0x4187c8, internal_4187c8, public_4187c8);
extern "C" NAKED register_t __cdecl internal_4187c8()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba1c]
        UNREACHABLE_TRAP(0x4187c8)
    }
}
