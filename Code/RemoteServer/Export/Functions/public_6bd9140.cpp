#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9140, internal_6bd9140, public_6bd9140);
extern "C" NAKED register_t __cdecl internal_6bd9140()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6c13a4c], ax
        mov byte ptr ds : [public_6c13a4e], al
        ret 
        UNREACHABLE_TRAP(0x6bd9140)
    }
}
