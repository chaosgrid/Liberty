#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb160);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb180);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb530);

#define public_6ecb19a _public_6ecb19a
#define public_6ecb1a0 _public_6ecb1a0
#define public_6ecb1b8 _public_6ecb1b8
#define public_6ecb1dc _public_6ecb1dc
#define public_6ecb1f1 _public_6ecb1f1

PROC_DECLARE(0x6ecb180, internal_6ecb180, public_6ecb180);
extern "C" NAKED register_t __cdecl internal_6ecb180()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+8]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, eax
        mov dword ptr ss : [esp+8], ecx
        mov ebp, edi
        je public_6ecb1f1
        push ebx
        push esi
        jmp public_6ecb1a0
        public_6ecb19a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, edi
        public_6ecb1a0 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6ecb180
        mov ebx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [ebx]
        mov ebp, dword ptr ss : [ebp]
        add edi, 0x10
        cmp esi, ebx
        je public_6ecb1dc
        public_6ecb1b8 : nop
        push esi
        mov dword ptr ss : [esp+0x20], esi
        call public_6ecb160
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_6ecb530
        cmp esi, ebx
        jne public_6ecb1b8
        public_6ecb1dc : nop
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp ebp, dword ptr ds : [eax+8]
        mov edi, ebp
        jne public_6ecb19a
        pop esi
        pop ebx
        public_6ecb1f1 : nop
        pop edi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ecb180)
    }
}

#undef public_6ecb19a
#undef public_6ecb1a0
#undef public_6ecb1b8
#undef public_6ecb1dc
#undef public_6ecb1f1
