#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f74620);

#define public_6f74638 _public_6f74638
#define public_6f74643 _public_6f74643
#define public_6f74657 _public_6f74657
#define public_6f74664 _public_6f74664
#define public_6f74694 _public_6f74694
#define public_6f746a4 _public_6f746a4
#define public_6f746af _public_6f746af
#define public_6f746c2 _public_6f746c2
#define public_6f746ce _public_6f746ce
#define public_6f746d5 _public_6f746d5

PROC_DECLARE(0x6f74620, internal_6f74620, public_6f74620);
extern "C" NAKED register_t __cdecl internal_6f74620()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xA0]
        mov ecx, dword ptr ds : [esi+0x9C]
        cmp ecx, eax
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_6f74694
        public_6f74638 : nop
        cmp dword ptr ds : [ecx], edi
        je public_6f74643
        add ecx, 4
        cmp ecx, eax
        jne public_6f74638
        public_6f74643 : nop
        cmp ecx, eax
        je public_6f74694
        mov edx, dword ptr ds : [esi+0xA0]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_6f74664
        sub ecx, eax
        push ebp
        public_6f74657 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], ebp
        add eax, 4
        cmp eax, edx
        jne public_6f74657
        pop ebp
        public_6f74664 : nop
        mov edx, dword ptr ds : [esi+0xA0]
        lea eax, ss:[esp+0xC]
        push eax
        add edx, 0xFFFFFFFC
        push edi
        mov dword ptr ds : [esi+0xA0], edx
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        test eax, eax
        jne public_6f74694
        lea ecx, ss:[esp+0xC]
        push ecx
        call dword ptr ds : [public_6fb34f8]
        add esp, 4
        public_6f74694 : nop
        mov eax, dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [esi+0xAC]
        cmp ecx, eax
        je public_6f746d5
        public_6f746a4 : nop
        cmp dword ptr ds : [ecx], edi
        je public_6f746af
        add ecx, 4
        cmp ecx, eax
        jne public_6f746a4
        public_6f746af : nop
        cmp ecx, eax
        je public_6f746d5
        mov edx, dword ptr ds : [esi+0xB0]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_6f746ce
        sub ecx, eax
        public_6f746c2 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], edi
        add eax, 4
        cmp eax, edx
        jne public_6f746c2
        public_6f746ce : nop
        add dword ptr ds : [esi+0xB0], 0xFFFFFFFC
        public_6f746d5 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f74620)
    }
}

#undef public_6f74638
#undef public_6f74643
#undef public_6f74657
#undef public_6f74664
#undef public_6f74694
#undef public_6f746a4
#undef public_6f746af
#undef public_6f746c2
#undef public_6f746ce
#undef public_6f746d5
