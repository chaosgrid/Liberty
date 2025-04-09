#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4068a0, internal_4068a0, public_4068a0);
extern "C" NAKED register_t __cdecl internal_4068a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c7728]
        mov dword ptr ds : [public_6164ac], eax
        ret 
        UNREACHABLE_TRAP(0x4068a0)
    }
}
