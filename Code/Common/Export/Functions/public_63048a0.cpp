#include "Common-PCH.h"

PROC_DECLARE(0x63048a0, internal_63048a0, public_63048a0);
extern "C" NAKED register_t __cdecl internal_63048a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2720]
        mov dword ptr ds : [public_63fceac], eax
        ret 
        UNREACHABLE_TRAP(0x63048a0)
    }
}
