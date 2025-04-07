#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf9107 _public_6bf9107
#define public_6bf911e _public_6bf911e
#define public_6bf9130 _public_6bf9130
#define public_6bf9153 _public_6bf9153
#define public_6bf9165 _public_6bf9165
#define public_6bf9188 _public_6bf9188
#define public_6bf919a _public_6bf919a
#define public_6bf91c7 _public_6bf91c7
#define public_6bf91f8 _public_6bf91f8

PROC_DECLARE(0x6bf90c0, internal_6bf90c0, public_6bf90c0);
extern "C" NAKED register_t __cdecl internal_6bf90c0()
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf9107
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9107 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf911e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf911e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf9130
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9130 : nop
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
        jbe public_6bf9153
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf9153 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf9165
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9165 : nop
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
        jbe public_6bf9188
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf9188 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf919a
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf919a : nop
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [edi+0x28]
        mov word ptr ds : [eax], cx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 2
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf91c7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf91c7 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6bf91f8
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf91f8 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bf90c0)
    }
}

#undef public_6bf9107
#undef public_6bf911e
#undef public_6bf9130
#undef public_6bf9153
#undef public_6bf9165
#undef public_6bf9188
#undef public_6bf919a
#undef public_6bf91c7
#undef public_6bf91f8
