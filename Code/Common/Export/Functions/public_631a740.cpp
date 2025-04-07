#include "Common-PCH.h"

PROC_DECLARE(0x631a740, internal_631a740, public_631a740);
extern "C" NAKED register_t __cdecl internal_631a740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3930]
        mov dword ptr ds : [public_6401348], eax
        ret 
        UNREACHABLE_TRAP(0x631a740)
    }
}
