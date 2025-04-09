#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a5940, internal_5a5940, public_5a5940);
extern "C" NAKED register_t __cdecl internal_5a5940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e63f4]
        mov dword ptr ds : [public_67e7ac], eax
        ret 
        UNREACHABLE_TRAP(0x5a5940)
    }
}
