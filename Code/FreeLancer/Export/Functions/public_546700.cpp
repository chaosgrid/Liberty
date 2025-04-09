#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_54672b _public_54672b
#define public_54672d _public_54672d
#define public_546762 _public_546762
#define public_546764 _public_546764
#define public_5467a5 _public_5467a5
#define public_5467c9 _public_5467c9
#define public_5467cb _public_5467cb
#define public_5467d8 _public_5467d8

PROC_DECLARE(0x546700, internal_546700, public_546700);
extern "C" NAKED register_t __cdecl internal_546700()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        push edi
        lea edi, ds:[ebx-4]
        test edi, edi
        je public_54672b
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_54672b
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_54672b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_54672d
        public_54672b : nop
        xor eax, eax
        public_54672d : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6d0c]
        cmp eax, dword ptr ss : [esp+0x10]
        je public_5467d8
        test edi, edi
        je public_546762
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_546762
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_546762
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_546764
        public_546762 : nop
        xor eax, eax
        public_546764 : nop
        push esi
        push 0x20000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        mov esi, eax
        test esi, esi
        je public_5467a5
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_5467a5
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        mov esi, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0xC], ecx
        call public_54bb00
        push eax
        push 1
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebx
        call dword ptr ds : [esi+0x4C]
        public_5467a5 : nop
        test edi, edi
        pop esi
        je public_5467c9
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_5467c9
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5467c9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_5467cb
        public_5467c9 : nop
        xor eax, eax
        public_5467cb : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6b08]
        public_5467d8 : nop
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x546700)
    }
}

#undef public_54672b
#undef public_54672d
#undef public_546762
#undef public_546764
#undef public_5467a5
#undef public_5467c9
#undef public_5467cb
#undef public_5467d8
