#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7104, internal_5b7104, public_5b7104);
extern "C" NAKED register_t __cdecl internal_5b7104()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66b0]
        UNREACHABLE_TRAP(0x5b7104)
    }
}
