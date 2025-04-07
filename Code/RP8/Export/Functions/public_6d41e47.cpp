#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf08);

#define public_6d41e5c _public_6d41e5c

PROC_DECLARE(0x6d41e47, internal_6d41e47, public_6d41e47);
extern "C" NAKED register_t __cdecl internal_6d41e47()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_6d41e5c
        push dword ptr ss : [esp+0xC]
        push esi
        call eax
        pop ecx
        pop ecx
        public_6d41e5c : nop
        push 1
        push esi
        call public_6d5cf08
        UNREACHABLE_TRAP(0x6d41e47)
    }
}

#undef public_6d41e5c
