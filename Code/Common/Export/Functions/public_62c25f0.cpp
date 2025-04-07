#include "Common-PCH.h"

PROC_DECLARE(0x62c25f0, internal_62c25f0, public_62c25f0);
extern "C" NAKED register_t __cdecl internal_62c25f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f468]
        mov dword ptr ds : [public_63fc50c], eax
        ret 
        UNREACHABLE_TRAP(0x62c25f0)
    }
}
