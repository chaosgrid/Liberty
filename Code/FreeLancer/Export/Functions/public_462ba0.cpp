#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_462bc5 _public_462bc5

PROC_DECLARE(0x462ba0, internal_462ba0, public_462ba0);
extern "C" NAKED register_t __cdecl internal_462ba0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x32C]
        test eax, eax
        je public_462bc5
        mov eax, dword ptr ds : [eax+0x14]
        cmp dword ptr ds : [esi+0x330], eax
        je public_462bc5
        mov ecx, esi
        mov dword ptr ds : [esi+0x330], eax
        call public_462e30
        public_462bc5 : nop
        mov ecx, esi
        pop esi
        jmp public_5a17b0
        UNREACHABLE_TRAP(0x462ba0)
    }
}

#undef public_462bc5
