#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c53d0);

#define public_65c53e8 _public_65c53e8

PROC_DECLARE(0x65c53d0, internal_65c53d0, public_65c53d0);
extern "C" NAKED register_t __cdecl internal_65c53d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_65c53e8
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x60]
        public_65c53e8 : nop
        ret 4
        UNREACHABLE_TRAP(0x65c53d0)
    }
}

#undef public_65c53e8
