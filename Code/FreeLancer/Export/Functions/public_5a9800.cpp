#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4899c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a9800);

#define public_5a9839 _public_5a9839
#define public_5a9849 _public_5a9849
#define public_5a985c _public_5a985c
#define public_5a9895 _public_5a9895
#define public_5a98a7 _public_5a98a7
#define public_5a98bb _public_5a98bb
#define public_5a98d7 _public_5a98d7
#define public_5a98f8 _public_5a98f8
#define public_5a9916 _public_5a9916
#define public_5a9920 _public_5a9920
#define public_5a992f _public_5a992f
#define public_5a993b _public_5a993b

PROC_DECLARE(0x5a9800, internal_5a9800, public_5a9800);
extern "C" NAKED register_t __cdecl internal_5a9800()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [ecx+0x198]
        push ebx
        push ebp
        lea ebx, ds:[ecx+0x198]
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
        jae public_5a9839
        mov edi, eax
        public_5a9839 : nop
        cmp esi, ebx
        jne public_5a98a7
        cmp edi, ebp
        mov ebx, eax
        jbe public_5a9849
        call dword ptr ds : [public_5c7064]
        public_5a9849 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6fc4]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_5a985c
        mov ebx, eax
        public_5a985c : nop
        cmp ebx, ebp
        jbe public_5a9895
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
        je public_5a9895
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c7054]
        public_5a9895 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6fc4]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_5a98a7 : nop
        cmp edi, ebp
        jbe public_5a98f8
        cmp edi, ecx
        jne public_5a98f8
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_5a98bb
        mov eax, dword ptr ds : [public_5c700c]
        public_5a98bb : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_5a98f8
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_5a98d7
        mov eax, dword ptr ds : [public_5c700c]
        public_5a98d7 : nop
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
        public_5a98f8 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5a993b
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, dword ptr ds : [public_5c700c]
        je public_5a9916
        mov ecx, ebx
        public_5a9916 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_5a992f
        mov edx, edi
        nop 
        public_5a9920 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_5a9920
        public_5a992f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_5a993b : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5a9800)
    }
}

#undef public_5a9839
#undef public_5a9849
#undef public_5a985c
#undef public_5a9895
#undef public_5a98a7
#undef public_5a98bb
#undef public_5a98d7
#undef public_5a98f8
#undef public_5a9916
#undef public_5a9920
#undef public_5a992f
#undef public_5a993b
