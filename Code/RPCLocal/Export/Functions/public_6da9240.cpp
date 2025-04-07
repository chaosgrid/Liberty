#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da9240, internal_6da9240, public_6da9240);
extern "C" NAKED register_t __cdecl internal_6da9240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62d8]
        mov dword ptr ds : [public_6dbc164], eax
        ret 
        UNREACHABLE_TRAP(0x6da9240)
    }
}
