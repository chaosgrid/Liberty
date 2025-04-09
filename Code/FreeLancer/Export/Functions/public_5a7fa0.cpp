#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a7fa0, internal_5a7fa0, public_5a7fa0);
extern "C" NAKED register_t __cdecl internal_5a7fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e6448]
        mov dword ptr ds : [public_67ea38], eax
        ret 
        UNREACHABLE_TRAP(0x5a7fa0)
    }
}
