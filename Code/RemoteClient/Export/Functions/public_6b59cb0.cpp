#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b59cf7 _public_6b59cf7
#define public_6b59d0e _public_6b59d0e
#define public_6b59d20 _public_6b59d20
#define public_6b59d43 _public_6b59d43
#define public_6b59d55 _public_6b59d55
#define public_6b59d78 _public_6b59d78
#define public_6b59d8a _public_6b59d8a
#define public_6b59db5 _public_6b59db5
#define public_6b59de6 _public_6b59de6

PROC_DECLARE(0x6b59cb0, internal_6b59cb0, public_6b59cb0);
extern "C" NAKED register_t __cdecl internal_6b59cb0()
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
        je public_6b59cf7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b59cf7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b59d0e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b59d0e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b59d20
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b59d20 : nop
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
        jbe public_6b59d43
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b59d43 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b59d55
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b59d55 : nop
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
        jbe public_6b59d78
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b59d78 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b59d8a
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b59d8a : nop
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
        je public_6b59db5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b59db5 : nop
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
        jbe public_6b59de6
        mov dword ptr ds : [ecx+0x10], esi
        public_6b59de6 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b59cb0)
    }
}

#undef public_6b59cf7
#undef public_6b59d0e
#undef public_6b59d20
#undef public_6b59d43
#undef public_6b59d55
#undef public_6b59d78
#undef public_6b59d8a
#undef public_6b59db5
#undef public_6b59de6
