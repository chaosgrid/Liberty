#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49270);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a710);

#define public_6f492a0 _public_6f492a0
#define public_6f492a8 _public_6f492a8
#define public_6f492bc _public_6f492bc

PROC_DECLARE(0x6f49270, internal_6f49270, public_6f49270);
extern "C" NAKED register_t __cdecl internal_6f49270()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x70]
        push eax
        mov ecx, esi
        call public_6f4a710
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6f492a0
        mov cl, byte ptr ss : [esp+0x14]
        cmp cl, byte ptr ds : [eax+0xC]
        jb public_6f492a0
        lea eax, ss:[esp+8]
        jmp public_6f492a8
        public_6f492a0 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f492a8 : nop
        mov ecx, dword ptr ds : [edi+0x74]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f492bc
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 4
        public_6f492bc : nop
        xor eax, eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f49270)
    }
}

#undef public_6f492a0
#undef public_6f492a8
#undef public_6f492bc
