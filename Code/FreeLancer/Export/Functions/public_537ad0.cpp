#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_537aea _public_537aea

PROC_DECLARE(0x537ad0, internal_537ad0, public_537ad0);
extern "C" NAKED register_t __cdecl internal_537ad0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xD0]
        dec edx
        push esi
        mov esi, edx
        test esi, esi
        mov dword ptr ds : [ecx+0xD0], edx
        jg public_537aea
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_537aea : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x537ad0)
    }
}

#undef public_537aea
