#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf350, internal_6daf350, public_6daf350);
extern "C" NAKED register_t __cdecl internal_6daf350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6678]
        mov dword ptr ds : [public_6dbc4c4], eax
        ret 
        UNREACHABLE_TRAP(0x6daf350)
    }
}
