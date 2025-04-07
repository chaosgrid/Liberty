#include "Common-PCH.h"

PROC_DECLARE(0x6302da0, internal_6302da0, public_6302da0);
extern "C" NAKED register_t __cdecl internal_6302da0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a267c]
        mov dword ptr ds : [public_63fce00], eax
        ret 
        UNREACHABLE_TRAP(0x6302da0)
    }
}
