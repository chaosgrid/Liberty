#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6f20250 _public_6f20250
#define public_6f20269 _public_6f20269
#define public_6f202a1 _public_6f202a1
#define public_6f202b3 _public_6f202b3
#define public_6f202cd _public_6f202cd
#define public_6f202d6 _public_6f202d6
#define public_6f202e4 _public_6f202e4

PROC_DECLARE(0x6f20230, internal_6f20230, public_6f20230);
extern "C" NAKED register_t __cdecl internal_6f20230()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        lea eax, ss:[esp+8]
        push eax
        mov esi, ecx
        call public_6f1df30
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f20269
        lea ebx, ds:[ebx]
        public_6f20250 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+8], eax
        jne public_6f20250
        public_6f20269 : nop
        mov edi, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        push edi
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x18]
        cmp esi, ecx
        je public_6f202cd
        push ebx
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov edi, dword ptr ss : [ebp]
        je public_6f202b3
        public_6f202a1 : nop
        cmp edi, ebp
        je public_6f202b3
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov edi, dword ptr ds : [edi]
        jne public_6f202a1
        public_6f202b3 : nop
        push ebx
        push eax
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call public_6fa8370
        push ebp
        push edi
        push ebx
        mov ecx, esi
        call public_6ed0230
        pop ebp
        pop ebx
        public_6f202cd : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f202e4
        public_6f202d6 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+4]
        jne public_6f202d6
        public_6f202e4 : nop
        pop edi
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f20230)
    }
}

#undef public_6f20250
#undef public_6f20269
#undef public_6f202a1
#undef public_6f202b3
#undef public_6f202cd
#undef public_6f202d6
#undef public_6f202e4
