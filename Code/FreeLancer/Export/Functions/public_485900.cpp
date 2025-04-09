#include "FreeLancer-PCH.h"

PROC_DECLARE(0x485900, internal_485900, public_485900);
extern "C" NAKED register_t __cdecl internal_485900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d1d2c]
        mov dword ptr ds : [public_671f48], eax
        ret 
        UNREACHABLE_TRAP(0x485900)
    }
}
