#include "Common-PCH.h"

PROC_DECLARE(0x63048b0, internal_63048b0, public_63048b0);
extern "C" NAKED register_t __cdecl internal_63048b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2720]
        mov dword ptr ds : [public_63fcea8], eax
        ret 
        UNREACHABLE_TRAP(0x63048b0)
    }
}
