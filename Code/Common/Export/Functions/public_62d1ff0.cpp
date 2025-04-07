#include "Common-PCH.h"

PROC_DECLARE(0x62d1ff0, internal_62d1ff0, public_62d1ff0);
extern "C" NAKED register_t __cdecl internal_62d1ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a02b0]
        mov dword ptr ds : [public_63fc950], eax
        ret 
        UNREACHABLE_TRAP(0x62d1ff0)
    }
}
