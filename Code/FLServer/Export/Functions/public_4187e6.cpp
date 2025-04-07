#include "FLServer-PCH.h"

PROC_DECLARE(0x4187e6, internal_4187e6, public_4187e6);
extern "C" NAKED register_t __cdecl internal_4187e6()
{
    __asm
    {
        jmp dword ptr ds : [public_41bba4]
        UNREACHABLE_TRAP(0x4187e6)
    }
}
