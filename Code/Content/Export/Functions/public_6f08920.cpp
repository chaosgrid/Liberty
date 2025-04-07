#include "Content-PCH.h"

PROC_DECLARE(0x6f08920, internal_6f08920, public_6f08920);
extern "C" NAKED register_t __cdecl internal_6f08920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fb80f4]
        mov dword ptr ds : [public_6fd063c], eax
        ret 
        UNREACHABLE_TRAP(0x6f08920)
    }
}
