#include "Common-PCH.h"

PROC_DECLARE(0x62b5840, internal_62b5840, public_62b5840);
extern "C" NAKED register_t __cdecl internal_62b5840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e6dc]
        mov dword ptr ds : [public_63fc464], eax
        ret 
        UNREACHABLE_TRAP(0x62b5840)
    }
}
