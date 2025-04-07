#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e61a0);

#define public_62e61d9 _public_62e61d9

PROC_DECLARE(0x62e61a0, internal_62e61a0, public_62e61a0);
extern "C" NAKED register_t __cdecl internal_62e61a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0xC
        test ecx, ecx
        je public_62e61d9
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp]
        push edx
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        add esp, 0xC
        ret 
        public_62e61d9 : nop
        fld dword ptr ds : [public_6399408]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62e61a0)
    }
}

#undef public_62e61d9
