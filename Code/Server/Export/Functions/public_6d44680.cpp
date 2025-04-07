#include "Server-PCH.h"

PROC_DECLARE(0x6d44680, internal_6d44680, public_6d44680);
extern "C" NAKED register_t __cdecl internal_6d44680()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6d8faf8], ax
        mov byte ptr ds : [public_6d8fafa], al
        ret 
        UNREACHABLE_TRAP(0x6d44680)
    }
}
