#include "Common-PCH.h"

PROC_DECLARE(0x62fd610, internal_62fd610, public_62fd610);
extern "C" NAKED register_t __cdecl internal_62fd610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2274]
        mov dword ptr ds : [public_63fcb38], eax
        ret 
        UNREACHABLE_TRAP(0x62fd610)
    }
}
