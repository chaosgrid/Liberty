#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a8760, internal_5a8760, public_5a8760);
extern "C" NAKED register_t __cdecl internal_5a8760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_67ea50], eax
        ret 
        UNREACHABLE_TRAP(0x5a8760)
    }
}
