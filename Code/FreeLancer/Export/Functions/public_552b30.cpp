#include "FreeLancer-PCH.h"

PROC_DECLARE(0x552b30, internal_552b30, public_552b30);
extern "C" NAKED register_t __cdecl internal_552b30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0e14]
        mov dword ptr ds : [public_67994c], eax
        ret 
        UNREACHABLE_TRAP(0x552b30)
    }
}
