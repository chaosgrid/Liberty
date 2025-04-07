#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bfa820);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bfa6f1 _public_6bfa6f1
#define public_6bfa700 _public_6bfa700
#define public_6bfa713 _public_6bfa713
#define public_6bfa74d _public_6bfa74d
#define public_6bfa75c _public_6bfa75c
#define public_6bfa772 _public_6bfa772
#define public_6bfa792 _public_6bfa792
#define public_6bfa79e _public_6bfa79e
#define public_6bfa7b3 _public_6bfa7b3
#define public_6bfa7d1 _public_6bfa7d1
#define public_6bfa7ef _public_6bfa7ef
#define public_6bfa7f8 _public_6bfa7f8
#define public_6bfa807 _public_6bfa807
#define public_6bfa813 _public_6bfa813

PROC_DECLARE(0x6bfa6d0, internal_6bfa6d0, public_6bfa6d0);
extern "C" NAKED register_t __cdecl internal_6bfa6d0()
{
    __asm
    {
        or byte ptr ds : [ecx+0x20], 0x10
        mov eax, dword ptr ds : [public_6c0b1b8]
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
        jae public_6bfa6f1
        mov edi, ebp
        public_6bfa6f1 : nop
        cmp esi, ebx
        jne public_6bfa75c
        cmp dword ptr ds : [esi+8], edi
        jae public_6bfa700
        call dword ptr ds : [public_6c0b16c]
        public_6bfa700 : nop
        mov ecx, esi
        call dword ptr ds : [public_6c0b1a0]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebp
        jae public_6bfa713
        mov ebp, eax
        public_6bfa713 : nop
        test ebp, ebp
        jbe public_6bfa74d
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[edi+ebp]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6bfa820
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6c0b178]
        test al, al
        je public_6bfa74d
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6c0b1a8]
        public_6bfa74d : nop
        mov ecx, esi
        call dword ptr ds : [public_6c0b1a0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6bfa75c : nop
        xor ebp, ebp
        cmp edi, ebp
        jbe public_6bfa7d1
        cmp edi, eax
        jne public_6bfa7d1
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6bfa772
        mov eax, dword ptr ds : [public_6c0b17c]
        public_6bfa772 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6bfa7d1
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        je public_6bfa79e
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6bfa792
        cmp cl, 0xFF
        je public_6bfa792
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6bfa79e
        public_6bfa792 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bfa79e : nop
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6bfa7b3
        mov eax, dword ptr ds : [public_6c0b17c]
        public_6bfa7b3 : nop
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
        public_6bfa7d1 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6c0b178]
        test al, al
        je public_6bfa813
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, dword ptr ds : [public_6c0b17c]
        je public_6bfa7ef
        mov ecx, ebx
        public_6bfa7ef : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6bfa807
        mov edx, edi
        public_6bfa7f8 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6bfa7f8
        public_6bfa807 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6bfa813 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bfa6d0)
    }
}

#undef public_6bfa6f1
#undef public_6bfa700
#undef public_6bfa713
#undef public_6bfa74d
#undef public_6bfa75c
#undef public_6bfa772
#undef public_6bfa792
#undef public_6bfa79e
#undef public_6bfa7b3
#undef public_6bfa7d1
#undef public_6bfa7ef
#undef public_6bfa7f8
#undef public_6bfa807
#undef public_6bfa813
