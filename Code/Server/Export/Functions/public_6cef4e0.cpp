#include "Server-PCH.h"

PROC_DECLARE(0x6cef4e0, internal_6cef4e0, public_6cef4e0);
extern "C" NAKED register_t __cdecl internal_6cef4e0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6d8d740], ax
        mov byte ptr ds : [public_6d8d742], al
        ret 
        UNREACHABLE_TRAP(0x6cef4e0)
    }
}
