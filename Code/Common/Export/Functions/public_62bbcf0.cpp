#include "Common-PCH.h"

PROC_DECLARE(0x62bbcf0, internal_62bbcf0, public_62bbcf0);
extern "C" NAKED register_t __cdecl internal_62bbcf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ed28]
        mov dword ptr ds : [public_63fc4b8], eax
        ret 
        UNREACHABLE_TRAP(0x62bbcf0)
    }
}
