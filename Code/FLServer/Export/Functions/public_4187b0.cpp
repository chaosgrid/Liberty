#include "FLServer-PCH.h"

PROC_DECLARE(0x4187b0, internal_4187b0, public_4187b0);
extern "C" NAKED register_t __cdecl internal_4187b0()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba2c]
        UNREACHABLE_TRAP(0x4187b0)
    }
}
