#include "Common-PCH.h"

PROC_DECLARE(0x62d2210, internal_62d2210, public_62d2210);
extern "C" NAKED register_t __cdecl internal_62d2210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0334]
        mov dword ptr ds : [public_63fc958], eax
        ret 
        UNREACHABLE_TRAP(0x62d2210)
    }
}
