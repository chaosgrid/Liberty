#include "Freelancer-PCH.h"

PROC_DECLARE(0x513580, internal_513580, public_513580);
extern "C" NAKED register_t __cdecl internal_513580()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_6751c0], eax
        mov dword ptr ds : [public_6751c4], eax
        mov dword ptr ds : [public_6751c8], eax
        mov dword ptr ds : [public_6751b4], eax
        mov dword ptr ds : [public_6751b8], eax
        mov dword ptr ds : [public_6751bc], eax
        ret 
        UNREACHABLE_TRAP(0x513580)
    }
}
