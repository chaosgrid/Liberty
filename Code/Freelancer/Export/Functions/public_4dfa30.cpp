#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dfa30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4dfa6f _public_4dfa6f
#define public_4dfa80 _public_4dfa80
#define public_4dfa93 _public_4dfa93
#define public_4dfaca _public_4dfaca
#define public_4dfae6 _public_4dfae6
#define public_4dfafd _public_4dfafd
#define public_4dfb1d _public_4dfb1d
#define public_4dfb2c _public_4dfb2c
#define public_4dfb43 _public_4dfb43
#define public_4dfb65 _public_4dfb65
#define public_4dfb81 _public_4dfb81
#define public_4dfb9e _public_4dfb9e

PROC_DECLARE(0x4dfa30, internal_4dfa30, public_4dfa30);
extern "C" NAKED register_t __cdecl internal_4dfa30()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov ax, word ptr ds : [ecx]
        mov word ptr ds : [edi], ax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], eax
        mov dl, byte ptr ds : [ecx+0xC]
        mov byte ptr ds : [edi+0xC], dl
        mov eax, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [eax]
        lea esi, ds:[ecx+0x10]
        mov ebx, edx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], edi
        lea ebp, ds:[edi+0x10]
        jae public_4dfa6f
        mov ebx, eax
        public_4dfa6f : nop
        cmp ebp, esi
        jne public_4dfae6
        mov esi, eax
        cmp dword ptr ss : [ebp+8], ebx
        jae public_4dfa80
        call dword ptr ds : [public_5c7064]
        public_4dfa80 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_4dfa93
        mov esi, eax
        public_4dfa93 : nop
        test esi, esi
        jbe public_4dfaca
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4dfaca
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_4dfaca : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [edi+0x20], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_4dfae6 : nop
        xor eax, eax
        cmp ebx, eax
        jbe public_4dfb65
        cmp ebx, edx
        jne public_4dfb65
        mov edx, dword ptr ds : [esi+4]
        cmp edx, eax
        jne public_4dfafd
        mov edx, dword ptr ds : [public_5c7078]
        public_4dfafd : nop
        cmp byte ptr ds : [edx-1], 0xFE
        jae public_4dfb65
        mov edx, dword ptr ss : [ebp+4]
        cmp edx, eax
        je public_4dfb2c
        mov bl, byte ptr ds : [edx-1]
        dec edx
        test bl, bl
        je public_4dfb1d
        cmp bl, 0xFF
        je public_4dfb1d
        dec bl
        mov byte ptr ds : [edx], bl
        jmp public_4dfb2c
        public_4dfb1d : nop
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        public_4dfb2c : nop
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        mov edx, dword ptr ds : [esi+4]
        cmp edx, eax
        mov eax, dword ptr ds : [public_5c7078]
        je public_4dfb43
        mov eax, edx
        public_4dfb43 : nop
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [edi+0x20], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_4dfb65 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4dfb9e
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_4dfb81
        mov esi, dword ptr ds : [public_5c7078]
        public_4dfb81 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_4dfb9e : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [edi+0x20], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4dfa30)
    }
}

#undef public_4dfa6f
#undef public_4dfa80
#undef public_4dfa93
#undef public_4dfaca
#undef public_4dfae6
#undef public_4dfafd
#undef public_4dfb1d
#undef public_4dfb2c
#undef public_4dfb43
#undef public_4dfb65
#undef public_4dfb81
#undef public_4dfb9e
