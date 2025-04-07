#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd6f60, internal_6bd6f60, public_6bd6f60);
extern "C" NAKED register_t __cdecl internal_6bd6f60()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6c139e0], ax
        mov byte ptr ds : [public_6c139e2], al
        ret 
        UNREACHABLE_TRAP(0x6bd6f60)
    }
}
