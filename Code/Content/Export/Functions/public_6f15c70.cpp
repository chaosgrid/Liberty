#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6f15c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f15cc2 _public_6f15cc2
#define public_6f15cd7 _public_6f15cd7
#define public_6f15ce5 _public_6f15ce5
#define public_6f15cf0 _public_6f15cf0
#define public_6f15d30 _public_6f15d30
#define public_6f15d37 _public_6f15d37
#define public_6f15d51 _public_6f15d51
#define public_6f15d63 _public_6f15d63
#define public_6f15d71 _public_6f15d71
#define public_6f15d7e _public_6f15d7e
#define public_6f15d96 _public_6f15d96
#define public_6f15dae _public_6f15dae
#define public_6f15dc6 _public_6f15dc6
#define public_6f15dca _public_6f15dca

PROC_DECLARE(0x6f15c70, internal_6f15c70, public_6f15c70);
extern "C" NAKED register_t __cdecl internal_6f15c70()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        mov esi, ecx
        push edi
        lea eax, ss:[esp+0x4C]
        xor ebx, ebx
        push eax
        lea ecx, ds:[esi+0xA4]
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        call public_6f7b0f0
        mov eax, dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ss : [esp+0x48]
        cmp ecx, eax
        je public_6f15cd7
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, ebx
        je public_6f15cd7
        add eax, 0xD8
        cmp eax, ebx
        jne public_6f15cc2
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jmp public_6f15dca
        public_6f15cc2 : nop
        push eax
        lea ecx, ss:[esp+0x14]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        jmp public_6f15dc6
        public_6f15cd7 : nop
        mov ecx, dword ptr ds : [esi+0xC8]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f15cf0
        mov edx, dword ptr ds : [edi]
        public_6f15ce5 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f15d37
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f15ce5
        public_6f15cf0 : nop
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f15dca
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, ebx
        je public_6f15d63
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+4]
        jne public_6f15d63
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb4708
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f15d30
        mov eax, 0x2F
        public_6f15d30 : nop
        mov esi, offset public_6fb4708
        jmp public_6f15dae
        public_6f15d37 : nop
        add eax, 8
        cmp eax, ebx
        je public_6f15cf0
        add eax, 0x3EC
        cmp eax, ebx
        jne public_6f15d51
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jmp public_6f15dca
        public_6f15d51 : nop
        push eax
        lea edx, ss:[esp+0x14]
        push 0x30
        push edx
        call public_6ea9f40
        add esp, 0xC
        jmp public_6f15dc6
        public_6f15d63 : nop
        mov esi, dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        je public_6f15dca
        mov ecx, dword ptr ds : [edi]
        public_6f15d71 : nop
        cmp dword ptr ds : [eax+0x3C], ecx
        je public_6f15d7e
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f15d71
        jmp public_6f15dca
        public_6f15d7e : nop
        add eax, 8
        cmp eax, ebx
        je public_6f15dca
        lea esi, ds:[eax+4]
        cmp esi, ebx
        jne public_6f15d96
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jmp public_6f15dca
        public_6f15d96 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f15dae
        mov eax, 0x2F
        public_6f15dae : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x10]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x10], bl
        public_6f15dc6 : nop
        mov dword ptr ss : [esp+0xC], eax
        public_6f15dca : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, 0xD
        lea esi, ss:[esp+0xC]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6f15c70)
    }
}

#undef public_6f15cc2
#undef public_6f15cd7
#undef public_6f15ce5
#undef public_6f15cf0
#undef public_6f15d30
#undef public_6f15d37
#undef public_6f15d51
#undef public_6f15d63
#undef public_6f15d71
#undef public_6f15d7e
#undef public_6f15d96
#undef public_6f15dae
#undef public_6f15dc6
#undef public_6f15dca
