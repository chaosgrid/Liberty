#include "Server-PCH.h"

PROC_DECLARE(0x6d06c10, internal_6d06c10, public_6d06c10);
extern "C" NAKED register_t __cdecl internal_6d06c10()
{
    __asm
    {
        mov word ptr ds : [public_6d8d9d0], 4
        mov byte ptr ds : [public_6d8d9d2], 1
        ret 
        UNREACHABLE_TRAP(0x6d06c10)
    }
}
