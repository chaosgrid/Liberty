#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da4f40, internal_6da4f40, public_6da4f40);
extern "C" NAKED register_t __cdecl internal_6da4f40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6104]
        mov dword ptr ds : [public_6dbbf94], eax
        ret 
        UNREACHABLE_TRAP(0x6da4f40)
    }
}
