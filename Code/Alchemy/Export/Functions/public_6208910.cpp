#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208910);

#define public_6208927 _public_6208927

PROC_DECLARE(0x6208910, internal_6208910, public_6208910);
extern "C" NAKED register_t __cdecl internal_6208910()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6208927
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_6208927 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6208910)
    }
}

#undef public_6208927
