#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d88320, internal_6d88320, public_6d88320);
extern "C" NAKED register_t __cdecl internal_6d88320()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6dbbb68], ax
        mov byte ptr ds : [public_6dbbb6a], al
        ret 
        UNREACHABLE_TRAP(0x6d88320)
    }
}
