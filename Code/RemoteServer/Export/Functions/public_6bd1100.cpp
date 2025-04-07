#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1100, internal_6bd1100, public_6bd1100);
extern "C" NAKED register_t __cdecl internal_6bd1100()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6c138ac], ax
        mov byte ptr ds : [public_6c138ae], al
        ret 
        UNREACHABLE_TRAP(0x6bd1100)
    }
}
