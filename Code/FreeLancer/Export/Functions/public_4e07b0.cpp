#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4e07b0, internal_4e07b0, public_4e07b0);
extern "C" NAKED register_t __cdecl internal_4e07b0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_674aec], ax
        mov byte ptr ds : [public_674aee], al
        ret 
        UNREACHABLE_TRAP(0x4e07b0)
    }
}
