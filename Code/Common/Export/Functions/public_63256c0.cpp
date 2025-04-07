#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329c70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63256e8 _public_63256e8
#define public_63256f9 _public_63256f9
#define public_632570c _public_632570c
#define public_6325746 _public_6325746
#define public_632575a _public_632575a
#define public_6325770 _public_6325770
#define public_6325790 _public_6325790
#define public_63257a0 _public_63257a0
#define public_63257b5 _public_63257b5
#define public_63257d6 _public_63257d6
#define public_63257f4 _public_63257f4
#define public_6325800 _public_6325800
#define public_632580f _public_632580f
#define public_632581b _public_632581b

PROC_DECLARE(0x63256c0, internal_63256c0, public_63256c0);
extern "C" NAKED register_t __cdecl internal_63256c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov edx, ecx
        mov ecx, dword ptr ds : [public_6399170]
        push ebp
        lea ebp, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov edi, ecx
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], edx
        lea esi, ds:[edx+4]
        jae public_63256e8
        mov edi, eax
        public_63256e8 : nop
        cmp esi, ebp
        jne public_632575a
        mov ebp, eax
        cmp dword ptr ds : [esi+8], edi
        jae public_63256f9
        call dword ptr ds : [public_63991c4]
        public_63256f9 : nop
        mov ecx, esi
        call dword ptr ds : [public_63991c8]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebp
        jae public_632570c
        mov ebp, eax
        public_632570c : nop
        test ebp, ebp
        jbe public_6325746
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[edi+ebp]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6329c70
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_6325746
        push edi
        mov ecx, esi
        call dword ptr ds : [public_639916c]
        public_6325746 : nop
        mov ecx, esi
        call dword ptr ds : [public_63991c8]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_632575a : nop
        xor ebx, ebx
        cmp edi, ebx
        jbe public_63257d6
        cmp edi, ecx
        jne public_63257d6
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        jne public_6325770
        mov eax, dword ptr ds : [public_639914c]
        public_6325770 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_63257d6
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_63257a0
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6325790
        cmp cl, 0xFF
        je public_6325790
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_63257a0
        public_6325790 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        public_63257a0 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        jne public_63257b5
        mov eax, dword ptr ds : [public_639914c]
        public_63257b5 : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        mov eax, edx
        pop ebx
        pop ecx
        ret 4
        public_63257d6 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_632581b
        mov ebp, dword ptr ss : [ebp+4]
        test ebp, ebp
        mov ecx, dword ptr ds : [public_639914c]
        je public_63257f4
        mov ecx, ebp
        public_63257f4 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_632580f
        mov edx, edi
        lea ecx, ds:[ecx]
        public_6325800 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6325800
        public_632580f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_632581b : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x63256c0)
    }
}

#undef public_63256e8
#undef public_63256f9
#undef public_632570c
#undef public_6325746
#undef public_632575a
#undef public_6325770
#undef public_6325790
#undef public_63257a0
#undef public_63257b5
#undef public_63257d6
#undef public_63257f4
#undef public_6325800
#undef public_632580f
#undef public_632581b
