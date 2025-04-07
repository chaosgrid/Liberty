#include "FLServer-PCH.h"

PROC_DECLARE(0x4185e2, internal_4185e2, public_4185e2);
extern "C" NAKED register_t __cdecl internal_4185e2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b058]
        UNREACHABLE_TRAP(0x4185e2)
    }
}
