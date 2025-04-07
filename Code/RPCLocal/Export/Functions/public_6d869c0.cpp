#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d869c0, internal_6d869c0, public_6d869c0);
extern "C" NAKED register_t __cdecl internal_6d869c0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6dbbafc], ax
        mov byte ptr ds : [public_6dbbafe], al
        ret 
        UNREACHABLE_TRAP(0x6d869c0)
    }
}
