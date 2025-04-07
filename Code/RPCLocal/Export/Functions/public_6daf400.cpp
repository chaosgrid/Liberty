#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf400, internal_6daf400, public_6daf400);
extern "C" NAKED register_t __cdecl internal_6daf400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db66a4]
        mov dword ptr ds : [public_6dbc4dc], eax
        ret 
        UNREACHABLE_TRAP(0x6daf400)
    }
}
