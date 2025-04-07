#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da9b40, internal_6da9b40, public_6da9b40);
extern "C" NAKED register_t __cdecl internal_6da9b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62fc]
        mov dword ptr ds : [public_6dbc17c], eax
        ret 
        UNREACHABLE_TRAP(0x6da9b40)
    }
}
