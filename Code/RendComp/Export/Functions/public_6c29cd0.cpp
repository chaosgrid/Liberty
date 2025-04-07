#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a060);
CLANG_FORWARD_PROC_SYMBOL(public_6c2af00);
CLANG_FORWARD_PROC_SYMBOL(public_6c2afb0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b3c0);

#define public_6c29ce2 _public_6c29ce2
#define public_6c29cec _public_6c29cec
#define public_6c29d0b _public_6c29d0b
#define public_6c29d6f _public_6c29d6f
#define public_6c29d82 _public_6c29d82

PROC_DECLARE(0x6c29cd0, internal_6c29cd0, public_6c29cd0);
extern "C" NAKED register_t __cdecl internal_6c29cd0()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        cmp esi, 0xFFFFFFFF
        push edi
        je public_6c29ce2
        test esi, esi
        jne public_6c29cec
        public_6c29ce2 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x1C
        ret 0xC
        public_6c29cec : nop
        mov edi, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x30]
        push eax
        push edi
        mov ecx, esi
        call public_6c2af00
        test eax, eax
        jge public_6c29d0b
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x1C
        ret 0xC
        public_6c29d0b : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6c2afb0
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0x84]
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], eax
        call public_6c2a060
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp eax, ecx
        je public_6c29d6f
        cmp eax, ecx
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x28], 1
        jne public_6c29d82
        public_6c29d6f : nop
        mov ecx, dword ptr ss : [esp+0x30]
        call public_6c2b3c0
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x1C
        ret 0xC
        public_6c29d82 : nop
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x6c29cd0)
    }
}

#undef public_6c29ce2
#undef public_6c29cec
#undef public_6c29d0b
#undef public_6c29d6f
#undef public_6c29d82
