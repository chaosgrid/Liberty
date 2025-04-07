#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab0);

#define public_4038ed _public_4038ed

PROC_DECLARE(0x4038d0, internal_4038d0, public_4038d0);
extern "C" NAKED register_t __cdecl internal_4038d0()
{
    __asm
    {
        lea eax, ds:[ecx+0x60]
        test eax, eax
        je public_4038ed
        lea eax, ds:[ecx+0x64]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push 0x421
        push ecx
        call public_418ab0
        ret 4
        public_4038ed : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        push eax
        push 0x421
        push ecx
        call public_418ab0
        ret 4
        UNREACHABLE_TRAP(0x4038d0)
    }
}

#undef public_4038ed
