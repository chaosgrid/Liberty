#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da8b40, internal_6da8b40, public_6da8b40);
extern "C" NAKED register_t __cdecl internal_6da8b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62ac]
        mov dword ptr ds : [public_6dbc12c], eax
        ret 
        UNREACHABLE_TRAP(0x6da8b40)
    }
}
