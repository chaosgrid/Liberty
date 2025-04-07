#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b70fe, internal_5b70fe, public_5b70fe);
extern "C" NAKED register_t __cdecl internal_5b70fe()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66ac]
        UNREACHABLE_TRAP(0x5b70fe)
    }
}
