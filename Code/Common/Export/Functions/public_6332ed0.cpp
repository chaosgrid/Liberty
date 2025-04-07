#include "Common-PCH.h"

PROC_DECLARE(0x6332ed0, internal_6332ed0, public_6332ed0);
extern "C" NAKED register_t __cdecl internal_6332ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a4970]
        mov dword ptr ds : [public_640a76c], eax
        ret 
        UNREACHABLE_TRAP(0x6332ed0)
    }
}
