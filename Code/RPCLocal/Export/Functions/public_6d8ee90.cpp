#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8ee90, internal_6d8ee90, public_6d8ee90);
extern "C" NAKED register_t __cdecl internal_6d8ee90()
{
    __asm
    {
        mov dword ptr ds : [public_6dbbce4], 0
        mov dword ptr ds : [public_6dbbcdc], offset public_6db3978
        mov dword ptr ds : [public_6dbbce0], offset public_6db3970
        ret 
        UNREACHABLE_TRAP(0x6d8ee90)
    }
}
