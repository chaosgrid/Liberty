#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d95b40, internal_6d95b40, public_6d95b40);
extern "C" NAKED register_t __cdecl internal_6d95b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3da0]
        mov dword ptr ds : [public_6dbbe00], eax
        ret 
        UNREACHABLE_TRAP(0x6d95b40)
    }
}
