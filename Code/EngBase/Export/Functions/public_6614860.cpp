#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66129c0);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_6614885 _public_6614885

PROC_DECLARE(0x6614860, internal_6614860, public_6614860);
extern "C" NAKED register_t __cdecl internal_6614860()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        call public_6614580
        test al, al
        je public_6614885
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push edx
        call public_66129c0
        public_6614885 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6614860)
    }
}

#undef public_6614885
