#include "Server-PCH.h"

PROC_DECLARE(0x6d06bb0, internal_6d06bb0, public_6d06bb0);
extern "C" NAKED register_t __cdecl internal_6d06bb0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6d8d9dc], ax
        mov byte ptr ds : [public_6d8d9de], al
        ret 
        UNREACHABLE_TRAP(0x6d06bb0)
    }
}
