#include "FreeLancer-PCH.h"

PROC_DECLARE(0x578b40, internal_578b40, public_578b40);
extern "C" NAKED register_t __cdecl internal_578b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4428]
        mov dword ptr ds : [public_67c3ec], eax
        ret 
        UNREACHABLE_TRAP(0x578b40)
    }
}
