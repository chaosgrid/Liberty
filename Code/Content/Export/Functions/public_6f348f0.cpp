#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f348f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dfd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f587d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f3493a _public_6f3493a
#define public_6f34955 _public_6f34955
#define public_6f34972 _public_6f34972
#define public_6f34983 _public_6f34983
#define public_6f34990 _public_6f34990
#define public_6f3499b _public_6f3499b
#define public_6f3499d _public_6f3499d
#define public_6f349ad _public_6f349ad
#define public_6f349b7 _public_6f349b7
#define public_6f349d0 _public_6f349d0
#define public_6f349fe _public_6f349fe
#define public_6f34a38 _public_6f34a38

PROC_DECLARE(0x6f348f0, internal_6f348f0, public_6f348f0);
extern "C" NAKED register_t __cdecl internal_6f348f0()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        je public_6f34a38
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+8]
        push ebx
        lea ecx, ss:[ebp+0x50]
        mov dword ptr ss : [ebp+0x7C], eax
        mov eax, dword ptr ds : [edi+4]
        push ecx
        push eax
        mov dword ptr ss : [ebp+0x74], eax
        call public_6f587d0
        mov eax, dword ptr ss : [ebp+8]
        add esp, 8
        test eax, eax
        jne public_6f34972
        mov ecx, edi
        call dword ptr ds : [public_6fb3074]
        mov esi, eax
        test esi, esi
        jne public_6f3493a
        mov dword ptr ss : [ebp+8], eax
        mov byte ptr ss : [ebp+0xC], al
        jmp public_6f34972
        public_6f3493a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0xC]
        jb public_6f34955
        mov eax, 0x2F
        public_6f34955 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+8], eax
        public_6f34972 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0xC0], ecx
        mov esi, dword ptr ds : [edi+0x18]
        cmp esi, dword ptr ds : [edi+0x1C]
        je public_6f349b7
        public_6f34983 : nop
        mov eax, dword ptr ss : [ebp+0x54]
        mov ecx, dword ptr ss : [ebp+0x58]
        cmp eax, ecx
        je public_6f3499b
        mov edx, dword ptr ds : [esi]
        nop 
        public_6f34990 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f3499d
        add eax, 4
        cmp eax, ecx
        jne public_6f34990
        public_6f3499b : nop
        mov eax, ecx
        public_6f3499d : nop
        cmp eax, ecx
        jne public_6f349ad
        push esi
        push 1
        push ecx
        lea ecx, ss:[ebp+0x50]
        call public_6f937c0
        public_6f349ad : nop
        mov eax, dword ptr ds : [edi+0x1C]
        add esi, 4
        cmp esi, eax
        jne public_6f34983
        public_6f349b7 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3030]
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        pop ebx
        je public_6f349d0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edx
        public_6f349d0 : nop
        lea esi, ds:[edi+0xC]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f349fe
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[ebp+0x100]
        lea edx, ss:[ebp+0x124]
        mov dword ptr ds : [eax], ecx
        push edx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call public_6f3dfd0
        add esp, 0xC
        public_6f349fe : nop
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ss : [ebp+0x500], edx
        je public_6f34a38
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f34a38
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp+0x100], eax
        add ebp, 0x124
        push ebp
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        call public_6f3dfd0
        add esp, 0xC
        public_6f34a38 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f348f0)
    }
}

#undef public_6f3493a
#undef public_6f34955
#undef public_6f34972
#undef public_6f34983
#undef public_6f34990
#undef public_6f3499b
#undef public_6f3499d
#undef public_6f349ad
#undef public_6f349b7
#undef public_6f349d0
#undef public_6f349fe
#undef public_6f34a38
