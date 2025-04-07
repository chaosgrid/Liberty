#include "Common-PCH.h"

PROC_DECLARE(0x630cfd0, internal_630cfd0, public_630cfd0);
extern "C" NAKED register_t __cdecl internal_630cfd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a356c]
        mov dword ptr ds : [public_63fcf60], eax
        ret 
        UNREACHABLE_TRAP(0x630cfd0)
    }
}
