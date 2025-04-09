#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5626c0, internal_5626c0, public_5626c0);
extern "C" NAKED register_t __cdecl internal_5626c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e2070]
        mov dword ptr ds : [public_67a474], eax
        ret 
        UNREACHABLE_TRAP(0x5626c0)
    }
}
