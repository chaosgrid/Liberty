#include "Common-PCH.h"

PROC_DECLARE(0x62a00f0, internal_62a00f0, public_62a00f0);
extern "C" NAKED register_t __cdecl internal_62a00f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9c0]
        mov dword ptr ds : [public_63fc268], eax
        ret 
        UNREACHABLE_TRAP(0x62a00f0)
    }
}
