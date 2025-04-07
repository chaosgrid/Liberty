#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cbd0, internal_6d8cbd0, public_6d8cbd0);
extern "C" NAKED register_t __cdecl internal_6d8cbd0()
{
    __asm
    {
        mov word ptr ds : [public_6dbbba4], 0
        mov byte ptr ds : [public_6dbbba6], 1
        ret 
        UNREACHABLE_TRAP(0x6d8cbd0)
    }
}
