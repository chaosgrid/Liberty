#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41be50, internal_41be50, public_41be50);
extern "C" NAKED register_t __cdecl internal_41be50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c932c]
        mov dword ptr ds : [public_616718], eax
        ret 
        UNREACHABLE_TRAP(0x41be50)
    }
}
