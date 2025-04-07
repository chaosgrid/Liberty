#include "Common-PCH.h"

PROC_DECLARE(0x6295250, internal_6295250, public_6295250);
extern "C" NAKED register_t __cdecl internal_6295250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639cca4]
        mov dword ptr ds : [public_63fc12c], eax
        ret 
        UNREACHABLE_TRAP(0x6295250)
    }
}
