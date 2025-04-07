#include "FLServer-PCH.h"

PROC_DECLARE(0x4196a6, internal_4196a6, public_4196a6);
extern "C" NAKED register_t __cdecl internal_4196a6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1b4]
        UNREACHABLE_TRAP(0x4196a6)
    }
}
