#include "FreeLancer-PCH.h"

PROC_DECLARE(0x595340, internal_595340, public_595340);
extern "C" NAKED register_t __cdecl internal_595340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5538]
        mov dword ptr ds : [public_67d9f4], eax
        ret 
        UNREACHABLE_TRAP(0x595340)
    }
}
