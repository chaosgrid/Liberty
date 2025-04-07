#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422410);

PROC_DECLARE(0x422410, internal_422410, public_422410);
extern "C" NAKED register_t __cdecl internal_422410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xD
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        ret 
        UNREACHABLE_TRAP(0x422410)
    }
}
