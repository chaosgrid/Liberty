#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12720);
CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d180fc _public_6d180fc

PROC_DECLARE(0x6d180e0, internal_6d180e0, public_6d180e0);
extern "C" NAKED register_t __cdecl internal_6d180e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d14170
        test eax, eax
        je public_6d180fc
        mov ecx, eax
        jmp public_6d12720
        public_6d180fc : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d180e0)
    }
}

#undef public_6d180fc
