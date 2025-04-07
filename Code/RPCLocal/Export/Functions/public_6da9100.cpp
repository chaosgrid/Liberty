#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da9100, internal_6da9100, public_6da9100);
extern "C" NAKED register_t __cdecl internal_6da9100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62cc]
        mov dword ptr ds : [public_6dbc14c], eax
        ret 
        UNREACHABLE_TRAP(0x6da9100)
    }
}
