#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cc10, internal_6d8cc10, public_6d8cc10);
extern "C" NAKED register_t __cdecl internal_6d8cc10()
{
    __asm
    {
        mov word ptr ds : [public_6dbbba8], 2
        mov byte ptr ds : [public_6dbbbaa], 1
        ret 
        UNREACHABLE_TRAP(0x6d8cc10)
    }
}
