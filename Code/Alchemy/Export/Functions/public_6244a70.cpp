#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244a70);

#define public_6244a85 _public_6244a85

PROC_DECLARE(0x6244a70, internal_6244a70, public_6244a70);
extern "C" NAKED register_t __cdecl internal_6244a70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6244a85
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6244a85 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6244a70)
    }
}

#undef public_6244a85
