#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a430);

#define public_620a445 _public_620a445

PROC_DECLARE(0x620a430, internal_620a430, public_620a430);
extern "C" NAKED register_t __cdecl internal_620a430()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620a445
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620a445 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620a430)
    }
}

#undef public_620a445
