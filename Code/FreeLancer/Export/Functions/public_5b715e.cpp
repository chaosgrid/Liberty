#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b715e, internal_5b715e, public_5b715e);
extern "C" NAKED register_t __cdecl internal_5b715e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66ec]
        UNREACHABLE_TRAP(0x5b715e)
    }
}
