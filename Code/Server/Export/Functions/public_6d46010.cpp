#include "Server-PCH.h"

PROC_DECLARE(0x6d46010, internal_6d46010, public_6d46010);
extern "C" NAKED register_t __cdecl internal_6d46010()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6d902cc], ax
        mov byte ptr ds : [public_6d902ce], al
        ret 
        UNREACHABLE_TRAP(0x6d46010)
    }
}
