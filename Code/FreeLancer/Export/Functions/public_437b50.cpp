#include "FreeLancer-PCH.h"

PROC_DECLARE(0x437b50, internal_437b50, public_437b50);
extern "C" NAKED register_t __cdecl internal_437b50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5caedc]
        mov dword ptr ds : [public_6686fc], eax
        ret 
        UNREACHABLE_TRAP(0x437b50)
    }
}
