#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203e30);

#define public_6203e45 _public_6203e45

PROC_DECLARE(0x6203e30, internal_6203e30, public_6203e30);
extern "C" NAKED register_t __cdecl internal_6203e30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6203e45
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6203e45 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6203e30)
    }
}

#undef public_6203e45
