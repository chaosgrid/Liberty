#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daa9d2 _public_6daa9d2
#define public_6daa9ea _public_6daa9ea
#define public_6daaa10 _public_6daaa10
#define public_6daaa34 _public_6daaa34
#define public_6daaa58 _public_6daaa58
#define public_6daaa86 _public_6daaa86
#define public_6daaac4 _public_6daaac4
#define public_6daaad0 _public_6daaad0

PROC_DECLARE(0x6daa990, internal_6daa990, public_6daa990);
extern "C" NAKED register_t __cdecl internal_6daa990()
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
        je public_6daa9d2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daa9d2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6daa9ea
        mov dword ptr ds : [esi+0xC], ecx
        public_6daa9ea : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daaad0
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6daaa10
        mov dword ptr ds : [esi+0xC], ecx
        public_6daaa10 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daaad0
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov byte ptr ds : [edi+0x24], dl
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6daaa34
        mov dword ptr ds : [esi+0xC], ecx
        public_6daaa34 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daaad0
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov byte ptr ds : [edi+0x25], dl
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6daaa58
        mov dword ptr ds : [esi+0xC], ecx
        public_6daaa58 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daaad0
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        push esi
        push ebp
        mov byte ptr ds : [edi+0x26], cl
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daaa86
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daaa86 : nop
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
        jbe public_6daaac4
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6daaac4 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6daaad0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6daa990)
    }
}

#undef public_6daa9d2
#undef public_6daa9ea
#undef public_6daaa10
#undef public_6daaa34
#undef public_6daaa58
#undef public_6daaa86
#undef public_6daaac4
#undef public_6daaad0
