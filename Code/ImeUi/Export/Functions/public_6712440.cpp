#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712440);

#define public_671245a _public_671245a
#define public_671246a _public_671246a
#define public_6712474 _public_6712474

PROC_DECLARE(0x6712440, internal_6712440, public_6712440);
extern "C" NAKED register_t __cdecl internal_6712440()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], offset public_67171ec
        test eax, eax
        je public_671245a
        push 0
        push eax
        call dword ptr ds : [public_671701c]
        public_671245a : nop
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [public_6717010]
        test eax, eax
        je public_671246a
        push eax
        call edi
        public_671246a : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_6712474
        push esi
        call edi
        public_6712474 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6712440)
    }
}

#undef public_671245a
#undef public_671246a
#undef public_6712474
