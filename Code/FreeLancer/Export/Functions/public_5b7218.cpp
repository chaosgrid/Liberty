#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7218, internal_5b7218, public_5b7218);
extern "C" NAKED register_t __cdecl internal_5b7218()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6768]
        UNREACHABLE_TRAP(0x5b7218)
    }
}
