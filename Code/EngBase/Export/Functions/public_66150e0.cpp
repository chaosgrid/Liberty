#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66122d0);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_6615111 _public_6615111

PROC_DECLARE(0x66150e0, internal_66150e0, public_66150e0);
extern "C" NAKED register_t __cdecl internal_66150e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+8]
        push esi
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor esi, esi
        call public_6614580
        test al, al
        je public_6615111
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call public_66122d0
        pop esi
        ret 0x10
        public_6615111 : nop
        mov eax, esi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x66150e0)
    }
}

#undef public_6615111
