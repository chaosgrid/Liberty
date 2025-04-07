#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f50b0);

#define public_65f2167 _public_65f2167

PROC_DECLARE(0x65f2150, internal_65f2150, public_65f2150);
extern "C" NAKED register_t __cdecl internal_65f2150()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f2167
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_65f50b0
        xor eax, eax
        ret 0xC
        public_65f2167 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x65f2150)
    }
}

#undef public_65f2167
