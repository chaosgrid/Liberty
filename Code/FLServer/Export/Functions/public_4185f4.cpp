#include "FLServer-PCH.h"

PROC_DECLARE(0x4185f4, internal_4185f4, public_4185f4);
extern "C" NAKED register_t __cdecl internal_4185f4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b064]
        UNREACHABLE_TRAP(0x4185f4)
    }
}
