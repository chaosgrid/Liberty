#include "Freelancer-PCH.h"

PROC_DECLARE(0x55fdc0, internal_55fdc0, public_55fdc0);
extern "C" NAKED register_t __cdecl internal_55fdc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1a1c]
        mov dword ptr ds : [public_679b70], eax
        ret 
        UNREACHABLE_TRAP(0x55fdc0)
    }
}
