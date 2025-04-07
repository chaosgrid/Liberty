#include "Common-PCH.h"

PROC_DECLARE(0x62d2000, internal_62d2000, public_62d2000);
extern "C" NAKED register_t __cdecl internal_62d2000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a02b0]
        mov dword ptr ds : [public_63fc94c], eax
        ret 
        UNREACHABLE_TRAP(0x62d2000)
    }
}
