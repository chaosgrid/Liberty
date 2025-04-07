#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);
CLANG_FORWARD_PROC_SYMBOL(public_6eba860);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6eba8bd _public_6eba8bd
#define public_6eba8c5 _public_6eba8c5
#define public_6eba8e4 _public_6eba8e4

PROC_DECLARE(0x6eba860, internal_6eba860, public_6eba860);
extern "C" NAKED register_t __cdecl internal_6eba860()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, edx
        lea eax, ds:[esi+0xC]
        jne public_6eba8e4
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eba8e4
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0x3B
        call public_6eb9af0
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6eba8e4
        mov ecx, dword ptr ds : [eax+4]
        test dword ptr ds : [edi+4], 0x3FFFFFFF
        mov dword ptr ss : [esp+8], ecx
        je public_6eba8bd
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x10], edx
        jmp public_6eba8c5
        public_6eba8bd : nop
        mov dword ptr ss : [esp+0x10], 0
        public_6eba8c5 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], 0x100F
        call public_6eb9af0
        public_6eba8e4 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6eba860)
    }
}

#undef public_6eba8bd
#undef public_6eba8c5
#undef public_6eba8e4
