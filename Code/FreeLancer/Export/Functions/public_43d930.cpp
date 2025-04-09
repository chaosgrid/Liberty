#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d930, internal_43d930, public_43d930);
extern "C" NAKED register_t __cdecl internal_43d930()
{
    __asm
    {
        fld dword ptr ds : [public_5c75dc]
        ret 
        UNREACHABLE_TRAP(0x43d930)
    }
}
