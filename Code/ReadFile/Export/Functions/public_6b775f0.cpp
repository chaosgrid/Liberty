#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b775f0, internal_6b775f0, public_6b775f0);
extern "C" NAKED register_t __cdecl internal_6b775f0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x6b775f0)
    }
}
