#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd6f30, internal_6bd6f30, public_6bd6f30);
extern "C" NAKED register_t __cdecl internal_6bd6f30()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6c139e4], ax
        mov byte ptr ds : [public_6c139e6], al
        ret 
        UNREACHABLE_TRAP(0x6bd6f30)
    }
}
