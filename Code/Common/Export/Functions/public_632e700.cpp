#include "Common-PCH.h"

PROC_DECLARE(0x632e700, internal_632e700, public_632e700);
extern "C" NAKED register_t __cdecl internal_632e700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a48c4]
        mov dword ptr ds : [public_640a720], eax
        ret 
        UNREACHABLE_TRAP(0x632e700)
    }
}
