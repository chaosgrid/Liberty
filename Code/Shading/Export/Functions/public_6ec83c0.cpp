#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec83c0);

#define public_6ec83d9 _public_6ec83d9
#define public_6ec83e7 _public_6ec83e7

PROC_DECLARE(0x6ec83c0, internal_6ec83c0, public_6ec83c0);
extern "C" NAKED register_t __cdecl internal_6ec83c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+8]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_6ec83d9
        mov eax, 0xFFFFFFFF
        ret 
        public_6ec83d9 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x44
        jp public_6ec83e7
        xor eax, eax
        ret 
        public_6ec83e7 : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6ec83c0)
    }
}

#undef public_6ec83d9
#undef public_6ec83e7
