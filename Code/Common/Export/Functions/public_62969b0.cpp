#include "Common-PCH.h"

PROC_DECLARE(0x62969b0, internal_62969b0, public_62969b0);
extern "C" NAKED register_t __cdecl internal_62969b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ced4]
        mov dword ptr ds : [public_63fc178], eax
        ret 
        UNREACHABLE_TRAP(0x62969b0)
    }
}
