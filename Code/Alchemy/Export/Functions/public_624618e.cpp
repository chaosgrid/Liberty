#include "Alchemy-PCH.h"

PROC_DECLARE(0x624618e, internal_624618e, public_624618e);
extern "C" NAKED register_t __cdecl internal_624618e()
{
    __asm
    {
        jmp dword ptr ds : [public_624b060]
        UNREACHABLE_TRAP(0x624618e)
    }
}
