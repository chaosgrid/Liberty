#include "FreeLancer-PCH.h"

PROC_DECLARE(0x57b8b0, internal_57b8b0, public_57b8b0);
extern "C" NAKED register_t __cdecl internal_57b8b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67c40d]
        or eax, 0xFFFFFF
        mov byte ptr ds : [public_67c40c], 0
        mov dword ptr ds : [public_67c40d], eax
        ret 
        UNREACHABLE_TRAP(0x57b8b0)
    }
}
