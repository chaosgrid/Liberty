#include "FreeLancer-PCH.h"

PROC_DECLARE(0x59d000, internal_59d000, public_59d000);
extern "C" NAKED register_t __cdecl internal_59d000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5dbc]
        mov dword ptr ds : [public_67dcbc], eax
        ret 
        UNREACHABLE_TRAP(0x59d000)
    }
}
