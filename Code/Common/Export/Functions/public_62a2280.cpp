#include "Common-PCH.h"

PROC_DECLARE(0x62a2280, internal_62a2280, public_62a2280);
extern "C" NAKED register_t __cdecl internal_62a2280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639db88]
        mov dword ptr ds : [public_63fc288], eax
        ret 
        UNREACHABLE_TRAP(0x62a2280)
    }
}
