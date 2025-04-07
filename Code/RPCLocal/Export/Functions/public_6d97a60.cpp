#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97a60, internal_6d97a60, public_6d97a60);
extern "C" NAKED register_t __cdecl internal_6d97a60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f58]
        mov dword ptr ds : [public_6dbbe80], eax
        ret 
        UNREACHABLE_TRAP(0x6d97a60)
    }
}
