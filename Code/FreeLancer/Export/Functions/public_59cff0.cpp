#include "FreeLancer-PCH.h"

PROC_DECLARE(0x59cff0, internal_59cff0, public_59cff0);
extern "C" NAKED register_t __cdecl internal_59cff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5dbc]
        mov dword ptr ds : [public_67dcc0], eax
        ret 
        UNREACHABLE_TRAP(0x59cff0)
    }
}
