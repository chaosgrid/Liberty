#include "Common-PCH.h"


#define public_631f611 _public_631f611
#define public_631f634 _public_631f634
#define public_631f641 _public_631f641
#define public_631f650 _public_631f650
#define public_631f65a _public_631f65a
#define public_631f661 _public_631f661
#define public_631f669 _public_631f669

PROC_DECLARE(0x631f600, internal_631f600, public_631f600);
extern "C" NAKED register_t __cdecl internal_631f600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_64018f0]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_631f669
        mov edi, dword ptr ss : [esp+0xC]
        public_631f611 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[esi+0xC]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax]
        test al, al
        je public_631f669
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x45]
        test cl, cl
        jne public_631f641
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x45]
        test cl, cl
        jne public_631f661
        public_631f634 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x45]
        test cl, cl
        je public_631f634
        jmp public_631f661
        public_631f641 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_631f65a
        lea esp, ss:[esp]
        public_631f650 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_631f650
        public_631f65a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_631f661
        mov esi, eax
        public_631f661 : nop
        cmp esi, dword ptr ds : [public_64018f0]
        jne public_631f611
        public_631f669 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x631f600)
    }
}

#undef public_631f611
#undef public_631f634
#undef public_631f641
#undef public_631f650
#undef public_631f65a
#undef public_631f661
#undef public_631f669
