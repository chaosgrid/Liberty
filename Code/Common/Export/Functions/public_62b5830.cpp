#include "Common-PCH.h"

PROC_DECLARE(0x62b5830, internal_62b5830, public_62b5830);
extern "C" NAKED register_t __cdecl internal_62b5830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e6d8]
        mov dword ptr ds : [public_63fc468], eax
        ret 
        UNREACHABLE_TRAP(0x62b5830)
    }
}
