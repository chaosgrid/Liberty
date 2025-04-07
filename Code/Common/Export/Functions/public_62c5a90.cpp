#include "Common-PCH.h"

PROC_DECLARE(0x62c5a90, internal_62c5a90, public_62c5a90);
extern "C" NAKED register_t __cdecl internal_62c5a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f540]
        mov dword ptr ds : [public_63fc534], eax
        ret 
        UNREACHABLE_TRAP(0x62c5a90)
    }
}
