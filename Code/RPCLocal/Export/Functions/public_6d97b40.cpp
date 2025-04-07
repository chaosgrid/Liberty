#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97b40, internal_6d97b40, public_6d97b40);
extern "C" NAKED register_t __cdecl internal_6d97b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f88]
        mov dword ptr ds : [public_6dbbe90], eax
        ret 
        UNREACHABLE_TRAP(0x6d97b40)
    }
}
