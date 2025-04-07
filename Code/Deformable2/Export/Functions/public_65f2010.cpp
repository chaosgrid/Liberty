#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f202b);
CLANG_FORWARD_PROC_SYMBOL(public_65f5950);

PROC_DECLARE(0x65f2010, internal_65f2010, public_65f2010);
extern "C" NAKED register_t __cdecl internal_65f2010()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f202b
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_65f202b
        push eax
        call public_65f5950
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x65f2010)
    }
}
