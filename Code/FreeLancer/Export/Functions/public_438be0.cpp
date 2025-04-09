#include "FreeLancer-PCH.h"

PROC_DECLARE(0x438be0, internal_438be0, public_438be0);
extern "C" NAKED register_t __cdecl internal_438be0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5caef0]
        mov dword ptr ds : [public_668768], eax
        ret 
        UNREACHABLE_TRAP(0x438be0)
    }
}
