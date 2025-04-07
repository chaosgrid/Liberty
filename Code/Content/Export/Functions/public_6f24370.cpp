#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24370);

#define public_6f2439b _public_6f2439b

PROC_DECLARE(0x6f24370, internal_6f24370, public_6f24370);
extern "C" NAKED register_t __cdecl internal_6f24370()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0x30
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+4]
        push ecx
        push eax
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        test eax, eax
        je public_6f2439b
        fld dword ptr ds : [public_6fb5e84]
        add esp, 0x30
        ret 
        public_6f2439b : nop
        fld dword ptr ss : [esp]
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x40]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x6f24370)
    }
}

#undef public_6f2439b
