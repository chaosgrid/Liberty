#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5c680 _public_6b5c680
#define public_6b5c69a _public_6b5c69a
#define public_6b5c6d6 _public_6b5c6d6
#define public_6b5c6fe _public_6b5c6fe
#define public_6b5c728 _public_6b5c728
#define public_6b5c750 _public_6b5c750
#define public_6b5c77a _public_6b5c77a
#define public_6b5c7a2 _public_6b5c7a2
#define public_6b5c7d3 _public_6b5c7d3
#define public_6b5c7fa _public_6b5c7fa
#define public_6b5c821 _public_6b5c821
#define public_6b5c842 _public_6b5c842
#define public_6b5c8c7 _public_6b5c8c7
#define public_6b5c905 _public_6b5c905
#define public_6b5c911 _public_6b5c911

PROC_DECLARE(0x6b5c640, internal_6b5c640, public_6b5c640);
extern "C" NAKED register_t __cdecl internal_6b5c640()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        xor ebp, ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+0xC], ebp
        call public_6b4e780
        cmp eax, ebp
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5c680
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6b5c680 : nop
        mov dword ptr ds : [edi+0x20], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5c69a
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b5c69a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        push ecx
        call dword ptr ds : [public_6b6b018]
        mov dword ptr ds : [edi+0x24], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6b5c6d6
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5c6d6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b5c6fe
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5c6fe : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x2C], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b5c728
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5c728 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x30], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b5c750
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5c750 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x34], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b5c77a
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5c77a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x38], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b5c7a2
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5c7a2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, ebp
        jne public_6b5c911
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x3C]
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6b5c7d3
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5c7d3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        inc edx
        mov byte ptr ss : [esp+0x18], cl
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5c7fa
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5c7fa : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+4]
        mov byte ptr ss : [esp+0x13], dl
        mov edx, dword ptr ds : [esi]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5c821
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5c821 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b5c842
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5c842 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5c911
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        movsx eax, byte ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        movsx eax, byte ptr ss : [esp+0x13]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        fmul qword ptr ds : [public_6b6c1e8]
        movsx edx, dl
        movsx eax, cl
        fstp dword ptr ds : [edi+0x4C]
        fild dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], edx
        fmul qword ptr ds : [public_6b6c1e8]
        push esi
        push ecx
        push ebx
        fstp dword ptr ds : [edi+0x50]
        mov ecx, edi
        fild dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ds : [edi+0x54]
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ds : [edi+0x48]
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5c8c7
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6b5c8c7 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6b4ecd0
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
        jbe public_6b5c905
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b5c905 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b5c911 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b5c640)
    }
}

#undef public_6b5c680
#undef public_6b5c69a
#undef public_6b5c6d6
#undef public_6b5c6fe
#undef public_6b5c728
#undef public_6b5c750
#undef public_6b5c77a
#undef public_6b5c7a2
#undef public_6b5c7d3
#undef public_6b5c7fa
#undef public_6b5c821
#undef public_6b5c842
#undef public_6b5c8c7
#undef public_6b5c905
#undef public_6b5c911
