#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4720f0, internal_4720f0, public_4720f0);
extern "C" NAKED register_t __cdecl internal_4720f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d04e8]
        mov dword ptr ds : [public_66dbfc], eax
        ret 
        UNREACHABLE_TRAP(0x4720f0)
    }
}
