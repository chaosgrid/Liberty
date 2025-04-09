#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f950);

#define public_44f96b _public_44f96b

PROC_DECLARE(0x44f950, internal_44f950, public_44f950);
extern "C" NAKED register_t __cdecl internal_44f950()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_44f96b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x5C]
        mov eax, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [edx+0x58]
        public_44f96b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x44f950)
    }
}

#undef public_44f96b
