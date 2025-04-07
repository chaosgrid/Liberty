#include "Common-PCH.h"

PROC_DECLARE(0x6280b10, internal_6280b10, public_6280b10);
extern "C" NAKED register_t __cdecl internal_6280b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b858]
        mov dword ptr ds : [public_63fc06c], eax
        ret 
        UNREACHABLE_TRAP(0x6280b10)
    }
}
