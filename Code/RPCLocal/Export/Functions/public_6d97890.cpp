#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97890, internal_6d97890, public_6d97890);
extern "C" NAKED register_t __cdecl internal_6d97890()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f3c]
        mov dword ptr ds : [public_6dbbe6c], eax
        ret 
        UNREACHABLE_TRAP(0x6d97890)
    }
}
