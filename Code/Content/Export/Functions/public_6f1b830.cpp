#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f1b860 _public_6f1b860
#define public_6f1b868 _public_6f1b868
#define public_6f1b87c _public_6f1b87c

PROC_DECLARE(0x6f1b830, internal_6f1b830, public_6f1b830);
extern "C" NAKED register_t __cdecl internal_6f1b830()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x3C]
        push eax
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6f1b860
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f1b860
        lea eax, ss:[esp+8]
        jmp public_6f1b868
        public_6f1b860 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f1b868 : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f1b87c
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 4
        public_6f1b87c : nop
        xor eax, eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f1b830)
    }
}

#undef public_6f1b860
#undef public_6f1b868
#undef public_6f1b87c
