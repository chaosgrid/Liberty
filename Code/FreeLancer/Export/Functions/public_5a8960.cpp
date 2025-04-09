#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a8770);
CLANG_FORWARD_PROC_SYMBOL(public_5a8840);
CLANG_FORWARD_PROC_SYMBOL(public_5a8960);

#define public_5a8976 _public_5a8976

PROC_DECLARE(0x5a8960, internal_5a8960, public_5a8960);
extern "C" NAKED register_t __cdecl internal_5a8960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_5a8770
        add esp, 4
        test al, al
        je public_5a8976
        jmp public_5a8840
        public_5a8976 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x5a8960)
    }
}

#undef public_5a8976
