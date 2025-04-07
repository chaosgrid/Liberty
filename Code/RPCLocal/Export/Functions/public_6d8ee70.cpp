#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8ee70, internal_6d8ee70, public_6d8ee70);
extern "C" NAKED register_t __cdecl internal_6d8ee70()
{
    __asm
    {
        mov word ptr ds : [public_6dbbce8], 4
        mov byte ptr ds : [public_6dbbcea], 1
        ret 
        UNREACHABLE_TRAP(0x6d8ee70)
    }
}
