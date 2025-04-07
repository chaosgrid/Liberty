#include "Common-PCH.h"

PROC_DECLARE(0x6272df0, internal_6272df0, public_6272df0);
extern "C" NAKED register_t __cdecl internal_6272df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639a0a0]
        mov dword ptr ds : [public_63fbbb4], eax
        ret 
        UNREACHABLE_TRAP(0x6272df0)
    }
}
