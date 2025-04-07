#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4d30);

#define public_65f1fd7 _public_65f1fd7

PROC_DECLARE(0x65f1fc0, internal_65f1fc0, public_65f1fc0);
extern "C" NAKED register_t __cdecl internal_65f1fc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f1fd7
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_65f4d30
        xor eax, eax
        ret 0xC
        public_65f1fd7 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x65f1fc0)
    }
}

#undef public_65f1fd7
