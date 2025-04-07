#include "Common-PCH.h"

PROC_DECLARE(0x632e710, internal_632e710, public_632e710);
extern "C" NAKED register_t __cdecl internal_632e710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a48c8]
        mov dword ptr ds : [public_640a71c], eax
        ret 
        UNREACHABLE_TRAP(0x632e710)
    }
}
