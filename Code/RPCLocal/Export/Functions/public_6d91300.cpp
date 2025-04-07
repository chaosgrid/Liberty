#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91300, internal_6d91300, public_6d91300);
extern "C" NAKED register_t __cdecl internal_6d91300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ce8]
        mov dword ptr ds : [public_6dbbda8], eax
        ret 
        UNREACHABLE_TRAP(0x6d91300)
    }
}
