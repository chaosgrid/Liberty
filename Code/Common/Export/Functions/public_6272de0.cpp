#include "Common-PCH.h"

PROC_DECLARE(0x6272de0, internal_6272de0, public_6272de0);
extern "C" NAKED register_t __cdecl internal_6272de0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639a09c]
        mov dword ptr ds : [public_63fbbb8], eax
        ret 
        UNREACHABLE_TRAP(0x6272de0)
    }
}
