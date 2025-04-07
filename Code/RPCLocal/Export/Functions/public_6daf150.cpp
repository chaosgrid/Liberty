#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf150, internal_6daf150, public_6daf150);
extern "C" NAKED register_t __cdecl internal_6daf150()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db663c]
        mov dword ptr ds : [public_6dbc474], eax
        ret 
        UNREACHABLE_TRAP(0x6daf150)
    }
}
