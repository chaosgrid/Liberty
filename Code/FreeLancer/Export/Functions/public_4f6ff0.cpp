#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6ff0, internal_4f6ff0, public_4f6ff0);
extern "C" NAKED register_t __cdecl internal_4f6ff0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_674cbc], 0x84
        mov dword ptr ds : [public_674cc0], eax
        mov dword ptr ds : [public_674cc4], 0xFFFFFFFF
        mov dword ptr ds : [public_674cc8], eax
        ret 
        UNREACHABLE_TRAP(0x4f6ff0)
    }
}
