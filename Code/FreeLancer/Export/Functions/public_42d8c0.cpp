#include "FreeLancer-PCH.h"

PROC_DECLARE(0x42d8c0, internal_42d8c0, public_42d8c0);
extern "C" NAKED register_t __cdecl internal_42d8c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ca85c]
        mov dword ptr ds : [public_667e0c], eax
        ret 
        UNREACHABLE_TRAP(0x42d8c0)
    }
}
