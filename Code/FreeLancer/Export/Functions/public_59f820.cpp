#include "FreeLancer-PCH.h"

PROC_DECLARE(0x59f820, internal_59f820, public_59f820);
extern "C" NAKED register_t __cdecl internal_59f820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5e2c]
        mov dword ptr ds : [public_67dd40], eax
        ret 
        UNREACHABLE_TRAP(0x59f820)
    }
}
