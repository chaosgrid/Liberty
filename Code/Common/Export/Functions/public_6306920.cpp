#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d42);

#define public_630692c _public_630692c

PROC_DECLARE(0x6306920, internal_6306920, public_6306920);
extern "C" NAKED register_t __cdecl internal_6306920()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_630692c
        jmp public_6391d42
        public_630692c : nop
        mov eax, offset public_63997b0
        ret 
        UNREACHABLE_TRAP(0x6306920)
    }
}

#undef public_630692c
