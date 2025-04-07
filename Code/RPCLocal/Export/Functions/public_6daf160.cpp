#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf160, internal_6daf160, public_6daf160);
extern "C" NAKED register_t __cdecl internal_6daf160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6640]
        mov dword ptr ds : [public_6dbc46c], eax
        ret 
        UNREACHABLE_TRAP(0x6daf160)
    }
}
