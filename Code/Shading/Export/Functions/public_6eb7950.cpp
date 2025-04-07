#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7950);

PROC_DECLARE(0x6eb7950, internal_6eb7950, public_6eb7950);
extern "C" NAKED register_t __cdecl internal_6eb7950()
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
        UNREACHABLE_TRAP(0x6eb7950)
    }
}
