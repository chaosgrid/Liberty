#include "RP8-PCH.h"

PROC_DECLARE(0x6d2f2ca, internal_6d2f2ca, public_6d2f2ca);
extern "C" NAKED register_t __cdecl internal_6d2f2ca()
{
    __asm
    {
        jmp dword ptr ds : [public_6d5e13c]
        UNREACHABLE_TRAP(0x6d2f2ca)
    }
}
