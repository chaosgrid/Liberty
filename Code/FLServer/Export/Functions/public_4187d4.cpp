#include "FLServer-PCH.h"

PROC_DECLARE(0x4187d4, internal_4187d4, public_4187d4);
extern "C" NAKED register_t __cdecl internal_4187d4()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba14]
        UNREACHABLE_TRAP(0x4187d4)
    }
}
