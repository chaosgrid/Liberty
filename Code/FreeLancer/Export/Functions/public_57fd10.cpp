#include "FreeLancer-PCH.h"

PROC_DECLARE(0x57fd10, internal_57fd10, public_57fd10);
extern "C" NAKED register_t __cdecl internal_57fd10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4970]
        mov dword ptr ds : [public_67c4b4], eax
        ret 
        UNREACHABLE_TRAP(0x57fd10)
    }
}
