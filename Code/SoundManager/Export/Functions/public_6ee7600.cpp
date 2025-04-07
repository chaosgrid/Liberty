#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7600);

#define public_6ee7615 _public_6ee7615

PROC_DECLARE(0x6ee7600, internal_6ee7600, public_6ee7600);
extern "C" NAKED register_t __cdecl internal_6ee7600()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ee7615
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6ee7615 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ee7600)
    }
}

#undef public_6ee7615
