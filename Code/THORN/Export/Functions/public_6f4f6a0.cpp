#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);

#define public_6f4f6b8 _public_6f4f6b8

PROC_DECLARE(0x6f4f6a0, internal_6f4f6a0, public_6f4f6a0);
extern "C" NAKED register_t __cdecl internal_6f4f6a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f4b090
        add esp, 4
        test eax, eax
        jne public_6f4f6b8
        fld qword ptr ss : [esp+0xC]
        pop esi
        ret 
        public_6f4f6b8 : nop
        push esi
        call public_6f4f660
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f6a0)
    }
}

#undef public_6f4f6b8
