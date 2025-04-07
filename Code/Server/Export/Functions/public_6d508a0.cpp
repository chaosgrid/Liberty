#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d508a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c600);

#define public_6d508d4 _public_6d508d4
#define public_6d508dc _public_6d508dc
#define public_6d508ed _public_6d508ed

PROC_DECLARE(0x6d508a0, internal_6d508a0, public_6d508a0);
extern "C" NAKED register_t __cdecl internal_6d508a0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x20]
        lea esi, ds:[edi+0x3A0]
        push eax
        mov ecx, esi
        call public_6d59ea0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        je public_6d508d4
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6d508d4
        lea eax, ss:[esp+0xC]
        jmp public_6d508dc
        public_6d508d4 : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_6d508dc : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x3A4]
        mov bl, byte ptr ss : [esp+0x24]
        je public_6d508ed
        or bl, byte ptr ds : [eax+0x10]
        public_6d508ed : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 0
        call public_6d5c600
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov byte ptr ds : [eax+0x10], bl
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d508a0)
    }
}

#undef public_6d508d4
#undef public_6d508dc
#undef public_6d508ed
