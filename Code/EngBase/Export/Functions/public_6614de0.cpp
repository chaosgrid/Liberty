#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612a70);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);
CLANG_FORWARD_PROC_SYMBOL(public_6614f70);

#define public_6614e1b _public_6614e1b

PROC_DECLARE(0x6614de0, internal_6614de0, public_6614de0);
extern "C" NAKED register_t __cdecl internal_6614de0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        lea eax, ss:[esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        mov ecx, edi
        call public_6614580
        test al, al
        je public_6614e1b
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, edi
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6614f70
        test eax, eax
        je public_6614e1b
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, esi
        call public_6612a70
        public_6614e1b : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6614de0)
    }
}

#undef public_6614e1b
