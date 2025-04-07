#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d42);

#define public_6306abc _public_6306abc

PROC_DECLARE(0x6306ab0, internal_6306ab0, public_6306ab0);
extern "C" NAKED register_t __cdecl internal_6306ab0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_6306abc
        jmp public_6391d42
        public_6306abc : nop
        mov eax, offset public_63997b0
        ret 
        UNREACHABLE_TRAP(0x6306ab0)
    }
}

#undef public_6306abc
