#include "Common-PCH.h"

PROC_DECLARE(0x62c29a0, internal_62c29a0, public_62c29a0);
extern "C" NAKED register_t __cdecl internal_62c29a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f474]
        mov dword ptr ds : [public_63fc51c], eax
        ret 
        UNREACHABLE_TRAP(0x62c29a0)
    }
}
