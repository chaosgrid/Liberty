#include "FLServer-PCH.h"

PROC_DECLARE(0x4187e0, internal_4187e0, public_4187e0);
extern "C" NAKED register_t __cdecl internal_4187e0()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba0c]
        UNREACHABLE_TRAP(0x4187e0)
    }
}
