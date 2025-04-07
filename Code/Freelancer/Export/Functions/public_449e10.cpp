#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435b20);
CLANG_FORWARD_PROC_SYMBOL(public_449e10);

#define public_449e3a _public_449e3a
#define public_449e4b _public_449e4b
#define public_449e56 _public_449e56

PROC_DECLARE(0x449e10, internal_449e10, public_449e10);
extern "C" NAKED register_t __cdecl internal_449e10()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+edi*4+0x518]
        test eax, eax
        je public_449e56
        mov eax, dword ptr ds : [eax+0x1BC]
        cmp eax, 0xFFFFFFFF
        je public_449e3a
        push eax
        lea ecx, ds:[esi+0x504]
        call public_435b20
        public_449e3a : nop
        mov ecx, dword ptr ds : [esi+edi*4+0x518]
        test ecx, ecx
        je public_449e4b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_449e4b : nop
        mov dword ptr ds : [esi+edi*4+0x518], 0
        public_449e56 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x449e10)
    }
}

#undef public_449e3a
#undef public_449e4b
#undef public_449e56
