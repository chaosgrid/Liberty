#include "Common-PCH.h"

PROC_DECLARE(0x6294880, internal_6294880, public_6294880);
extern "C" NAKED register_t __cdecl internal_6294880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639c9f8]
        mov dword ptr ds : [public_63fc120], eax
        ret 
        UNREACHABLE_TRAP(0x6294880)
    }
}
