#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b57067 _public_6b57067
#define public_6b5707e _public_6b5707e
#define public_6b57090 _public_6b57090
#define public_6b570b3 _public_6b570b3
#define public_6b570c5 _public_6b570c5
#define public_6b570e8 _public_6b570e8
#define public_6b570fa _public_6b570fa
#define public_6b57125 _public_6b57125
#define public_6b57156 _public_6b57156

PROC_DECLARE(0x6b57020, internal_6b57020, public_6b57020);
extern "C" NAKED register_t __cdecl internal_6b57020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
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
        je public_6b57067
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b57067 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5707e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5707e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b57090
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b57090 : nop
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
        jbe public_6b570b3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b570b3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b570c5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b570c5 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b570e8
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b570e8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b570fa
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b570fa : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b57125
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b57125 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
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
        jbe public_6b57156
        mov dword ptr ds : [ecx+0x10], esi
        public_6b57156 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b57020)
    }
}

#undef public_6b57067
#undef public_6b5707e
#undef public_6b57090
#undef public_6b570b3
#undef public_6b570c5
#undef public_6b570e8
#undef public_6b570fa
#undef public_6b57125
#undef public_6b57156
