#include "Common-PCH.h"

PROC_DECLARE(0x6294890, internal_6294890, public_6294890);
extern "C" NAKED register_t __cdecl internal_6294890()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639c9f8]
        mov dword ptr ds : [public_63fc11c], eax
        ret 
        UNREACHABLE_TRAP(0x6294890)
    }
}
