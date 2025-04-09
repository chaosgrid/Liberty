#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b832a, internal_5b832a, public_5b832a);
extern "C" NAKED register_t __cdecl internal_5b832a()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e98]
        UNREACHABLE_TRAP(0x5b832a)
    }
}
