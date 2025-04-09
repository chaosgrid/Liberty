#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41d8d0, internal_41d8d0, public_41d8d0);
extern "C" NAKED register_t __cdecl internal_41d8d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c94d8]
        mov dword ptr ds : [public_616838], eax
        ret 
        UNREACHABLE_TRAP(0x41d8d0)
    }
}
