#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5a589 _public_6b5a589
#define public_6b5a5a1 _public_6b5a5a1
#define public_6b5a5b1 _public_6b5a5b1
#define public_6b5a5ce _public_6b5a5ce
#define public_6b5a5de _public_6b5a5de
#define public_6b5a5f9 _public_6b5a5f9
#define public_6b5a609 _public_6b5a609
#define public_6b5a624 _public_6b5a624
#define public_6b5a634 _public_6b5a634
#define public_6b5a65b _public_6b5a65b
#define public_6b5a68e _public_6b5a68e

PROC_DECLARE(0x6b5a540, internal_6b5a540, public_6b5a540);
extern "C" NAKED register_t __cdecl internal_6b5a540()
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
        je public_6b5a589
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5a589 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6b5a5a1
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a5a1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a5b1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a5b1 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5a5ce
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a5ce : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a5de
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a5de : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5a5f9
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a5f9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a609
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a609 : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x25]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5a624
        mov dword ptr ds : [esi+0xC], ebp
        public_6b5a624 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5a634
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a634 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x26]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5a65b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b5a65b : nop
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
        jbe public_6b5a68e
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5a68e : nop
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
        UNREACHABLE_TRAP(0x6b5a540)
    }
}

#undef public_6b5a589
#undef public_6b5a5a1
#undef public_6b5a5b1
#undef public_6b5a5ce
#undef public_6b5a5de
#undef public_6b5a5f9
#undef public_6b5a609
#undef public_6b5a624
#undef public_6b5a634
#undef public_6b5a65b
#undef public_6b5a68e
