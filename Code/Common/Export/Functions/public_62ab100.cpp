#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633c1b0);

#define public_62ab120 _public_62ab120

PROC_DECLARE(0x62ab100, internal_62ab100, public_62ab100);
extern "C" NAKED register_t __cdecl internal_62ab100()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x160]
        xor eax, eax
        test ecx, 0x3FFFFFFF
        je public_62ab120
        push ecx
        call public_633c1b0
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        jmp dword ptr ds : [edx+8]
        public_62ab120 : nop
        ret 
        UNREACHABLE_TRAP(0x62ab100)
    }
}

#undef public_62ab120
