#include "Common-PCH.h"

PROC_DECLARE(0x6333060, internal_6333060, public_6333060);
extern "C" NAKED register_t __cdecl internal_6333060()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        xor ecx, ecx
        cmp eax, 4
        setl cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x6333060)
    }
}
