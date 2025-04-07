#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100068c0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a458);

#define public_100068d5 _public_100068d5
#define public_100068dc _public_100068dc
#define public_100068e3 _public_100068e3
#define public_100068e5 _public_100068e5

PROC_DECLARE(0x100068c0, internal_100068c0, public_100068c0);
extern "C" NAKED register_t __cdecl internal_100068c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        sub eax, 0
        je public_100068e3
        dec eax
        je public_100068dc
        dec eax
        je public_100068d5
        or eax, 0xFFFFFFFF
        ret 0x10
        public_100068d5 : nop
        mov eax, 2
        jmp public_100068e5
        public_100068dc : nop
        mov eax, 1
        jmp public_100068e5
        public_100068e3 : nop
        xor eax, eax
        public_100068e5 : nop
        mov ecx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call public_1000a458
        add esp, 0xC
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x100068c0)
    }
}

#undef public_100068d5
#undef public_100068dc
#undef public_100068e3
#undef public_100068e5
