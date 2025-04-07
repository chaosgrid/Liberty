#include "Common-PCH.h"

PROC_DECLARE(0x62feb80, internal_62feb80, public_62feb80);
extern "C" NAKED register_t __cdecl internal_62feb80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a22f4]
        mov dword ptr ds : [public_63fcc4c], eax
        ret 
        UNREACHABLE_TRAP(0x62feb80)
    }
}
