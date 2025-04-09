#include "FreeLancer-PCH.h"

PROC_DECLARE(0x450340, internal_450340, public_450340);
extern "C" NAKED register_t __cdecl internal_450340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cca70]
        mov dword ptr ds : [public_66d10c], eax
        ret 
        UNREACHABLE_TRAP(0x450340)
    }
}
