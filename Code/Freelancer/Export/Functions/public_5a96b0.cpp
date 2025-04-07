#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4899c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a96b0);

#define public_5a96e9 _public_5a96e9
#define public_5a96f9 _public_5a96f9
#define public_5a970c _public_5a970c
#define public_5a9745 _public_5a9745
#define public_5a9757 _public_5a9757
#define public_5a976b _public_5a976b
#define public_5a9787 _public_5a9787
#define public_5a97a8 _public_5a97a8
#define public_5a97c6 _public_5a97c6
#define public_5a97d0 _public_5a97d0
#define public_5a97df _public_5a97df
#define public_5a97eb _public_5a97eb

PROC_DECLARE(0x5a96b0, internal_5a96b0, public_5a96b0);
extern "C" NAKED register_t __cdecl internal_5a96b0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [ecx+0x188]
        push ebx
        push ebp
        lea ebx, ds:[ecx+0x188]
        xor ebp, ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+8]
        push edi
        mov edi, ecx
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ebp
        jae public_5a96e9
        mov edi, eax
        public_5a96e9 : nop
        cmp esi, ebx
        jne public_5a9757
        cmp edi, ebp
        mov ebx, eax
        jbe public_5a96f9
        call dword ptr ds : [public_5c7064]
        public_5a96f9 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6fc4]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_5a970c
        mov ebx, eax
        public_5a970c : nop
        cmp ebx, ebp
        jbe public_5a9745
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_4899c0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push ebp
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5a9745
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_5a9745 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6fc4]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_5a9757 : nop
        cmp edi, ebp
        jbe public_5a97a8
        cmp edi, ecx
        jne public_5a97a8
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_5a976b
        mov eax, dword ptr ds : [public_5c700c]
        public_5a976b : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_5a97a8
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_5a9787
        mov eax, dword ptr ds : [public_5c700c]
        public_5a9787 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        inc cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_5a97a8 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5a97eb
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, dword ptr ds : [public_5c700c]
        je public_5a97c6
        mov ecx, ebx
        public_5a97c6 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_5a97df
        mov edx, edi
        nop 
        public_5a97d0 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_5a97d0
        public_5a97df : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_5a97eb : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5a96b0)
    }
}

#undef public_5a96e9
#undef public_5a96f9
#undef public_5a970c
#undef public_5a9745
#undef public_5a9757
#undef public_5a976b
#undef public_5a9787
#undef public_5a97a8
#undef public_5a97c6
#undef public_5a97d0
#undef public_5a97df
#undef public_5a97eb
