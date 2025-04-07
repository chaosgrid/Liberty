#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ca80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f2cae3 _public_6f2cae3
#define public_6f2caf8 _public_6f2caf8

PROC_DECLARE(0x6f2cac0, internal_6f2cac0, public_6f2cac0);
extern "C" NAKED register_t __cdecl internal_6f2cac0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f2ca80
        test eax, eax
        jne public_6f2caf8
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f2cae3
        push eax
        call public_6f57e26
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_6f2cae3 : nop
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov dword ptr ds : [esi+8], eax
        call public_6f57e9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        xor eax, eax
        public_6f2caf8 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f2cac0)
    }
}

#undef public_6f2cae3
#undef public_6f2caf8
