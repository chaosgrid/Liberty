#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b67f57 _public_6b67f57
#define public_6b67f6e _public_6b67f6e
#define public_6b67f80 _public_6b67f80
#define public_6b67fa1 _public_6b67fa1
#define public_6b67fb3 _public_6b67fb3
#define public_6b67fd2 _public_6b67fd2
#define public_6b67fe4 _public_6b67fe4
#define public_6b6800d _public_6b6800d
#define public_6b6803e _public_6b6803e

PROC_DECLARE(0x6b67f10, internal_6b67f10, public_6b67f10);
extern "C" NAKED register_t __cdecl internal_6b67f10()
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
        je public_6b67f57
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b67f57 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b67f6e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b67f6e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b67f80
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b67f80 : nop
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
        jbe public_6b67fa1
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b67fa1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b67fb3
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b67fb3 : nop
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
        jbe public_6b67fd2
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b67fd2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b67fe4
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b67fe4 : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x25]
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
        je public_6b6800d
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b6800d : nop
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
        jbe public_6b6803e
        mov dword ptr ds : [ecx+0x10], esi
        public_6b6803e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b67f10)
    }
}

#undef public_6b67f57
#undef public_6b67f6e
#undef public_6b67f80
#undef public_6b67fa1
#undef public_6b67fb3
#undef public_6b67fd2
#undef public_6b67fe4
#undef public_6b6800d
#undef public_6b6803e
