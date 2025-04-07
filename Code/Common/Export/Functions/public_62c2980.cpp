#include "Common-PCH.h"

PROC_DECLARE(0x62c2980, internal_62c2980, public_62c2980);
extern "C" NAKED register_t __cdecl internal_62c2980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f470]
        mov dword ptr ds : [public_63fc524], eax
        ret 
        UNREACHABLE_TRAP(0x62c2980)
    }
}
