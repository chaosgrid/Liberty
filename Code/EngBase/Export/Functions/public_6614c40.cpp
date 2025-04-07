#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66127e0);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_6614c68 _public_6614c68

PROC_DECLARE(0x6614c40, internal_6614c40, public_6614c40);
extern "C" NAKED register_t __cdecl internal_6614c40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+8]
        push esi
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        or esi, 0xFFFFFFFF
        call public_6614580
        test al, al
        je public_6614c68
        mov ecx, dword ptr ss : [esp+0xC]
        call public_66127e0
        pop esi
        ret 8
        public_6614c68 : nop
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6614c40)
    }
}

#undef public_6614c68
