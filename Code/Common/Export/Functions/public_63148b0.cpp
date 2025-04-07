#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6317350);

#define public_63148e0 _public_63148e0
#define public_63148e8 _public_63148e8
#define public_6314906 _public_6314906

PROC_DECLARE(0x63148b0, internal_63148b0, public_63148b0);
extern "C" NAKED register_t __cdecl internal_63148b0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x18]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_63148e0
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_63148e0
        lea eax, ss:[esp+8]
        jmp public_63148e8
        public_63148e0 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_63148e8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x1C]
        je public_6314906
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6317350
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_6314906 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x63148b0)
    }
}

#undef public_63148e0
#undef public_63148e8
#undef public_6314906
