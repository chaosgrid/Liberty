#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91640, internal_6d91640, public_6d91640);
extern "C" NAKED register_t __cdecl internal_6d91640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3d04]
        mov dword ptr ds : [public_6dbbdbc], eax
        ret 
        UNREACHABLE_TRAP(0x6d91640)
    }
}
