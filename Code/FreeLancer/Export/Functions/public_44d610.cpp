#include "FreeLancer-PCH.h"

PROC_DECLARE(0x44d610, internal_44d610, public_44d610);
extern "C" NAKED register_t __cdecl internal_44d610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cc0b0]
        mov dword ptr ds : [public_668ae8], eax
        ret 
        UNREACHABLE_TRAP(0x44d610)
    }
}
