#include "Common-PCH.h"

PROC_DECLARE(0x627f980, internal_627f980, public_627f980);
extern "C" NAKED register_t __cdecl internal_627f980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b6ec]
        mov dword ptr ds : [public_63fc064], eax
        ret 
        UNREACHABLE_TRAP(0x627f980)
    }
}
