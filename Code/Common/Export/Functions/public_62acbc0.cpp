#include "Common-PCH.h"

PROC_DECLARE(0x62acbc0, internal_62acbc0, public_62acbc0);
extern "C" NAKED register_t __cdecl internal_62acbc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e50c]
        mov dword ptr ds : [public_63fc308], eax
        ret 
        UNREACHABLE_TRAP(0x62acbc0)
    }
}
