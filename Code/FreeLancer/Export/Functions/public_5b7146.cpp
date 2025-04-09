#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7146, internal_5b7146, public_5b7146);
extern "C" NAKED register_t __cdecl internal_5b7146()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66dc]
        UNREACHABLE_TRAP(0x5b7146)
    }
}
