#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8ee10, internal_6d8ee10, public_6d8ee10);
extern "C" NAKED register_t __cdecl internal_6d8ee10()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6dbbcf4], ax
        mov byte ptr ds : [public_6dbbcf6], al
        ret 
        UNREACHABLE_TRAP(0x6d8ee10)
    }
}
