#include "FreeLancer-PCH.h"

PROC_DECLARE(0x454220, internal_454220, public_454220);
extern "C" NAKED register_t __cdecl internal_454220()
{
    __asm
    {
        xor eax, eax
        mov byte ptr ds : [public_66d2a8], al
        mov dword ptr ds : [public_66d2ac], eax
        mov dword ptr ds : [public_66d2b0], eax
        mov dword ptr ds : [public_66d2b4], eax
        mov dword ptr ds : [public_66d2b8], eax
        mov dword ptr ds : [public_66d2bc], eax
        mov dword ptr ds : [public_66d2c0], eax
        ret 
        UNREACHABLE_TRAP(0x454220)
    }
}
