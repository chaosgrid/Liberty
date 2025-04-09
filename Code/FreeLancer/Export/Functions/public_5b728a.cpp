#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b728a, internal_5b728a, public_5b728a);
extern "C" NAKED register_t __cdecl internal_5b728a()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67b4]
        UNREACHABLE_TRAP(0x5b728a)
    }
}
