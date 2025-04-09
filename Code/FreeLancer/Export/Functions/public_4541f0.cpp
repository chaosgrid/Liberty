#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4541f0, internal_4541f0, public_4541f0);
extern "C" NAKED register_t __cdecl internal_4541f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cde98]
        mov dword ptr ds : [public_66d2cc], eax
        ret 
        UNREACHABLE_TRAP(0x4541f0)
    }
}
