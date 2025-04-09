#include "FreeLancer-PCH.h"

PROC_DECLARE(0x578b50, internal_578b50, public_578b50);
extern "C" NAKED register_t __cdecl internal_578b50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4428]
        mov dword ptr ds : [public_67c3e8], eax
        ret 
        UNREACHABLE_TRAP(0x578b50)
    }
}
