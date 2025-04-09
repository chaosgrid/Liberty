#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_553250);

#define public_55329f _public_55329f
#define public_5532ba _public_5532ba
#define public_5532be _public_5532be
#define public_5532c5 _public_5532c5

PROC_DECLARE(0x553250, internal_553250, public_553250);
extern "C" NAKED register_t __cdecl internal_553250()
{
    __asm
    {
        push ebx
        push edi
        xor bl, bl
        call public_54baf0
        test eax, eax
        je public_5532c5
        mov edx, dword ptr ds : [eax]
        push ebp
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp eax, esi
        mov ebp, dword ptr ss : [esp+0x18]
        jne public_55329f
        mov eax, dword ptr ss : [ebp+0x14]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        push eax
        call public_54baf0
        push eax
        call public_45a490
        add esp, 8
        cmp eax, 0xFFFFFFFF
        jne public_55329f
        mov bl, 1
        public_55329f : nop
        cmp dword ptr ss : [ebp+0x14], esi
        pop esi
        pop ebp
        jne public_5532ba
        push edi
        call public_54baf0
        push eax
        call public_45a490
        add esp, 8
        cmp eax, 0xFFFFFFFF
        je public_5532be
        public_5532ba : nop
        test bl, bl
        je public_5532c5
        public_5532be : nop
        mov byte ptr ds : [public_679968], 1
        public_5532c5 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x553250)
    }
}

#undef public_55329f
#undef public_5532ba
#undef public_5532be
#undef public_5532c5
