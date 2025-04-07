#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66129f0);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_66148bd _public_66148bd

PROC_DECLARE(0x6614890, internal_6614890, public_6614890);
extern "C" NAKED register_t __cdecl internal_6614890()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], 0xBF800000
        call public_6614580
        test al, al
        je public_66148bd
        mov ecx, dword ptr ss : [esp+0xC]
        call public_66129f0
        pop ecx
        ret 8
        public_66148bd : nop
        fld dword ptr ss : [esp]
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6614890)
    }
}

#undef public_66148bd
