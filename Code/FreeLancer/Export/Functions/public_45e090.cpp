#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e090, internal_45e090, public_45e090);
extern "C" NAKED register_t __cdecl internal_45e090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9bd]
        or eax, 0xFFFFFF
        mov byte ptr ds : [public_66d9bc], 0
        mov dword ptr ds : [public_66d9bd], eax
        ret 
        UNREACHABLE_TRAP(0x45e090)
    }
}
