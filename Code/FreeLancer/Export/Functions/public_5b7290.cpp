#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7290, internal_5b7290, public_5b7290);
extern "C" NAKED register_t __cdecl internal_5b7290()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67b8]
        UNREACHABLE_TRAP(0x5b7290)
    }
}
