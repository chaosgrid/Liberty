#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45fd20, internal_45fd20, public_45fd20);
extern "C" NAKED register_t __cdecl internal_45fd20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cef18]
        mov dword ptr ds : [public_66d4b4], eax
        ret 
        UNREACHABLE_TRAP(0x45fd20)
    }
}
