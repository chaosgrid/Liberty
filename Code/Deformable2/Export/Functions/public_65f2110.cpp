#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5050);

#define public_65f2127 _public_65f2127

PROC_DECLARE(0x65f2110, internal_65f2110, public_65f2110);
extern "C" NAKED register_t __cdecl internal_65f2110()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f2127
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_65f5050
        xor eax, eax
        ret 0xC
        public_65f2127 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x65f2110)
    }
}

#undef public_65f2127
