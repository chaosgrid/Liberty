#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7140, internal_5b7140, public_5b7140);
extern "C" NAKED register_t __cdecl internal_5b7140()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66d8]
        UNREACHABLE_TRAP(0x5b7140)
    }
}
