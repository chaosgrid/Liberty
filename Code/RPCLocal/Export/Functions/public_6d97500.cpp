#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97500, internal_6d97500, public_6d97500);
extern "C" NAKED register_t __cdecl internal_6d97500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ef8]
        mov dword ptr ds : [public_6dbbe54], eax
        ret 
        UNREACHABLE_TRAP(0x6d97500)
    }
}
