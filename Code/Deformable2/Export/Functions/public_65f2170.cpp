#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f51d0);

#define public_65f2188 _public_65f2188

PROC_DECLARE(0x65f2170, internal_65f2170, public_65f2170);
extern "C" NAKED register_t __cdecl internal_65f2170()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f2188
        call public_65f51d0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        public_65f2188 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], 0
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x65f2170)
    }
}

#undef public_65f2188
