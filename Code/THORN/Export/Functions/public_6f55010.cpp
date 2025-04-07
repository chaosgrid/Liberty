#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f525d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f90);
CLANG_FORWARD_PROC_SYMBOL(public_6f55010);

#define public_6f55035 _public_6f55035

PROC_DECLARE(0x6f55010, internal_6f55010, public_6f55010);
extern "C" NAKED register_t __cdecl internal_6f55010()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        push ecx
        push esi
        call public_6f525d0
        add esp, 0xC
        test eax, eax
        je public_6f55035
        push esi
        call public_6f54f90
        add esp, 4
        public_6f55035 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55010)
    }
}

#undef public_6f55035
