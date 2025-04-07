#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63501f0);
CLANG_FORWARD_PROC_SYMBOL(public_6350250);

#define public_6350274 _public_6350274
#define public_635028e _public_635028e

PROC_DECLARE(0x6350250, internal_6350250, public_6350250);
extern "C" NAKED register_t __cdecl internal_6350250()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0x28]
        test byte ptr ds : [eax+0x78], 7
        mov ecx, dword ptr ds : [edx+0x44]
        jne public_6350274
        mov eax, dword ptr ss : [esp+8]
        push eax
        push 0x2EDBE6FF
        push edx
        call public_63501f0
        add esp, 0xC
        ret 
        public_6350274 : nop
        test byte ptr ds : [ecx+0x78], 7
        jne public_635028e
        mov ecx, dword ptr ss : [esp+8]
        push 0x2EDBE6FF
        push ecx
        push edx
        call public_63501f0
        add esp, 0xC
        ret 
        public_635028e : nop
        mov eax, dword ptr ds : [eax+0x98]
        fld dword ptr ds : [eax+0x14C]
        mov ecx, dword ptr ds : [ecx+0x98]
        fadd dword ptr ds : [eax+0x144]
        push ecx
        fadd dword ptr ds : [public_63a53d8]
        fld dword ptr ds : [ecx+0x14C]
        fadd dword ptr ds : [ecx+0x144]
        fadd dword ptr ds : [public_63a53d8]
        fld st(0)
        fmul dword ptr ds : [public_63a5464]
        fadd st, st(2)
        fstp dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ds : [public_63a5464]
        fadd st, st(1)
        fxch 
        fstp st(0)
        fld st(0)
        fadd dword ptr ss : [esp+8]
        fdivr dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        push ecx
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp]
        push edx
        call public_63501f0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6350250)
    }
}

#undef public_6350274
#undef public_635028e
