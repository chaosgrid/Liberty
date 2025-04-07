#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62a612e _public_62a612e
#define public_62a6136 _public_62a6136
#define public_62a6148 _public_62a6148

PROC_DECLARE(0x62a6100, internal_62a6100, public_62a6100);
extern "C" NAKED register_t __cdecl internal_62a6100()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+0x14]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_62a612e
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_62a612e
        lea eax, ss:[esp+8]
        jmp public_62a6136
        public_62a612e : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_62a6136 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_62a6148
        add eax, 0x10
        pop ecx
        ret 4
        public_62a6148 : nop
        xor eax, eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a6100)
    }
}

#undef public_62a612e
#undef public_62a6136
#undef public_62a6148
