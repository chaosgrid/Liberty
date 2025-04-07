#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b67909 _public_6b67909
#define public_6b67920 _public_6b67920
#define public_6b67933 _public_6b67933
#define public_6b67958 _public_6b67958
#define public_6b6796b _public_6b6796b
#define public_6b679a9 _public_6b679a9
#define public_6b679bc _public_6b679bc
#define public_6b679df _public_6b679df
#define public_6b679f2 _public_6b679f2
#define public_6b67a1e _public_6b67a1e
#define public_6b67a51 _public_6b67a51

PROC_DECLARE(0x6b678c0, internal_6b678c0, public_6b678c0);
extern "C" NAKED register_t __cdecl internal_6b678c0()
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
        je public_6b67909
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b67909 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b67920
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b67920 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b67933
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b67933 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x28]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6b67958
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b67958 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b6796b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b6796b : nop
        mov edx, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x2C]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add edx, ecx
        lea ecx, ss:[ebp+0x18]
        mov dword ptr ds : [ecx], edx
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6b679a9
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b679a9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b679bc
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b679bc : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6b679df
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b679df : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b679f2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b679f2 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        push ecx
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b67a1e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b67a1e : nop
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
        jbe public_6b67a51
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b67a51 : nop
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
        UNREACHABLE_TRAP(0x6b678c0)
    }
}

#undef public_6b67909
#undef public_6b67920
#undef public_6b67933
#undef public_6b67958
#undef public_6b6796b
#undef public_6b679a9
#undef public_6b679bc
#undef public_6b679df
#undef public_6b679f2
#undef public_6b67a1e
#undef public_6b67a51
