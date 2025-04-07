#include "Common-PCH.h"

PROC_DECLARE(0x62ad420, internal_62ad420, public_62ad420);
extern "C" NAKED register_t __cdecl internal_62ad420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e51c]
        mov dword ptr ds : [public_63fc418], eax
        ret 
        UNREACHABLE_TRAP(0x62ad420)
    }
}
