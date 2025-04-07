#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b45890);
CLANG_FORWARD_PROC_SYMBOL(public_6b459e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b458b1 _public_6b458b1
#define public_6b458c0 _public_6b458c0
#define public_6b458d3 _public_6b458d3
#define public_6b4590d _public_6b4590d
#define public_6b4591c _public_6b4591c
#define public_6b45932 _public_6b45932
#define public_6b45952 _public_6b45952
#define public_6b4595e _public_6b4595e
#define public_6b45973 _public_6b45973
#define public_6b45991 _public_6b45991
#define public_6b459af _public_6b459af
#define public_6b459b8 _public_6b459b8
#define public_6b459c7 _public_6b459c7
#define public_6b459d3 _public_6b459d3

PROC_DECLARE(0x6b45890, internal_6b45890, public_6b45890);
extern "C" NAKED register_t __cdecl internal_6b45890()
{
    __asm
    {
        or byte ptr ds : [ecx+0x20], 0x10
        mov eax, dword ptr ds : [public_6b6b180]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push edi
        mov edi, eax
        cmp ebp, edi
        lea esi, ds:[ecx+0x40]
        jae public_6b458b1
        mov edi, ebp
        public_6b458b1 : nop
        cmp esi, ebx
        jne public_6b4591c
        cmp dword ptr ds : [esi+8], edi
        jae public_6b458c0
        call dword ptr ds : [public_6b6b124]
        public_6b458c0 : nop
        mov ecx, esi
        call dword ptr ds : [public_6b6b148]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebp
        jae public_6b458d3
        mov ebp, eax
        public_6b458d3 : nop
        test ebp, ebp
        jbe public_6b4590d
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[edi+ebp]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6b459e0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6b6b13c]
        test al, al
        je public_6b4590d
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6b6b144]
        public_6b4590d : nop
        mov ecx, esi
        call dword ptr ds : [public_6b6b148]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6b4591c : nop
        xor ebp, ebp
        cmp edi, ebp
        jbe public_6b45991
        cmp edi, eax
        jne public_6b45991
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6b45932
        mov eax, dword ptr ds : [public_6b6b138]
        public_6b45932 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6b45991
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        je public_6b4595e
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6b45952
        cmp cl, 0xFF
        je public_6b45952
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6b4595e
        public_6b45952 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4595e : nop
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6b45973
        mov eax, dword ptr ds : [public_6b6b138]
        public_6b45973 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        ret 4
        public_6b45991 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6b6b13c]
        test al, al
        je public_6b459d3
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, dword ptr ds : [public_6b6b138]
        je public_6b459af
        mov ecx, ebx
        public_6b459af : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6b459c7
        mov edx, edi
        public_6b459b8 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6b459b8
        public_6b459c7 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6b459d3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b45890)
    }
}

#undef public_6b458b1
#undef public_6b458c0
#undef public_6b458d3
#undef public_6b4590d
#undef public_6b4591c
#undef public_6b45932
#undef public_6b45952
#undef public_6b4595e
#undef public_6b45973
#undef public_6b45991
#undef public_6b459af
#undef public_6b459b8
#undef public_6b459c7
#undef public_6b459d3
