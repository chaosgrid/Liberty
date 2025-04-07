#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d12d0b _public_6d12d0b

PROC_DECLARE(0x6d12cd0, internal_6d12cd0, public_6d12cd0);
extern "C" NAKED register_t __cdecl internal_6d12cd0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx+4]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        add esi, 0x10
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edi
        call public_6d15d10
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+4]
        je public_6d12d0b
        add eax, 0x10
        test eax, eax
        je public_6d12d0b
        fld dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ecx
        ret 4
        public_6d12d0b : nop
        push edi
        call dword ptr ds : [public_6d64774]
        fld dword ptr ds : [eax+0x58]
        add esp, 4
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d12cd0)
    }
}

#undef public_6d12d0b
