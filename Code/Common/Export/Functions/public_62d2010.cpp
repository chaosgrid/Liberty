#include "Common-PCH.h"

PROC_DECLARE(0x62d2010, internal_62d2010, public_62d2010);
extern "C" NAKED register_t __cdecl internal_62d2010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a02b4]
        mov dword ptr ds : [public_63fc948], eax
        ret 
        UNREACHABLE_TRAP(0x62d2010)
    }
}
