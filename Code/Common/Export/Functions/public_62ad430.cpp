#include "Common-PCH.h"

PROC_DECLARE(0x62ad430, internal_62ad430, public_62ad430);
extern "C" NAKED register_t __cdecl internal_62ad430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e51c]
        mov dword ptr ds : [public_63fc414], eax
        ret 
        UNREACHABLE_TRAP(0x62ad430)
    }
}
