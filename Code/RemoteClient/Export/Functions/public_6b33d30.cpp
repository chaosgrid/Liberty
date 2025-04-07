#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b33d30, internal_6b33d30, public_6b33d30);
extern "C" NAKED register_t __cdecl internal_6b33d30()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6b73900], ax
        mov byte ptr ds : [public_6b73902], al
        ret 
        UNREACHABLE_TRAP(0x6b33d30)
    }
}
