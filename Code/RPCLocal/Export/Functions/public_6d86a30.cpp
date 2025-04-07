#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d86a30, internal_6d86a30, public_6d86a30);
extern "C" NAKED register_t __cdecl internal_6d86a30()
{
    __asm
    {
        mov word ptr ds : [public_6dbbb04], 3
        mov byte ptr ds : [public_6dbbb06], 1
        ret 
        UNREACHABLE_TRAP(0x6d86a30)
    }
}
