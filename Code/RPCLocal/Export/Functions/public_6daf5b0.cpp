#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1580);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6daf5f2 _public_6daf5f2
#define public_6daf614 _public_6daf614
#define public_6daf634 _public_6daf634
#define public_6daf64c _public_6daf64c
#define public_6daf677 _public_6daf677
#define public_6daf6a2 _public_6daf6a2
#define public_6daf6cd _public_6daf6cd
#define public_6daf700 _public_6daf700
#define public_6daf73e _public_6daf73e
#define public_6daf74a _public_6daf74a

PROC_DECLARE(0x6daf5b0, internal_6daf5b0, public_6daf5b0);
extern "C" NAKED register_t __cdecl internal_6daf5b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daf5f2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daf5f2 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
        push esi
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_6da1580
        test eax, eax
        je public_6daf614
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daf614 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6daf634
        push eax
        lea eax, ds:[edi+0x20]
        push eax
        call dword ptr ds : [public_6db31fc]
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_6db1dc2
        add esp, 0xC
        public_6daf634 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6daf64c
        mov dword ptr ds : [esi+0xC], ecx
        public_6daf64c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daf74a
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0xA0], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6daf677
        mov dword ptr ds : [esi+0xC], ecx
        public_6daf677 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daf74a
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0xA4], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6daf6a2
        mov dword ptr ds : [esi+0xC], ecx
        public_6daf6a2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daf74a
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0xA8], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6daf6cd
        mov dword ptr ds : [esi+0xC], ecx
        public_6daf6cd : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daf74a
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0xAC], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daf700
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daf700 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6daf73e
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6daf73e : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6daf74a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6daf5b0)
    }
}

#undef public_6daf5f2
#undef public_6daf614
#undef public_6daf634
#undef public_6daf64c
#undef public_6daf677
#undef public_6daf6a2
#undef public_6daf6cd
#undef public_6daf700
#undef public_6daf73e
#undef public_6daf74a
