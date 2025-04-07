#include "Common-PCH.h"

PROC_DECLARE(0x62feb90, internal_62feb90, public_62feb90);
extern "C" NAKED register_t __cdecl internal_62feb90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a22f8]
        mov dword ptr ds : [public_63fcc48], eax
        ret 
        UNREACHABLE_TRAP(0x62feb90)
    }
}
