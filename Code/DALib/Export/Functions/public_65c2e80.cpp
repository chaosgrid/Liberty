#include "DALib-PCH.h"

PROC_DECLARE(0x65c2e80, internal_65c2e80, public_65c2e80);
extern "C" NAKED register_t __cdecl internal_65c2e80()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_65c7460
        ret 
        UNREACHABLE_TRAP(0x65c2e80)
    }
}
