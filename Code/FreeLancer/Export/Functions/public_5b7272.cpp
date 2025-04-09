#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7272, internal_5b7272, public_5b7272);
extern "C" NAKED register_t __cdecl internal_5b7272()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67a4]
        UNREACHABLE_TRAP(0x5b7272)
    }
}
