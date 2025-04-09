#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b0160, internal_5b0160, public_5b0160);
extern "C" NAKED register_t __cdecl internal_5b0160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e661c]
        mov dword ptr ds : [public_67ec90], eax
        ret 
        UNREACHABLE_TRAP(0x5b0160)
    }
}
