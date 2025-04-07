#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4223d0);

PROC_DECLARE(0x4223d0, internal_4223d0, public_4223d0);
extern "C" NAKED register_t __cdecl internal_4223d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        push esi
        push 3
        push 0xD
        push 0
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 3
        push 0xE
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4223d0)
    }
}
