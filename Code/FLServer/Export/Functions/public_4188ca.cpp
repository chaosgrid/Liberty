#include "FLServer-PCH.h"

PROC_DECLARE(0x4188ca, internal_4188ca, public_4188ca);
extern "C" NAKED register_t __cdecl internal_4188ca()
{
    __asm
    {
        jmp dword ptr ds : [public_41bacc]
        UNREACHABLE_TRAP(0x4188ca)
    }
}
