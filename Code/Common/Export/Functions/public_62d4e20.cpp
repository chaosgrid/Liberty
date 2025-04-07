#include "Common-PCH.h"

PROC_DECLARE(0x62d4e20, internal_62d4e20, public_62d4e20);
extern "C" NAKED register_t __cdecl internal_62d4e20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a03f8]
        mov dword ptr ds : [public_63fc970], eax
        ret 
        UNREACHABLE_TRAP(0x62d4e20)
    }
}
