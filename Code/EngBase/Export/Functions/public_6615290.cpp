#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612940);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_66152bd _public_66152bd

PROC_DECLARE(0x6615290, internal_6615290, public_6615290);
extern "C" NAKED register_t __cdecl internal_6615290()
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
        je public_66152bd
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        call public_6612940
        pop esi
        ret 0xC
        public_66152bd : nop
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6615290)
    }
}

#undef public_66152bd
