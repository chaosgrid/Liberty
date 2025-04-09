#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a8980, internal_5a8980, public_5a8980);
extern "C" NAKED register_t __cdecl internal_5a8980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e64b4]
        mov dword ptr ds : [public_67ea48], eax
        ret 
        UNREACHABLE_TRAP(0x5a8980)
    }
}
