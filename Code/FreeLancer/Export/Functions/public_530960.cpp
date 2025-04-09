#include "Freelancer-PCH.h"

PROC_DECLARE(0x530960, internal_530960, public_530960);
extern "C" NAKED register_t __cdecl internal_530960()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_5c6030]
        mov ecx, offset public_6754dc
        mov dword ptr ds : [public_6754d0], 0
        mov dword ptr ds : [public_6754d4], 0x7F7FFFFF
        mov dword ptr ds : [public_6754d8], 1
        call esi
        mov ecx, offset public_6754e0
        call esi
        mov dword ptr ds : [public_6754e4], 0
        mov dword ptr ds : [public_6754e8], 0
        mov dword ptr ds : [public_6754ec], 0
        mov dword ptr ds : [public_6754f0], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x530960)
    }
}
