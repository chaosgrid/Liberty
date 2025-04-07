#include "Common-PCH.h"

PROC_DECLARE(0x62c2600, internal_62c2600, public_62c2600);
extern "C" NAKED register_t __cdecl internal_62c2600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639f46c]
        mov dword ptr ds : [public_63fc508], eax
        ret 
        UNREACHABLE_TRAP(0x62c2600)
    }
}
