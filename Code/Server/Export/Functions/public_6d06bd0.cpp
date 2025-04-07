#include "Server-PCH.h"

PROC_DECLARE(0x6d06bd0, internal_6d06bd0, public_6d06bd0);
extern "C" NAKED register_t __cdecl internal_6d06bd0()
{
    __asm
    {
        mov word ptr ds : [public_6d8d9d8], 2
        mov byte ptr ds : [public_6d8d9da], 1
        ret 
        UNREACHABLE_TRAP(0x6d06bd0)
    }
}
