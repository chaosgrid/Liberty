#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d869f0, internal_6d869f0, public_6d869f0);
extern "C" NAKED register_t __cdecl internal_6d869f0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6dbba30], ax
        mov byte ptr ds : [public_6dbba32], al
        ret 
        UNREACHABLE_TRAP(0x6d869f0)
    }
}
