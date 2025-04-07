#include "Common-PCH.h"

PROC_DECLARE(0x627a890, internal_627a890, public_627a890);
extern "C" NAKED register_t __cdecl internal_627a890()
{
    __asm
    {
        fld dword ptr ds : [public_639b22c]
        ret 
        UNREACHABLE_TRAP(0x627a890)
    }
}
