#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd030);

#define public_6302c64 _public_6302c64
#define public_6302c6c _public_6302c6c
#define public_6302c83 _public_6302c83
#define public_6302c97 _public_6302c97

PROC_DECLARE(0x6302ba0, internal_6302ba0, public_6302ba0);
extern "C" NAKED register_t __cdecl internal_6302ba0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+8]
        sub esp, 0x14
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
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
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6302c97
        fld dword ptr ds : [public_639a1d0]
        mov eax, dword ptr ds : [ecx]
        fdiv st, st(1)
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, offset public_63fcc58
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x10]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x14]
        fmul st, st(3)
        fmul dword ptr ds : [eax+8]
        fxch 
        fmul dword ptr ds : [eax+4]
        faddp 
        fxch 
        fmul dword ptr ds : [eax]
        lea eax, ss:[esp+0x20]
        push eax
        faddp 
        fabs 
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fdiv dword ptr ds : [public_63ed178]
        fstp dword ptr ss : [esp+8]
        call public_62fd030
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [public_63fcc5c]
        cmp ecx, eax
        je public_6302c64
        mov edx, dword ptr ss : [esp+0x20]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6302c64
        lea ecx, ss:[esp+0x1C]
        jmp public_6302c6c
        public_6302c64 : nop
        mov dword ptr ss : [esp+0x18], eax
        lea ecx, ss:[esp+0x18]
        public_6302c6c : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        je public_6302c83
        fld dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp+4]
        fmulp 
        add esp, 0x14
        ret 
        public_6302c83 : nop
        fld dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp+4]
        fmulp 
        add esp, 0x14
        ret 
        public_6302c97 : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6302ba0)
    }
}

#undef public_6302c64
#undef public_6302c6c
#undef public_6302c83
#undef public_6302c97
