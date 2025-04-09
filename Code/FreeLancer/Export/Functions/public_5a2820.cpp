#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a2820, internal_5a2820, public_5a2820);
extern "C" NAKED register_t __cdecl internal_5a2820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e6010]
        mov dword ptr ds : [public_67de3c], eax
        ret 
        UNREACHABLE_TRAP(0x5a2820)
    }
}
