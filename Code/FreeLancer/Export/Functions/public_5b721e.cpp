#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b721e, internal_5b721e, public_5b721e);
extern "C" NAKED register_t __cdecl internal_5b721e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c676c]
        UNREACHABLE_TRAP(0x5b721e)
    }
}
