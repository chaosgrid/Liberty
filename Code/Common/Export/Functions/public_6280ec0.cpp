#include "Common-PCH.h"

PROC_DECLARE(0x6280ec0, internal_6280ec0, public_6280ec0);
extern "C" NAKED register_t __cdecl internal_6280ec0()
{
    __asm
    {
        mov eax, ecx
        mov byte ptr ds : [eax], 1
        ret 
        UNREACHABLE_TRAP(0x6280ec0)
    }
}
