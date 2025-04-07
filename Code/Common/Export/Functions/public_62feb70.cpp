#include "Common-PCH.h"

PROC_DECLARE(0x62feb70, internal_62feb70, public_62feb70);
extern "C" NAKED register_t __cdecl internal_62feb70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a22f4]
        mov dword ptr ds : [public_63fcc50], eax
        ret 
        UNREACHABLE_TRAP(0x62feb70)
    }
}
