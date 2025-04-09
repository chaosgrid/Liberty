#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b71ac, internal_5b71ac, public_5b71ac);
extern "C" NAKED register_t __cdecl internal_5b71ac()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6720]
        UNREACHABLE_TRAP(0x5b71ac)
    }
}
