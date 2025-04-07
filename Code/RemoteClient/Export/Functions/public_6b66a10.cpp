#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b66a59 _public_6b66a59
#define public_6b66a70 _public_6b66a70
#define public_6b66a83 _public_6b66a83
#define public_6b66aa8 _public_6b66aa8
#define public_6b66abb _public_6b66abb
#define public_6b66af9 _public_6b66af9
#define public_6b66b0c _public_6b66b0c
#define public_6b66b31 _public_6b66b31
#define public_6b66b44 _public_6b66b44
#define public_6b66b81 _public_6b66b81
#define public_6b66b94 _public_6b66b94
#define public_6b66bc0 _public_6b66bc0
#define public_6b66bf3 _public_6b66bf3

PROC_DECLARE(0x6b66a10, internal_6b66a10, public_6b66a10);
extern "C" NAKED register_t __cdecl internal_6b66a10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6b4e740
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b66a59
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b66a59 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b66a70
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b66a70 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b66a83
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b66a83 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x20]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6b66aa8
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b66aa8 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b66abb
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b66abb : nop
        mov edx, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x24]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, edx
        lea edx, ss:[ebp+0x18]
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6b66af9
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b66af9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b66b0c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b66b0c : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+0x20]
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, eax
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6b66b31
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b66b31 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b66b44
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b66b44 : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [edx]
        mov esi, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6b66b81
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b66b81 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b66b94
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b66b94 : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        push edx
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b66bc0
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b66bc0 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [ebx]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        mov esi, ebp
        jbe public_6b66bf3
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b66bf3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b66a10)
    }
}

#undef public_6b66a59
#undef public_6b66a70
#undef public_6b66a83
#undef public_6b66aa8
#undef public_6b66abb
#undef public_6b66af9
#undef public_6b66b0c
#undef public_6b66b31
#undef public_6b66b44
#undef public_6b66b81
#undef public_6b66b94
#undef public_6b66bc0
#undef public_6b66bf3
