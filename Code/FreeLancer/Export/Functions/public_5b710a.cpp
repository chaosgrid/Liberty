#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b710a, internal_5b710a, public_5b710a);
extern "C" NAKED register_t __cdecl internal_5b710a()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66b4]
        UNREACHABLE_TRAP(0x5b710a)
    }
}
