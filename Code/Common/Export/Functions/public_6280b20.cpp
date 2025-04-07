#include "Common-PCH.h"

PROC_DECLARE(0x6280b20, internal_6280b20, public_6280b20);
extern "C" NAKED register_t __cdecl internal_6280b20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b85c]
        mov dword ptr ds : [public_63fc068], eax
        ret 
        UNREACHABLE_TRAP(0x6280b20)
    }
}
