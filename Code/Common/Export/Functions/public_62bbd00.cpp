#include "Common-PCH.h"

PROC_DECLARE(0x62bbd00, internal_62bbd00, public_62bbd00);
extern "C" NAKED register_t __cdecl internal_62bbd00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ed28]
        mov dword ptr ds : [public_63fc4b4], eax
        ret 
        UNREACHABLE_TRAP(0x62bbd00)
    }
}
