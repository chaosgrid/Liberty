#include "FreeLancer-PCH.h"

PROC_DECLARE(0x555a20, internal_555a20, public_555a20);
extern "C" NAKED register_t __cdecl internal_555a20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1204]
        mov dword ptr ds : [public_679990], eax
        ret 
        UNREACHABLE_TRAP(0x555a20)
    }
}
