#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12850);
CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d18276 _public_6d18276

PROC_DECLARE(0x6d18250, internal_6d18250, public_6d18250);
extern "C" NAKED register_t __cdecl internal_6d18250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d14170
        test eax, eax
        je public_6d18276
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        mov ecx, eax
        call public_6d12850
        public_6d18276 : nop
        ret 
        UNREACHABLE_TRAP(0x6d18250)
    }
}

#undef public_6d18276
