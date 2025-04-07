#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5ae0);

#define public_65f2210 _public_65f2210

PROC_DECLARE(0x65f21f0, internal_65f21f0, public_65f21f0);
extern "C" NAKED register_t __cdecl internal_65f21f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        or esi, 0xFFFFFFFF
        test ecx, ecx
        je public_65f2210
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_65f5ae0
        test al, al
        je public_65f2210
        xor eax, eax
        pop esi
        ret 0xC
        public_65f2210 : nop
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65f21f0)
    }
}

#undef public_65f2210
