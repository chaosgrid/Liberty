#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a720);

#define public_41a743 _public_41a743

PROC_DECLARE(0x41a720, internal_41a720, public_41a720);
extern "C" NAKED register_t __cdecl internal_41a720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_41a743
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0x48]
        public_41a743 : nop
        ret 
        UNREACHABLE_TRAP(0x41a720)
    }
}

#undef public_41a743
