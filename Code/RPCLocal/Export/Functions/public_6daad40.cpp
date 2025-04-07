#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daad84 _public_6daad84
#define public_6daad9c _public_6daad9c
#define public_6daadc6 _public_6daadc6
#define public_6daadf0 _public_6daadf0
#define public_6daae1a _public_6daae1a
#define public_6daae4c _public_6daae4c
#define public_6daae84 _public_6daae84
#define public_6daaec2 _public_6daaec2
#define public_6daaece _public_6daaece

PROC_DECLARE(0x6daad40, internal_6daad40, public_6daad40);
extern "C" NAKED register_t __cdecl internal_6daad40()
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
        je public_6daad84
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daad84 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6daad9c
        mov dword ptr ds : [esi+0xC], ecx
        public_6daad9c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daaece
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6daadc6
        mov dword ptr ds : [esi+0xC], ecx
        public_6daadc6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daaece
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6daadf0
        mov dword ptr ds : [esi+0xC], ecx
        public_6daadf0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daaece
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6daae1a
        mov dword ptr ds : [esi+0xC], ecx
        public_6daae1a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daaece
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x2C]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daae4c
        mov dword ptr ds : [esi+0xC], 0x17
        public_6daae4c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daaece
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x38]
        call public_6d8f4f0
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        add ebp, 0x10
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daae84
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daae84 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
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
        jbe public_6daaec2
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6daaec2 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6daaece : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6daad40)
    }
}

#undef public_6daad84
#undef public_6daad9c
#undef public_6daadc6
#undef public_6daadf0
#undef public_6daae1a
#undef public_6daae4c
#undef public_6daae84
#undef public_6daaec2
#undef public_6daaece
