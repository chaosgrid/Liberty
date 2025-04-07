#include "FLServer-PCH.h"

PROC_DECLARE(0x40f840, internal_40f840, public_40f840);
extern "C" NAKED register_t __cdecl internal_40f840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41dac0]
        mov dword ptr ds : [public_427cc8], eax
        ret 
        UNREACHABLE_TRAP(0x40f840)
    }
}
