#include "Content-PCH.h"

PROC_DECLARE(0x6f38ea0, internal_6f38ea0, public_6f38ea0);
extern "C" NAKED register_t __cdecl internal_6f38ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fb95dc]
        mov dword ptr ds : [public_6fd094c], eax
        ret 
        UNREACHABLE_TRAP(0x6f38ea0)
    }
}
