#include "Common-PCH.h"

PROC_DECLARE(0x62a0110, internal_62a0110, public_62a0110);
extern "C" NAKED register_t __cdecl internal_62a0110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9c4]
        mov dword ptr ds : [public_63fc260], eax
        ret 
        UNREACHABLE_TRAP(0x62a0110)
    }
}
