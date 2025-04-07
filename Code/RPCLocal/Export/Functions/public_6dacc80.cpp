#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dacc80, internal_6dacc80, public_6dacc80);
extern "C" NAKED register_t __cdecl internal_6dacc80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6518]
        mov dword ptr ds : [public_6dbc334], eax
        ret 
        UNREACHABLE_TRAP(0x6dacc80)
    }
}
