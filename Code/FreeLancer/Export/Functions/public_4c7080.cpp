#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c7080, internal_4c7080, public_4c7080);
extern "C" NAKED register_t __cdecl internal_4c7080()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6d40]
        mov dword ptr ds : [public_673544], eax
        ret 
        UNREACHABLE_TRAP(0x4c7080)
    }
}
