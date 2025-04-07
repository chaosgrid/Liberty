#include "Common-PCH.h"

PROC_DECLARE(0x62d4e30, internal_62d4e30, public_62d4e30);
extern "C" NAKED register_t __cdecl internal_62d4e30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a03f8]
        mov dword ptr ds : [public_63fc96c], eax
        ret 
        UNREACHABLE_TRAP(0x62d4e30)
    }
}
