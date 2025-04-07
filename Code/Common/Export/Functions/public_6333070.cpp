#include "Common-PCH.h"

PROC_DECLARE(0x6333070, internal_6333070, public_6333070);
extern "C" NAKED register_t __cdecl internal_6333070()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        xor ecx, ecx
        cmp eax, 4
        setge cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x6333070)
    }
}
