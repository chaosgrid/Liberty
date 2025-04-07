#include "Common-PCH.h"

PROC_DECLARE(0x62b6410, internal_62b6410, public_62b6410);
extern "C" NAKED register_t __cdecl internal_62b6410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e7bc]
        mov dword ptr ds : [public_63fc478], eax
        ret 
        UNREACHABLE_TRAP(0x62b6410)
    }
}
