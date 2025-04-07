#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4df5b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4df5d0 _public_4df5d0
#define public_4df617 _public_4df617
#define public_4df62c _public_4df62c
#define public_4df640 _public_4df640
#define public_4df679 _public_4df679
#define public_4df687 _public_4df687
#define public_4df69c _public_4df69c
#define public_4df6bc _public_4df6bc
#define public_4df6c5 _public_4df6c5
#define public_4df6d9 _public_4df6d9
#define public_4df6ed _public_4df6ed
#define public_4df709 _public_4df709
#define public_4df72a _public_4df72a
#define public_4df742 _public_4df742

PROC_DECLARE(0x4df5b0, internal_4df5b0, public_4df5b0);
extern "C" NAKED register_t __cdecl internal_4df5b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp dword ptr ss : [esp+8], eax
        je public_4df742
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[ecx+0x14]
        lea edi, ds:[eax+0x14]
        lea ecx, ds:[ecx]
        public_4df5d0 : nop
        mov dx, word ptr ds : [eax-0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, 0x24
        sub edi, 0x24
        sub ecx, 0x24
        mov word ptr ds : [ecx], dx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edi-0x10]
        sub ebp, 0x24
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [edi-0xC]
        mov dword ptr ss : [ebp-0xC], ecx
        mov dl, byte ptr ds : [edi-8]
        mov byte ptr ss : [ebp-8], dl
        mov eax, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+4]
        mov ebx, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], edi
        jae public_4df617
        mov ebx, esi
        public_4df617 : nop
        lea ecx, ds:[edi-4]
        lea edx, ss:[ebp-4]
        cmp edx, ecx
        jne public_4df687
        cmp dword ptr ss : [ebp+4], ebx
        jae public_4df62c
        call dword ptr ds : [public_5c7064]
        public_4df62c : nop
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+4]
        sub eax, ebx
        cmp eax, esi
        jae public_4df640
        mov esi, eax
        public_4df640 : nop
        test esi, esi
        jbe public_4df679
        mov ecx, dword ptr ss : [ebp]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+4]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4df679
        push ebx
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c706c]
        public_4df679 : nop
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c7068]
        jmp public_4df72a
        public_4df687 : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_4df6ed
        cmp ebx, eax
        jne public_4df6ed
        mov eax, dword ptr ds : [edi]
        cmp eax, esi
        jne public_4df69c
        mov eax, dword ptr ds : [public_5c7078]
        public_4df69c : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4df6ed
        mov eax, dword ptr ss : [ebp]
        cmp eax, esi
        je public_4df6c5
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4df6bc
        cmp cl, 0xFF
        je public_4df6bc
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4df6c5
        public_4df6bc : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4df6c5 : nop
        mov dword ptr ss : [ebp], esi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov eax, dword ptr ds : [edi]
        cmp eax, esi
        jne public_4df6d9
        mov eax, dword ptr ds : [public_5c7078]
        public_4df6d9 : nop
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], edx
        inc byte ptr ds : [eax-1]
        jmp public_4df72a
        public_4df6ed : nop
        push 1
        push ebx
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4df72a
        mov esi, dword ptr ds : [edi]
        test esi, esi
        jne public_4df709
        mov esi, dword ptr ds : [public_5c7078]
        public_4df709 : nop
        mov edi, dword ptr ss : [ebp]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+4], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_4df72a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        jne public_4df5d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_4df742 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4df5b0)
    }
}

#undef public_4df5d0
#undef public_4df617
#undef public_4df62c
#undef public_4df640
#undef public_4df679
#undef public_4df687
#undef public_4df69c
#undef public_4df6bc
#undef public_4df6c5
#undef public_4df6d9
#undef public_4df6ed
#undef public_4df709
#undef public_4df72a
#undef public_4df742
