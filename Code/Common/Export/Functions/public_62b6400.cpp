#include "Common-PCH.h"

PROC_DECLARE(0x62b6400, internal_62b6400, public_62b6400);
extern "C" NAKED register_t __cdecl internal_62b6400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e7bc]
        mov dword ptr ds : [public_63fc47c], eax
        ret 
        UNREACHABLE_TRAP(0x62b6400)
    }
}
