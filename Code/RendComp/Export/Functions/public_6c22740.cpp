#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c276a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c22767 _public_6c22767
#define public_6c22769 _public_6c22769
#define public_6c22795 _public_6c22795

PROC_DECLARE(0x6c22740, internal_6c22740, public_6c22740);
extern "C" NAKED register_t __cdecl internal_6c22740()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1E8]
        cmp eax, dword ptr ds : [esi+0x14]
        jne public_6c22795
        push 0x40
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c22767
        mov ecx, eax
        call public_6c276a0
        jmp public_6c22769
        public_6c22767 : nop
        xor eax, eax
        public_6c22769 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+8]
        push edx
        lea ecx, ds:[esi+0xC]
        push 1
        push eax
        call public_6c26fa0
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x1E8], ecx
        xor eax, eax
        pop esi
        ret 8
        public_6c22795 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c22740)
    }
}

#undef public_6c22767
#undef public_6c22769
#undef public_6c22795
