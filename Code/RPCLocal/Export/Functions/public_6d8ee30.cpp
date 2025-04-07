#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8ee30, internal_6d8ee30, public_6d8ee30);
extern "C" NAKED register_t __cdecl internal_6d8ee30()
{
    __asm
    {
        mov word ptr ds : [public_6dbbcf0], 2
        mov byte ptr ds : [public_6dbbcf2], 1
        ret 
        UNREACHABLE_TRAP(0x6d8ee30)
    }
}
