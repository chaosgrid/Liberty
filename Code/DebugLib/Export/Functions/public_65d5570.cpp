#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5520);
CLANG_FORWARD_PROC_SYMBOL(public_65d5570);
CLANG_FORWARD_PROC_SYMBOL(public_65d5680);
CLANG_FORWARD_PROC_SYMBOL(public_65d5700);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c7c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb2);

#define public_65d55ee _public_65d55ee
#define public_65d5618 _public_65d5618
#define public_65d563e _public_65d563e
#define public_65d5669 _public_65d5669
#define public_65d566b _public_65d566b

PROC_DECLARE(0x65d5570, internal_65d5570, public_65d5570);
extern "C" NAKED register_t __cdecl internal_65d5570()
{
    __asm
    {
        sub esp, 0x314
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        je public_65d5669
        mov ecx, 1
        mov dword ptr ss : [esp+0x114], eax
        mov dword ptr ss : [esp+0x218], eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x110], ecx
        mov dword ptr ss : [esp+0x214], ecx
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+4]
        lea ecx, ss:[esp+0xC]
        push eax
        lea edx, ss:[esp+0x218]
        push ecx
        lea eax, ss:[esp+0x118]
        push edx
        push eax
        push 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        call public_65d6c7c
        cmp eax, 0xFFFFFFFF
        jne public_65d55ee
        or eax, eax
        pop esi
        add esp, 0x314
        ret 
        public_65d55ee : nop
        test eax, eax
        je public_65d5669
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        call public_65d6cb2
        test eax, eax
        je public_65d5618
        mov ecx, esi
        call public_65d5520
        mov eax, 0xFFFFFFFE
        pop esi
        add esp, 0x314
        ret 
        public_65d5618 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x110]
        push eax
        push ecx
        call public_65d6cb2
        test eax, eax
        je public_65d563e
        mov ecx, esi
        call public_65d5680
        cmp eax, 0xFFFFFFFE
        je public_65d566b
        cmp eax, 0xFFFFFFFF
        je public_65d566b
        public_65d563e : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x214]
        push edx
        push eax
        call public_65d6cb2
        test eax, eax
        je public_65d5669
        mov ecx, esi
        call public_65d5700
        cmp eax, 0xFFFFFFFF
        jne public_65d5669
        or eax, eax
        pop esi
        add esp, 0x314
        ret 
        public_65d5669 : nop
        xor eax, eax
        public_65d566b : nop
        pop esi
        add esp, 0x314
        ret 
        UNREACHABLE_TRAP(0x65d5570)
    }
}

#undef public_65d55ee
#undef public_65d5618
#undef public_65d563e
#undef public_65d5669
#undef public_65d566b
