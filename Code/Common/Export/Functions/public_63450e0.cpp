#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63450e0);
CLANG_FORWARD_PROC_SYMBOL(public_6349490);

#define public_63450fb _public_63450fb

PROC_DECLARE(0x63450e0, internal_63450e0, public_63450e0);
extern "C" NAKED register_t __cdecl internal_63450e0()
{
    __asm
    {
        cmp byte ptr ds : [ecx+0x78], 8
        jne public_63450fb
        mov eax, dword ptr ds : [ecx+0x9C]
        mov ecx, dword ptr ds : [eax+0xC]
        push ecx
        mov ecx, dword ptr ds : [eax+0x15C]
        call public_6349490
        public_63450fb : nop
        ret 
        UNREACHABLE_TRAP(0x63450e0)
    }
}

#undef public_63450fb
