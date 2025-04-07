#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c53f0);

#define public_65c3ade _public_65c3ade

PROC_DECLARE(0x65c3ad0, internal_65c3ad0, public_65c3ad0);
extern "C" NAKED register_t __cdecl internal_65c3ad0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_65c3ade
        xor al, al
        ret 4
        public_65c3ade : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        push eax
        call public_65c53f0
        ret 4
        UNREACHABLE_TRAP(0x65c3ad0)
    }
}

#undef public_65c3ade
