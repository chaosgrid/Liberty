#include "Common-PCH.h"

PROC_DECLARE(0x6296990, internal_6296990, public_6296990);
extern "C" NAKED register_t __cdecl internal_6296990()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ced0]
        mov dword ptr ds : [public_63fc180], eax
        ret 
        UNREACHABLE_TRAP(0x6296990)
    }
}
