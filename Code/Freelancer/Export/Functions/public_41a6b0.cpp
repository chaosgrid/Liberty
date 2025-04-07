#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a6b0);

#define public_41a6ed _public_41a6ed

PROC_DECLARE(0x41a6b0, internal_41a6b0, public_41a6b0);
extern "C" NAKED register_t __cdecl internal_41a6b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dcc]
        cmp dword ptr ds : [eax], 0
        je public_41a6ed
        mov byte ptr ds : [public_6166d4], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0x38]
        mov edx, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        public_41a6ed : nop
        ret 
        UNREACHABLE_TRAP(0x41a6b0)
    }
}

#undef public_41a6ed
