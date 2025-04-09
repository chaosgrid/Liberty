#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7224, internal_5b7224, public_5b7224);
extern "C" NAKED register_t __cdecl internal_5b7224()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6770]
        UNREACHABLE_TRAP(0x5b7224)
    }
}
