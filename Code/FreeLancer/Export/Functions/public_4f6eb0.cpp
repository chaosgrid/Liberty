#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6eb0, internal_4f6eb0, public_4f6eb0);
extern "C" NAKED register_t __cdecl internal_4f6eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d99d8]
        mov dword ptr ds : [public_674f44], eax
        ret 
        UNREACHABLE_TRAP(0x4f6eb0)
    }
}
