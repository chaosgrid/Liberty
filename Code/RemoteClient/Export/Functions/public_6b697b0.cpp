#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b697f9 _public_6b697f9
#define public_6b69811 _public_6b69811
#define public_6b69821 _public_6b69821
#define public_6b69840 _public_6b69840
#define public_6b69850 _public_6b69850
#define public_6b69869 _public_6b69869
#define public_6b69871 _public_6b69871
#define public_6b69882 _public_6b69882
#define public_6b69892 _public_6b69892
#define public_6b698a4 _public_6b698a4
#define public_6b698b5 _public_6b698b5
#define public_6b698d1 _public_6b698d1
#define public_6b698e5 _public_6b698e5
#define public_6b698ee _public_6b698ee
#define public_6b69921 _public_6b69921

PROC_DECLARE(0x6b697b0, internal_6b697b0, public_6b697b0);
extern "C" NAKED register_t __cdecl internal_6b697b0()
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
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b697f9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b697f9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6b69811
        mov dword ptr ds : [esi+0xC], ebp
        public_6b69811 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b69821
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b69821 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b69840
        mov dword ptr ds : [esi+0xC], ebp
        public_6b69840 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b69850
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b69850 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x24]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        test ecx, ecx
        jne public_6b69869
        xor eax, eax
        jmp public_6b69871
        public_6b69869 : nop
        mov eax, dword ptr ds : [edi+0x30]
        sub eax, ecx
        sar eax, 2
        public_6b69871 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6b69882
        mov dword ptr ds : [esi+0xC], ebp
        public_6b69882 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6b69892
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b69892 : nop
        mov ecx, dword ptr ds : [ebx]
        mov word ptr ds : [ecx], ax
        mov eax, dword ptr ds : [edi+0x2C]
        add ecx, 2
        mov dword ptr ds : [ebx], ecx
        cmp eax, dword ptr ds : [edi+0x30]
        je public_6b698d1
        public_6b698a4 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6b698b5
        mov dword ptr ds : [esi+0xC], ebp
        public_6b698b5 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b698e5
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [edi+0x30]
        add eax, 4
        cmp eax, ecx
        jne public_6b698a4
        public_6b698d1 : nop
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b698ee
        public_6b698e5 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b698ee : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6b69921
        mov dword ptr ds : [ecx+0x10], esi
        public_6b69921 : nop
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
        UNREACHABLE_TRAP(0x6b697b0)
    }
}

#undef public_6b697f9
#undef public_6b69811
#undef public_6b69821
#undef public_6b69840
#undef public_6b69850
#undef public_6b69869
#undef public_6b69871
#undef public_6b69882
#undef public_6b69892
#undef public_6b698a4
#undef public_6b698b5
#undef public_6b698d1
#undef public_6b698e5
#undef public_6b698ee
#undef public_6b69921
