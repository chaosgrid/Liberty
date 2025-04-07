#include "Server-PCH.h"

PROC_DECLARE(0x6d18960, internal_6d18960, public_6d18960);
extern "C" NAKED register_t __cdecl internal_6d18960()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6d8f5e8], ax
        mov byte ptr ds : [public_6d8f5ea], al
        ret 
        UNREACHABLE_TRAP(0x6d18960)
    }
}
