#include "FreeLancer-PCH.h"

PROC_DECLARE(0x44d600, internal_44d600, public_44d600);
extern "C" NAKED register_t __cdecl internal_44d600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cc0b0]
        mov dword ptr ds : [public_668aec], eax
        ret 
        UNREACHABLE_TRAP(0x44d600)
    }
}
