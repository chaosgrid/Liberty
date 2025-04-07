#include "Common-PCH.h"

PROC_DECLARE(0x63253a0, internal_63253a0, public_63253a0);
extern "C" NAKED register_t __cdecl internal_63253a0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a3e54
        ret 
        UNREACHABLE_TRAP(0x63253a0)
    }
}
