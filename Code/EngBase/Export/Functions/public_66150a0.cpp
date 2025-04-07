#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66122a0);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_66150cc _public_66150cc

PROC_DECLARE(0x66150a0, internal_66150a0, public_66150a0);
extern "C" NAKED register_t __cdecl internal_66150a0()
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
        je public_66150cc
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        call public_66122a0
        pop esi
        ret 0xC
        public_66150cc : nop
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66150a0)
    }
}

#undef public_66150cc
