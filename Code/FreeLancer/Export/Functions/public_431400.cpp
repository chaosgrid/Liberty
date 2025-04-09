#include "FreeLancer-PCH.h"

PROC_DECLARE(0x431400, internal_431400, public_431400);
extern "C" NAKED register_t __cdecl internal_431400()
{
    __asm
    {
        add ecx, 4
        jmp dword ptr ds : [public_5c6044]
        UNREACHABLE_TRAP(0x431400)
    }
}
