#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dadbc2 _public_6dadbc2
#define public_6dadbda _public_6dadbda
#define public_6dadc02 _public_6dadc02
#define public_6dadc2a _public_6dadc2a
#define public_6dadc54 _public_6dadc54
#define public_6dadc7e _public_6dadc7e
#define public_6dadca4 _public_6dadca4
#define public_6dadcd2 _public_6dadcd2
#define public_6dadd10 _public_6dadd10
#define public_6dadd1c _public_6dadd1c

PROC_DECLARE(0x6dadb80, internal_6dadb80, public_6dadb80);
extern "C" NAKED register_t __cdecl internal_6dadb80()
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
        je public_6dadbc2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dadbc2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6dadbda
        mov dword ptr ds : [esi+0xC], ecx
        public_6dadbda : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dadd1c
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dadc02
        mov dword ptr ds : [esi+0xC], ecx
        public_6dadc02 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dadd1c
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dadc2a
        mov dword ptr ds : [esi+0xC], ecx
        public_6dadc2a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dadd1c
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x28], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dadc54
        mov dword ptr ds : [esi+0xC], ecx
        public_6dadc54 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dadd1c
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x2A], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dadc7e
        mov dword ptr ds : [esi+0xC], ecx
        public_6dadc7e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dadd1c
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x2C], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dadca4
        mov dword ptr ds : [esi+0xC], ecx
        public_6dadca4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dadd1c
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        push esi
        push ebp
        mov byte ptr ds : [edi+0x30], cl
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dadcd2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dadcd2 : nop
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
        jbe public_6dadd10
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6dadd10 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dadd1c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dadb80)
    }
}

#undef public_6dadbc2
#undef public_6dadbda
#undef public_6dadc02
#undef public_6dadc2a
#undef public_6dadc54
#undef public_6dadc7e
#undef public_6dadca4
#undef public_6dadcd2
#undef public_6dadd10
#undef public_6dadd1c
