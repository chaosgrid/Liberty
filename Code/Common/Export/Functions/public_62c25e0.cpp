#include "Common-PCH.h"

PROC_DECLARE(0x62c25e0, internal_62c25e0, public_62c25e0);
extern "C" NAKED register_t __cdecl internal_62c25e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f468]
        mov dword ptr ds : [public_63fc510], eax
        ret 
        UNREACHABLE_TRAP(0x62c25e0)
    }
}
