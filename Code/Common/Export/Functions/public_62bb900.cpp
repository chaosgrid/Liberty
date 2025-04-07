#include "Common-PCH.h"

PROC_DECLARE(0x62bb900, internal_62bb900, public_62bb900);
extern "C" NAKED register_t __cdecl internal_62bb900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639eccc]
        mov dword ptr ds : [public_63fc498], eax
        ret 
        UNREACHABLE_TRAP(0x62bb900)
    }
}
