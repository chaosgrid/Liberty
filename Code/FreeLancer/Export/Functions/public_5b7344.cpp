#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7344, internal_5b7344, public_5b7344);
extern "C" NAKED register_t __cdecl internal_5b7344()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6aa0]
        UNREACHABLE_TRAP(0x5b7344)
    }
}
