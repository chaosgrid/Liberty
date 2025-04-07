#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9170, internal_6bd9170, public_6bd9170);
extern "C" NAKED register_t __cdecl internal_6bd9170()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6c13a44], ax
        mov byte ptr ds : [public_6c13a46], al
        ret 
        UNREACHABLE_TRAP(0x6bd9170)
    }
}
