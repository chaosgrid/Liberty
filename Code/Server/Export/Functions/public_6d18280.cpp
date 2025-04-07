#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d127d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d182a7 _public_6d182a7

PROC_DECLARE(0x6d18280, internal_6d18280, public_6d18280);
extern "C" NAKED register_t __cdecl internal_6d18280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d14170
        test eax, eax
        je public_6d182a7
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        mov ecx, eax
        call public_6d127d0
        ret 
        public_6d182a7 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d18280)
    }
}

#undef public_6d182a7
