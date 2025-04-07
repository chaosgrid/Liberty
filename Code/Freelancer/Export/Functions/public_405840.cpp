#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);

PROC_DECLARE(0x405840, internal_405840, public_405840);
extern "C" NAKED register_t __cdecl internal_405840()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x405840)
    }
}
