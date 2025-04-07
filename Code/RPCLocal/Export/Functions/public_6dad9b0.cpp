#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dad9f9 _public_6dad9f9
#define public_6dada11 _public_6dada11
#define public_6dada21 _public_6dada21
#define public_6dada40 _public_6dada40
#define public_6dada50 _public_6dada50
#define public_6dada6f _public_6dada6f
#define public_6dada7f _public_6dada7f
#define public_6dadaa0 _public_6dadaa0
#define public_6dadab0 _public_6dadab0
#define public_6dadad1 _public_6dadad1
#define public_6dadae1 _public_6dadae1
#define public_6dadaff _public_6dadaff
#define public_6dadb0f _public_6dadb0f
#define public_6dadb36 _public_6dadb36
#define public_6dadb67 _public_6dadb67

PROC_DECLARE(0x6dad9b0, internal_6dad9b0, public_6dad9b0);
extern "C" NAKED register_t __cdecl internal_6dad9b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dad9f9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dad9f9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6dada11
        mov dword ptr ds : [esi+0xC], ebp
        public_6dada11 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dada21
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dada21 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dada40
        mov dword ptr ds : [esi+0xC], ebp
        public_6dada40 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dada50
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dada50 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dada6f
        mov dword ptr ds : [esi+0xC], ebp
        public_6dada6f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dada7f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dada7f : nop
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [edi+0x28]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dadaa0
        mov dword ptr ds : [esi+0xC], ebp
        public_6dadaa0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dadab0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dadab0 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2A]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dadad1
        mov dword ptr ds : [esi+0xC], ebp
        public_6dadad1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dadae1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dadae1 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x2C]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dadaff
        mov dword ptr ds : [esi+0xC], ebp
        public_6dadaff : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dadb0f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dadb0f : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x30]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dadb36
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6dadb36 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6dadb67
        mov dword ptr ds : [ecx+0x10], esi
        public_6dadb67 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6dad9b0)
    }
}

#undef public_6dad9f9
#undef public_6dada11
#undef public_6dada21
#undef public_6dada40
#undef public_6dada50
#undef public_6dada6f
#undef public_6dada7f
#undef public_6dadaa0
#undef public_6dadab0
#undef public_6dadad1
#undef public_6dadae1
#undef public_6dadaff
#undef public_6dadb0f
#undef public_6dadb36
#undef public_6dadb67
