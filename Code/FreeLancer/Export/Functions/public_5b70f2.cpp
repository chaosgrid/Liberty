#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b70f2, internal_5b70f2, public_5b70f2);
extern "C" NAKED register_t __cdecl internal_5b70f2()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66a4]
        UNREACHABLE_TRAP(0x5b70f2)
    }
}
