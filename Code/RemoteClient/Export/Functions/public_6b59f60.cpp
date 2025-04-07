#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b59fa9 _public_6b59fa9
#define public_6b59fbf _public_6b59fbf
#define public_6b59fcf _public_6b59fcf
#define public_6b59fec _public_6b59fec
#define public_6b59ffc _public_6b59ffc
#define public_6b5a01b _public_6b5a01b
#define public_6b5a02b _public_6b5a02b
#define public_6b5a04a _public_6b5a04a
#define public_6b5a05a _public_6b5a05a
#define public_6b5a077 _public_6b5a077
#define public_6b5a087 _public_6b5a087
#define public_6b5a0ae _public_6b5a0ae
#define public_6b5a0df _public_6b5a0df

PROC_DECLARE(0x6b59f60, internal_6b59f60, public_6b59f60);
extern "C" NAKED register_t __cdecl internal_6b59f60()
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
        je public_6b59fa9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b59fa9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6b59fbf
        mov dword ptr ds : [esi+0xC], ebp
        public_6b59fbf : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b59fcf
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b59fcf : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b59fec
        mov dword ptr ds : [esi+0xC], ebp
        public_6b59fec : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b59ffc
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b59ffc : nop
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
        jbe public_6b5a01b
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a01b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a02b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a02b : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5a04a
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a04a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a05a
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a05a : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5a077
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a077 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a087
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a087 : nop
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
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5a0ae
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a0ae : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
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
        jbe public_6b5a0df
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5a0df : nop
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
        UNREACHABLE_TRAP(0x6b59f60)
    }
}

#undef public_6b59fa9
#undef public_6b59fbf
#undef public_6b59fcf
#undef public_6b59fec
#undef public_6b59ffc
#undef public_6b5a01b
#undef public_6b5a02b
#undef public_6b5a04a
#undef public_6b5a05a
#undef public_6b5a077
#undef public_6b5a087
#undef public_6b5a0ae
#undef public_6b5a0df
