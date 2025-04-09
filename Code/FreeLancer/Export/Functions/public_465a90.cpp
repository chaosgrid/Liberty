#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_465a90);
CLANG_FORWARD_PROC_SYMBOL(public_4669c0);

#define public_465aa7 _public_465aa7

PROC_DECLARE(0x465a90, internal_465a90, public_465a90);
extern "C" NAKED register_t __cdecl internal_465a90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_465aa7
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        push edx
        call public_4669c0
        public_465aa7 : nop
        ret 
        UNREACHABLE_TRAP(0x465a90)
    }
}

#undef public_465aa7
