#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4c80);

#define public_65f1fb2 _public_65f1fb2

PROC_DECLARE(0x65f1fa0, internal_65f1fa0, public_65f1fa0);
extern "C" NAKED register_t __cdecl internal_65f1fa0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f1fb2
        call public_65f4c80
        xor eax, eax
        ret 8
        public_65f1fb2 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x65f1fa0)
    }
}

#undef public_65f1fb2
