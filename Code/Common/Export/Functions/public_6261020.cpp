#include "Common-PCH.h"

PROC_DECLARE(0x6261020, internal_6261020, public_6261020);
extern "C" NAKED register_t __cdecl internal_6261020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63993e0]
        mov dword ptr ds : [public_63fbb60], eax
        ret 
        UNREACHABLE_TRAP(0x6261020)
    }
}
