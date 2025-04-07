#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e640);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4e6b8 _public_6f4e6b8
#define public_6f4e6ca _public_6f4e6ca
#define public_6f4e6d9 _public_6f4e6d9
#define public_6f4e6ec _public_6f4e6ec
#define public_6f4e726 _public_6f4e726
#define public_6f4e733 _public_6f4e733
#define public_6f4e749 _public_6f4e749
#define public_6f4e769 _public_6f4e769
#define public_6f4e775 _public_6f4e775
#define public_6f4e78a _public_6f4e78a
#define public_6f4e79e _public_6f4e79e
#define public_6f4e7ba _public_6f4e7ba
#define public_6f4e7c3 _public_6f4e7c3
#define public_6f4e7d2 _public_6f4e7d2
#define public_6f4e7de _public_6f4e7de
#define public_6f4e7f0 _public_6f4e7f0

PROC_DECLARE(0x6f4e6a0, internal_6f4e6a0, public_6f4e6a0);
extern "C" NAKED register_t __cdecl internal_6f4e6a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, eax
        je public_6f4e7f0
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push edi
        public_6f4e6b8 : nop
        mov eax, dword ptr ds : [public_6fb32cc]
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+8]
        mov edi, eax
        cmp ebp, edi
        jae public_6f4e6ca
        mov edi, ebp
        public_6f4e6ca : nop
        cmp esi, ebx
        jne public_6f4e733
        cmp dword ptr ds : [esi+8], edi
        jae public_6f4e6d9
        call dword ptr ds : [public_6fb32e4]
        public_6f4e6d9 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb32b8]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebp
        jae public_6f4e6ec
        mov ebp, eax
        public_6f4e6ec : nop
        test ebp, ebp
        jbe public_6f4e726
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[edi+ebp]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6f4e640
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32b4]
        test al, al
        je public_6f4e726
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32d4]
        public_6f4e726 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb32b8]
        jmp public_6f4e7de
        public_6f4e733 : nop
        xor ebp, ebp
        cmp edi, ebp
        jbe public_6f4e79e
        cmp edi, eax
        jne public_6f4e79e
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6f4e749
        mov eax, dword ptr ds : [public_6fb32c0]
        public_6f4e749 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f4e79e
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        je public_6f4e775
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4e769
        cmp cl, 0xFF
        je public_6f4e769
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6f4e775
        public_6f4e769 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4e775 : nop
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6f4e78a
        mov eax, dword ptr ds : [public_6fb32c0]
        public_6f4e78a : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6f4e7de
        public_6f4e79e : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32b4]
        test al, al
        je public_6f4e7de
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6f4e7ba
        mov ecx, dword ptr ds : [public_6fb32c0]
        public_6f4e7ba : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6f4e7d2
        mov edx, edi
        public_6f4e7c3 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6f4e7c3
        public_6f4e7d2 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6f4e7de : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x10
        cmp esi, eax
        jne public_6f4e6b8
        pop edi
        pop ebp
        pop ebx
        public_6f4e7f0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e6a0)
    }
}

#undef public_6f4e6b8
#undef public_6f4e6ca
#undef public_6f4e6d9
#undef public_6f4e6ec
#undef public_6f4e726
#undef public_6f4e733
#undef public_6f4e749
#undef public_6f4e769
#undef public_6f4e775
#undef public_6f4e78a
#undef public_6f4e79e
#undef public_6f4e7ba
#undef public_6f4e7c3
#undef public_6f4e7d2
#undef public_6f4e7de
#undef public_6f4e7f0
