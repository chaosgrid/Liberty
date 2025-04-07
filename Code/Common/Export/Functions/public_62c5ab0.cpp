#include "Common-PCH.h"

PROC_DECLARE(0x62c5ab0, internal_62c5ab0, public_62c5ab0);
extern "C" NAKED register_t __cdecl internal_62c5ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f544]
        mov dword ptr ds : [public_63fc52c], eax
        ret 
        UNREACHABLE_TRAP(0x62c5ab0)
    }
}
