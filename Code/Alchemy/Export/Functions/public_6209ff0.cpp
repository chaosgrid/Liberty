#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ff0);

#define public_620a005 _public_620a005

PROC_DECLARE(0x6209ff0, internal_6209ff0, public_6209ff0);
extern "C" NAKED register_t __cdecl internal_6209ff0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620a005
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620a005 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6209ff0)
    }
}

#undef public_620a005
