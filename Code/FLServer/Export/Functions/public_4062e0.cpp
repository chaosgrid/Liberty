#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab0);

#define public_4062fd _public_4062fd

PROC_DECLARE(0x4062e0, internal_4062e0, public_4062e0);
extern "C" NAKED register_t __cdecl internal_4062e0()
{
    __asm
    {
        lea eax, ds:[ecx+0x60]
        test eax, eax
        je public_4062fd
        lea eax, ds:[ecx+0x64]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push 0x410
        push ecx
        call public_418ab0
        ret 4
        public_4062fd : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        push eax
        push 0x410
        push ecx
        call public_418ab0
        ret 4
        UNREACHABLE_TRAP(0x4062e0)
    }
}

#undef public_4062fd
