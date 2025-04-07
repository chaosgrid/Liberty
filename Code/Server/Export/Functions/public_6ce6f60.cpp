#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e670);

#define public_6ce6f9b _public_6ce6f9b
#define public_6ce6fb9 _public_6ce6fb9
#define public_6ce6fd1 _public_6ce6fd1
#define public_6ce6fd3 _public_6ce6fd3
#define public_6ce7027 _public_6ce7027
#define public_6ce7029 _public_6ce7029
#define public_6ce7043 _public_6ce7043
#define public_6ce704e _public_6ce704e
#define public_6ce7052 _public_6ce7052
#define public_6ce7057 _public_6ce7057
#define public_6ce7067 _public_6ce7067
#define public_6ce7091 _public_6ce7091
#define public_6ce709d _public_6ce709d

PROC_DECLARE(0x6ce6f60, internal_6ce6f60, public_6ce6f60);
extern "C" NAKED register_t __cdecl internal_6ce6f60()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x24]
        push esi
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+8], ebp
        je public_6ce709d
        mov eax, dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6ce709d
        cmp dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], esi
        jne public_6ce6f9b
        mov dword ptr ss : [esp+0x20], esi
        public_6ce6f9b : nop
        push ebx
        push edi
        xor bl, bl
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov edi, dword ptr ss : [esp+0x20]
        je public_6ce6fb9
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_6ce7067
        public_6ce6fb9 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ce6fd1
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce6fd3
        public_6ce6fd1 : nop
        xor eax, eax
        public_6ce6fd3 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        mov esi, eax
        test esi, esi
        je public_6ce7052
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6ce704e
        push esi
        call dword ptr ds : [public_6d641bc]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ce7043
        test edi, edi
        je public_6ce7027
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_6ce7027
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ce7029
        public_6ce7027 : nop
        xor eax, eax
        public_6ce7029 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d641d0]
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        mov bl, al
        jmp public_6ce7057
        public_6ce7043 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, 0xFFFFFFFC
        jmp public_6ce7057
        public_6ce704e : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6ce7052 : nop
        mov esi, 0xFFFFFFFE
        public_6ce7057 : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_6ce7067
        test bl, bl
        je public_6ce7091
        test esi, esi
        jne public_6ce7091
        public_6ce7067 : nop
        mov eax, dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x24]
        push edi
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        call public_6d0e670
        public_6ce7091 : nop
        pop edi
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        add esp, 8
        ret 0x10
        public_6ce709d : nop
        pop esi
        mov eax, 0xFFFFFFFB
        pop ebp
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x6ce6f60)
    }
}

#undef public_6ce6f9b
#undef public_6ce6fb9
#undef public_6ce6fd1
#undef public_6ce6fd3
#undef public_6ce7027
#undef public_6ce7029
#undef public_6ce7043
#undef public_6ce704e
#undef public_6ce7052
#undef public_6ce7057
#undef public_6ce7067
#undef public_6ce7091
#undef public_6ce709d
