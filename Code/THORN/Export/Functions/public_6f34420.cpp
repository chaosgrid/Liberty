#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f345f8 _public_6f345f8
#define public_6f3462f _public_6f3462f

PROC_DECLARE(0x6f34420, internal_6f34420, public_6f34420);
extern "C" NAKED register_t __cdecl internal_6f34420()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        sub esp, 0x64
        test ecx, ecx
        je public_6f3462f
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp]
        push eax
        mov eax, dword ptr ss : [esp+0x70]
        push eax
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6f5a1b8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fchs 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6f5a1d4]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], ecx
        fsub st, st(1)
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], eax
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6f5a1d4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6f5a1d4]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6f5a1b8]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fsubp 
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x20]
        fmul st, st(3)
        mov dword ptr ss : [esp+0x48], eax
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_6f61e18]
        test eax, eax
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ss : [esp+0x14]
        fsubp 
        mov dword ptr ss : [esp+0x60], edx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x10]
        fmul st, st(4)
        fsubp 
        fst dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6f5a1b8]
        fstp dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x2C]
        fxch 
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x54], ecx
        fstp dword ptr ss : [esp+0x50]
        fxch 
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x4C]
        jne public_6f345f8
        call public_6f57de0
        mov dword ptr ds : [public_6f61e18], eax
        public_6f345f8 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        xor eax, eax
        add esp, 0x64
        ret 0xC
        public_6f3462f : nop
        or eax, 0xFFFFFFFF
        add esp, 0x64
        ret 0xC
        UNREACHABLE_TRAP(0x6f34420)
    }
}

#undef public_6f345f8
#undef public_6f3462f
