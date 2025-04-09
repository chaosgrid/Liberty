#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4d4ab0, internal_4d4ab0, public_4d4ab0);
extern "C" NAKED register_t __cdecl internal_4d4ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7c14]
        mov dword ptr ds : [public_674990], eax
        ret 
        UNREACHABLE_TRAP(0x4d4ab0)
    }
}
