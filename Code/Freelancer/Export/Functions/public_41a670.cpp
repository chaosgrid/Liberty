#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a670);

#define public_41a6a0 _public_41a6a0

PROC_DECLARE(0x41a670, internal_41a670, public_41a670);
extern "C" NAKED register_t __cdecl internal_41a670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dcc]
        cmp dword ptr ds : [eax], 0
        je public_41a6a0
        push 1
        mov byte ptr ds : [public_6166d4], 1
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6166bc @0x41a697*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166bc
        push eax
        call dword ptr ds : [ecx+0x38]
        public_41a6a0 : nop
        ret 
        UNREACHABLE_TRAP(0x41a670)
    }
}

#undef public_41a6a0
