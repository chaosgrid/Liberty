#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7e34, internal_5b7e34, public_5b7e34);
extern "C" NAKED register_t __cdecl internal_5b7e34()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6fd0]
        UNREACHABLE_TRAP(0x5b7e34)
    }
}
