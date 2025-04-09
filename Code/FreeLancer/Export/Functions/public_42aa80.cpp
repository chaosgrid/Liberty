#include "FreeLancer-PCH.h"

PROC_DECLARE(0x42aa80, internal_42aa80, public_42aa80);
extern "C" NAKED register_t __cdecl internal_42aa80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca358]
        mov dword ptr ds : [public_667cdc], eax
        ret 
        UNREACHABLE_TRAP(0x42aa80)
    }
}
