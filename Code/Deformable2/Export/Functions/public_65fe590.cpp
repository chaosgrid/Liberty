#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fe590);

#define public_65fe59f _public_65fe59f
#define public_65fe5aa _public_65fe5aa

PROC_DECLARE(0x65fe590, internal_65fe590, public_65fe590);
extern "C" NAKED register_t __cdecl internal_65fe590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, 0
        je public_65fe5aa
        dec eax
        je public_65fe59f
        xor eax, eax
        ret 
        public_65fe59f : nop
        mov eax, dword ptr ss : [esp+4]
        shr eax, 2
        and eax, 3
        ret 
        public_65fe5aa : nop
        mov eax, dword ptr ss : [esp+4]
        and eax, 3
        ret 
        UNREACHABLE_TRAP(0x65fe590)
    }
}

#undef public_65fe59f
#undef public_65fe5aa
