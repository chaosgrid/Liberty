#include "FreeLancer-PCH.h"

PROC_DECLARE(0x42cbf0, internal_42cbf0, public_42cbf0);
extern "C" NAKED register_t __cdecl internal_42cbf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca798]
        mov dword ptr ds : [public_667cec], eax
        ret 
        UNREACHABLE_TRAP(0x42cbf0)
    }
}
