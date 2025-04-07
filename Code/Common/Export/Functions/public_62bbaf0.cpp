#include "Common-PCH.h"

PROC_DECLARE(0x62bbaf0, internal_62bbaf0, public_62bbaf0);
extern "C" NAKED register_t __cdecl internal_62bbaf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ed1c]
        mov dword ptr ds : [public_63fc4ac], eax
        ret 
        UNREACHABLE_TRAP(0x62bbaf0)
    }
}
