#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446eb0);

PROC_DECLARE(0x446eb0, internal_446eb0, public_446eb0);
extern "C" NAKED register_t __cdecl internal_446eb0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0xFFFFFFFF
        mov dword ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x446eb0)
    }
}
