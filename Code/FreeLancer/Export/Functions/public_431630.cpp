#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43165e _public_43165e
#define public_431666 _public_431666
#define public_431678 _public_431678

PROC_DECLARE(0x431630, internal_431630, public_431630);
extern "C" NAKED register_t __cdecl internal_431630()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+0xC]
        push eax
        mov ecx, esi
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_43165e
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43165e
        lea eax, ss:[esp+8]
        jmp public_431666
        public_43165e : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_431666 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_431678
        add eax, 0x10
        pop ecx
        ret 4
        public_431678 : nop
        xor eax, eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x431630)
    }
}

#undef public_43165e
#undef public_431666
#undef public_431678
