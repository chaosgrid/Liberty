#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dab9a4 _public_6dab9a4
#define public_6dab9bb _public_6dab9bb
#define public_6dab9ed _public_6dab9ed
#define public_6daba1f _public_6daba1f
#define public_6daba4d _public_6daba4d
#define public_6daba81 _public_6daba81
#define public_6dababd _public_6dababd
#define public_6dabac9 _public_6dabac9

PROC_DECLARE(0x6dab960, internal_6dab960, public_6dab960);
extern "C" NAKED register_t __cdecl internal_6dab960()
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
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dab9a4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dab9a4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab9bb
        mov dword ptr ds : [esi+0xC], 0x17
        public_6dab9bb : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dabac9
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x20]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab9ed
        mov dword ptr ds : [esi+0xC], 0x17
        public_6dab9ed : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dabac9
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x2C]
        call public_6d8f4f0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daba1f
        mov dword ptr ds : [esi+0xC], 0x17
        public_6daba1f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dabac9
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x3C], edx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daba4d
        mov dword ptr ds : [esi+0xC], 0x17
        public_6daba4d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dabac9
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        mov dword ptr ds : [edi+0x40], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daba81
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daba81 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6dababd
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6dababd : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dabac9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dab960)
    }
}

#undef public_6dab9a4
#undef public_6dab9bb
#undef public_6dab9ed
#undef public_6daba1f
#undef public_6daba4d
#undef public_6daba81
#undef public_6dababd
#undef public_6dabac9
