#include "Common-PCH.h"

PROC_DECLARE(0x6262d60, internal_6262d60, public_6262d60);
extern "C" NAKED register_t __cdecl internal_6262d60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        push esi
        mov esi, dword ptr ds : [ecx+0x88]
        xor edx, edx
        cmp eax, esi
        setge dl
        pop esi
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6262d60)
    }
}
