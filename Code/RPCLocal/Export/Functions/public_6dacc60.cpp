#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dacc60, internal_6dacc60, public_6dacc60);
extern "C" NAKED register_t __cdecl internal_6dacc60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db650c]
        mov dword ptr ds : [public_6dbc31c], eax
        ret 
        UNREACHABLE_TRAP(0x6dacc60)
    }
}
