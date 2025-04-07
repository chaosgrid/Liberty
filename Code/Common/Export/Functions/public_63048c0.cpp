#include "Common-PCH.h"

PROC_DECLARE(0x63048c0, internal_63048c0, public_63048c0);
extern "C" NAKED register_t __cdecl internal_63048c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2724]
        mov dword ptr ds : [public_63fcea4], eax
        ret 
        UNREACHABLE_TRAP(0x63048c0)
    }
}
