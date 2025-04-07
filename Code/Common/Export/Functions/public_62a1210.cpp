#include "Common-PCH.h"

PROC_DECLARE(0x62a1210, internal_62a1210, public_62a1210);
extern "C" NAKED register_t __cdecl internal_62a1210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9d4]
        mov dword ptr ds : [public_63fc274], eax
        ret 
        UNREACHABLE_TRAP(0x62a1210)
    }
}
