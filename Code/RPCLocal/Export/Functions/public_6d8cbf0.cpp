#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cbf0, internal_6d8cbf0, public_6d8cbf0);
extern "C" NAKED register_t __cdecl internal_6d8cbf0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6dbbb90], ax
        mov byte ptr ds : [public_6dbbb92], al
        ret 
        UNREACHABLE_TRAP(0x6d8cbf0)
    }
}
