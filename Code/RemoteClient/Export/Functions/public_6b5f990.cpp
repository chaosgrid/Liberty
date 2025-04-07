#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5f9d4 _public_6b5f9d4
#define public_6b5f9eb _public_6b5f9eb
#define public_6b5fa1d _public_6b5fa1d
#define public_6b5fa4f _public_6b5fa4f
#define public_6b5fa7d _public_6b5fa7d
#define public_6b5fab1 _public_6b5fab1
#define public_6b5faed _public_6b5faed
#define public_6b5faf9 _public_6b5faf9

PROC_DECLARE(0x6b5f990, internal_6b5f990, public_6b5f990);
extern "C" NAKED register_t __cdecl internal_6b5f990()
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
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5f9d4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b5f9d4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5f9eb
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b5f9eb : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5faf9
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x20]
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5fa1d
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b5fa1d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5faf9
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x2C]
        call public_6b39ec0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5fa4f
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b5fa4f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5faf9
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
        jbe public_6b5fa7d
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b5fa7d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b5faf9
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
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5fab1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b5fab1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
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
        jbe public_6b5faed
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b5faed : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b5faf9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b5f990)
    }
}

#undef public_6b5f9d4
#undef public_6b5f9eb
#undef public_6b5fa1d
#undef public_6b5fa4f
#undef public_6b5fa7d
#undef public_6b5fab1
#undef public_6b5faed
#undef public_6b5faf9
