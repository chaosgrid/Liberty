#include "FreeLancer-PCH.h"

PROC_DECLARE(0x445e00, internal_445e00, public_445e00);
extern "C" NAKED register_t __cdecl internal_445e00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbbfc]
        mov dword ptr ds : [public_668a80], eax
        ret 
        UNREACHABLE_TRAP(0x445e00)
    }
}
