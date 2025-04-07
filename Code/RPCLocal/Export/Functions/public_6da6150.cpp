#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6150, internal_6da6150, public_6da6150);
extern "C" NAKED register_t __cdecl internal_6da6150()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61a4]
        mov dword ptr ds : [public_6dbc01c], eax
        ret 
        UNREACHABLE_TRAP(0x6da6150)
    }
}
