#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97880, internal_6d97880, public_6d97880);
extern "C" NAKED register_t __cdecl internal_6d97880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f38]
        mov dword ptr ds : [public_6dbbe74], eax
        ret 
        UNREACHABLE_TRAP(0x6d97880)
    }
}
