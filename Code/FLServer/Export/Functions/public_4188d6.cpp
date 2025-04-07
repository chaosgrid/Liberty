#include "FLServer-PCH.h"

PROC_DECLARE(0x4188d6, internal_4188d6, public_4188d6);
extern "C" NAKED register_t __cdecl internal_4188d6()
{
    __asm
    {
        jmp dword ptr ds : [public_41bad4]
        UNREACHABLE_TRAP(0x4188d6)
    }
}
