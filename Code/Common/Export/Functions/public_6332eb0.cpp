#include "Common-PCH.h"

PROC_DECLARE(0x6332eb0, internal_6332eb0, public_6332eb0);
extern "C" NAKED register_t __cdecl internal_6332eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a496c]
        mov dword ptr ds : [public_640a774], eax
        ret 
        UNREACHABLE_TRAP(0x6332eb0)
    }
}
