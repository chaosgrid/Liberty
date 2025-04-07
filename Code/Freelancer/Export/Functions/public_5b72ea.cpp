#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72ea, internal_5b72ea, public_5b72ea);
extern "C" NAKED register_t __cdecl internal_5b72ea()
{
    __asm
    {
        jmp dword ptr ds : [public_5c685c]
        UNREACHABLE_TRAP(0x5b72ea)
    }
}
