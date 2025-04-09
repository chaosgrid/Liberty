#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4d6290, internal_4d6290, public_4d6290);
extern "C" NAKED register_t __cdecl internal_4d6290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8000]
        mov dword ptr ds : [public_674a00], eax
        ret 
        UNREACHABLE_TRAP(0x4d6290)
    }
}
