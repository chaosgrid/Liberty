#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b711c, internal_5b711c, public_5b711c);
extern "C" NAKED register_t __cdecl internal_5b711c()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66c0]
        UNREACHABLE_TRAP(0x5b711c)
    }
}
