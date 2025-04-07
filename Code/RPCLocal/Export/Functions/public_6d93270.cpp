#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d93270, internal_6d93270, public_6d93270);
extern "C" NAKED register_t __cdecl internal_6d93270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3d94]
        mov dword ptr ds : [public_6dbbde8], eax
        ret 
        UNREACHABLE_TRAP(0x6d93270)
    }
}
