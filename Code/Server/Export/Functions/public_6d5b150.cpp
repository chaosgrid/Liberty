#include "Server-PCH.h"

PROC_DECLARE(0x6d5b150, internal_6d5b150, public_6d5b150);
extern "C" NAKED register_t __cdecl internal_6d5b150()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6d90434], ax
        mov byte ptr ds : [public_6d90436], al
        ret 
        UNREACHABLE_TRAP(0x6d5b150)
    }
}
