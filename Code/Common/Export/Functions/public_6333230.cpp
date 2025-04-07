#include "Common-PCH.h"

PROC_DECLARE(0x6333230, internal_6333230, public_6333230);
extern "C" NAKED register_t __cdecl internal_6333230()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp]
        push edx
        mov dword ptr ss : [esp+8], 1
        mov dword ptr ss : [esp+4], offset public_63a4998
        call dword ptr ds : [eax+4]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6333230)
    }
}
