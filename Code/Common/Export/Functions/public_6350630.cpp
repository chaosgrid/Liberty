#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350630);

#define public_6350682 _public_6350682

PROC_DECLARE(0x6350630, internal_6350630, public_6350630);
extern "C" NAKED register_t __cdecl internal_6350630()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fst dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x20]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        je public_6350682
        xor eax, eax
        add esp, 0x10
        ret 
        public_6350682 : nop
        mov eax, 1
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6350630)
    }
}

#undef public_6350682
