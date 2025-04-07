#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31e90);
CLANG_FORWARD_PROC_SYMBOL(public_6c34de0);

#define public_6c34dfc _public_6c34dfc

PROC_DECLARE(0x6c34de0, internal_6c34de0, public_6c34de0);
extern "C" NAKED register_t __cdecl internal_6c34de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6c34dfc
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        push ecx
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [eax], edx
        call public_6c31e90
        public_6c34dfc : nop
        ret 
        UNREACHABLE_TRAP(0x6c34de0)
    }
}

#undef public_6c34dfc
