#include "Common-PCH.h"

PROC_DECLARE(0x627f990, internal_627f990, public_627f990);
extern "C" NAKED register_t __cdecl internal_627f990()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b6ec]
        mov dword ptr ds : [public_63fc060], eax
        ret 
        UNREACHABLE_TRAP(0x627f990)
    }
}
