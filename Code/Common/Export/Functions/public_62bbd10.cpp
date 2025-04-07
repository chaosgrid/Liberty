#include "Common-PCH.h"

PROC_DECLARE(0x62bbd10, internal_62bbd10, public_62bbd10);
extern "C" NAKED register_t __cdecl internal_62bbd10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ed2c]
        mov dword ptr ds : [public_63fc4b0], eax
        ret 
        UNREACHABLE_TRAP(0x62bbd10)
    }
}
