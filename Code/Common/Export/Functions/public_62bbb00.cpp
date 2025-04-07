#include "Common-PCH.h"

PROC_DECLARE(0x62bbb00, internal_62bbb00, public_62bbb00);
extern "C" NAKED register_t __cdecl internal_62bbb00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ed1c]
        mov dword ptr ds : [public_63fc4a8], eax
        ret 
        UNREACHABLE_TRAP(0x62bbb00)
    }
}
