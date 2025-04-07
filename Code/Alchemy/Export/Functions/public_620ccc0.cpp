#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ccc0);

#define public_620ccd7 _public_620ccd7

PROC_DECLARE(0x620ccc0, internal_620ccc0, public_620ccc0);
extern "C" NAKED register_t __cdecl internal_620ccc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620ccd7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620ccd7 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620ccc0)
    }
}

#undef public_620ccd7
