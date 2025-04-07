#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262c00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6262c1c _public_6262c1c
#define public_6262c2b _public_6262c2b
#define public_6262c3e _public_6262c3e
#define public_6262c75 _public_6262c75
#define public_6262c82 _public_6262c82
#define public_6262c98 _public_6262c98
#define public_6262cb8 _public_6262cb8
#define public_6262cc1 _public_6262cc1
#define public_6262cd6 _public_6262cd6
#define public_6262cea _public_6262cea
#define public_6262d08 _public_6262d08
#define public_6262d29 _public_6262d29

PROC_DECLARE(0x6262c00, internal_6262c00, public_6262c00);
extern "C" NAKED register_t __cdecl internal_6262c00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63991c0]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+8]
        mov ebx, eax
        cmp esi, ebx
        mov ebp, ecx
        jae public_6262c1c
        mov ebx, esi
        public_6262c1c : nop
        cmp ebp, edi
        jne public_6262c82
        cmp dword ptr ss : [ebp+8], ebx
        jae public_6262c2b
        call dword ptr ds : [public_63991c4]
        public_6262c2b : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6262c3e
        mov esi, eax
        public_6262c3e : nop
        test esi, esi
        jbe public_6262c75
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6262c75
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_6262c75 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_6262d29
        public_6262c82 : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_6262cea
        cmp ebx, eax
        jne public_6262cea
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6262c98
        mov eax, dword ptr ds : [public_63991d0]
        public_6262c98 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6262cea
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6262cc1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6262cb8
        cmp cl, 0xFF
        je public_6262cb8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6262cc1
        public_6262cb8 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6262cc1 : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6262cd6
        mov eax, dword ptr ds : [public_63991d0]
        public_6262cd6 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6262d29
        public_6262cea : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6262d29
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_63991d0]
        je public_6262d08
        mov esi, edi
        public_6262d08 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6262d29 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [ebp+0x1C], edx
        mov eax, dword ptr ds : [edi+0x20]
        pop edi
        mov dword ptr ss : [ebp+0x20], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6262c00)
    }
}

#undef public_6262c1c
#undef public_6262c2b
#undef public_6262c3e
#undef public_6262c75
#undef public_6262c82
#undef public_6262c98
#undef public_6262cb8
#undef public_6262cc1
#undef public_6262cd6
#undef public_6262cea
#undef public_6262d08
#undef public_6262d29
